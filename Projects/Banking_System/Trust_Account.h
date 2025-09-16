// Trust_Account.h
#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"
 
class Trust_Account : public Savings_Account {
private:
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr int max_withdrawals = 3;
    static constexpr double max_withdraw_percent = 0.2;

    int num_withdrawals;

public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = 0.0);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;

    friend std::ostream& operator<<(std::ostream& os, const Trust_Account& acc);
};

#endif // _TRUST_ACCOUNT_H_