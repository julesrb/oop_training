#include "Account.hpp"

Account::Account(int id) : _id(id) {}


Account::~Account();


void Account::addMoney(int); // give 5% to bank


void Account::requestLoan(Bank const &, int);