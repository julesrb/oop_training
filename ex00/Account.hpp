#pragma once

#include <iostream>
#include <unordered_set>
#include "Bank.hpp"

class Account
{

    private:

    const int _id;
	int value;

    Account(int);
    friend class Bank;

    public:

    ~Account();
    void addMoney(int); // give 5% to bank

    void requestLoan(Bank const &, int);

};