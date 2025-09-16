#include <iostream>
#include <string>
#include <iomanip> // pour std::fixed et std::setprecision
#include "Account.h"


    Account::Account(std::string name, double balance)
        : name{name}, balance{balance} {}


    // Méthode de dépôt
    bool Account::deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }

    // Méthode de retrait
    bool Account::withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    // Surcharge de l'opérateur <<
    std::ostream& operator<<(std::ostream& os, const Account& acc) {
        os << std::fixed << std::setprecision(2); // format flottant avec 2 décimales
        os << "[Account: " << acc.name << ": " << acc.balance << "]";
        return os;
    }

