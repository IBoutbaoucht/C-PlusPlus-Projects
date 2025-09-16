// Account.h
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>
#include <iostream>
#include <iomanip>

class Account {
protected:
    std::string name;
    double balance;

public:
    static constexpr const char* def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;

    Account(std::string name = def_name, double balance = def_balance);
    virtual ~Account() = default;

    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);

    friend std::ostream& operator<<(std::ostream& os, const Account& acc);
};

#endif // _ACCOUNT_H_