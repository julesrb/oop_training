#include "Bank.hpp"


Bank::Bank() : _liquidity(0), _ids(0) {}


Bank::~Bank() {}


Account const & Bank::createAccount()
{
    int clientID = _ids++;

    Account* const client = new Account(clientID);
    _clients.push_back(client);
    return *client;
}


void Bank::deleteAccount(Account const &)
{

}


    // int const & getLiquidity();
    // void setLiquidity(int const &);
