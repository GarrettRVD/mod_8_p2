//
// Created by GRees on 11/21/2017.
//

#ifndef MOD_8_P2_BANKACCOUNT_H
#define MOD_8_P2_BANKACCOUNT_H


class BankAccount
{
private:
    int BalanceInPennies;
public:
    BankAccount();
    ~BankAccount();

    int getBalanceInPennies() const;
    void setBalanceInPennies (int BalanceInPennies);

    bool operator < (const BankAccount &b1);

};



#endif //MOD_8_P2_BANKACCOUNT_H
