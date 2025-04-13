
#include "Trust_Account.h"

// ----- Classe Trust_Account -----

    Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
            : Savings_Account{name, balance, int_rate}, num_withdrawals{0} {}
    
    bool Trust_Account::deposit(double amount)  {
        if (amount >= bonus_threshold) {
            Account::deposit(bonus_amount); // Ajouter le bonus
        }
        return Savings_Account::deposit(amount);
    }

    bool Trust_Account::withdraw(double amount)  {
        if (num_withdrawals >= max_withdrawals)
            return false;
        if (amount > balance * max_withdraw_percent)
            return false;

        if (Account::withdraw(amount)) {
            num_withdrawals++;
            return true;
        }
        return false;
    }

    std::ostream& operator<<(std::ostream& os, const Trust_Account& acc) {
        os << std::fixed << std::setprecision(2);
        os << "[Trust_Account: " << acc.name
            << ": " << acc.balance
            << ", " << acc.int_rate * 100 << "%"
            << ", " << acc.num_withdrawals << "]";
        return os;
    }
