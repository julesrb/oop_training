#include "Account.hpp"

Account::Account(int id, Bank & bank) : _id(id), _bank(bank){}


Account::~Account(){}


void Account::addMoney(const int& euro) // give 5% to bank
{
	this->_value += euro * 0.95;
	this->_bank.addLiquidity(euro * 0.05);
}


void Account::requestLoan(const int& loan)
{
	if (this->_bank.getLiquidity() > loan)
	{
		this->_bank.giveLoan(loan, *this);
		std::cout << "loan : " << loan << " accepted" << std::endl;
	}
	else
		std::cout << "loan : " << loan << " refused" << std::endl;
}


const int& Account::getId() const
{
	return this->_id;
}

const float& Account::getValue() const
{
	return this->_value;
}


std::ostream& operator << (std::ostream& p_os, const Account& p_account)
{
	p_os << "[" << p_account.getId() << "] - [" << p_account.getValue() << "]";
	return (p_os);
}