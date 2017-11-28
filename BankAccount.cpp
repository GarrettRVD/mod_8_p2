//
// Created by GRees on 11/21/2017.
//

#include "BankAccount.h"

BankAccount::BankAccount()
{

}

BankAccount::~BankAccount()
{

}

bool BankAccount::operator < (const BankAccount &b1)
{
    return BalanceInPennies < b1.BalanceInPennies;
}

int BankAccount::getBalanceInPennies() const
{
    return BalanceInPennies;
}

void BankAccount::setBalanceInPennies(int BalanceInPennies)
{
    BankAccount::BalanceInPennies = BalanceInPennies;
}


