
#include "Savings_Account.h"

// ----- Classe Savings_Account -----

    Savings_Account::Savings_Account(std::string name ,
                        double balance ,
                        double int_rate )
            : Account{name, balance}, int_rate{int_rate} {}

    // Redéfinition de deposit : applique l’intérêt
    bool Savings_Account::deposit(double amount) {
        if (amount > 0) {
            amount += amount * int_rate;
            return Account::deposit(amount);
        }
        return false;
    }

    // withdraw hérité tel quel

    std::ostream& operator<<(std::ostream& os, const Savings_Account& acc) {
        os << std::fixed << std::setprecision(2);
        os << "[Savings_Account: " << acc.name << ": " << acc.balance
            << ", " << acc.int_rate * 100 << "%]";
        return os;
    }

