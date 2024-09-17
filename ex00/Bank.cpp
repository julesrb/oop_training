#include "Bank.hpp"


Bank::Bank() : _liquidity(0), _ids(0) {}


Bank::~Bank() 
{
	std::vector<Account *>::iterator it;
	for (it = _clients.begin(); it != _clients.end(); it++)
	{
		_clients.erase(it);
	}
	_clients.clear();

}


Account & Bank::createAccount()
{
	int clientID = _ids++;

	Account* const client = new Account(clientID, *this);
	_clients.push_back(client);
	return *client;
}


void Bank::deleteAccount(Account & account)
{
	delete &account;
	std::vector<Account *>::iterator it;
	for (it = _clients.begin(); it != _clients.end(); it++)
	{
		if (*it == &account)
			_clients.erase(it);
	}
}

void Bank::bankingFees(Account & account)
{
	account._value -= 3;
}

void Bank::giveLoan(const int& loan, Account & account)
{
	account.addMoney(loan);
	_liquidity -= loan;
}


const float& Bank::getLiquidity() const
{
	return this->_liquidity;
}

const std::vector<Account *>& Bank::getClients() const
{
	return this->_clients;
}


void Bank::addLiquidity(int const & euro)
{
	if (euro > 0)
		this->_liquidity += euro;
}


std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
{
	p_os << "Liquidity : " << p_bank.getLiquidity() << std::endl;

	const std::vector<Account *>& clients = p_bank.getClients();
	std::vector<Account *>::const_iterator it;
	
	for (it = clients.begin(); it != clients.end(); ++it)
	{
		p_os << **it << "\n";
	}

	return p_os;
}