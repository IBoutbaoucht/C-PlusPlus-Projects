
#include "Account.h"
#include "Checking_Account.h"

// ----- Classe Checking_Account -----

    Checking_Account::Checking_Account(std::string name, double balance)
            : Account{name, balance} {}
    
    // Redéfinition de withdraw avec les frais
    bool Checking_Account::withdraw(double amount) {
        double total = amount + per_check_fee;
        if (amount > 0 && total <= balance) {
            balance -= total;
            return true;
        }
        return false;
    }

    // deposit hérité tel quel

    std::ostream& operator<<(std::ostream& os, const Checking_Account& acc) {
        os << std::fixed << std::setprecision(2);
        os << "[Checking_Account: " << acc.name << ": " << acc.balance << "]";
        return os;
    }

