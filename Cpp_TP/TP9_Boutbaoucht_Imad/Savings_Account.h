// Savings_Account.h
#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"

class Savings_Account : public Account { 
private:
    static constexpr double def_int_rate = 0.0;

protected:
    double int_rate;

public:
    Savings_Account(std::string name = "Unnamed Savings Account", double balance = 0.0, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;

    friend std::ostream& operator<<(std::ostream& os, const Savings_Account& acc);
};

#endif // _SAVINGS_ACCOUNT_H_