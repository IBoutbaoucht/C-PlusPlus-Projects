// Checking_Account.h
#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checking_Account : public Account {
public:
    static constexpr double per_check_fee = 1.50;

    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override; 

    friend std::ostream& operator<<(std::ostream& os, const Checking_Account& acc);
};

#endif // _CHECKING_ACCOUNT_H_