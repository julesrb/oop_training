#pragma once

#include <iostream>
#include <vector>
#include "Account.hpp"



class Bank
{

    private:

    std::vector<Account *> _clients;
    int _liquidity;
    int _ids;


    public:

    Bank();
    ~Bank();

    // int const & getLiquidity();
    // void setLiquidity(int const &);

    Account const & createAccount();
    void deleteAccount(Account const &);


};