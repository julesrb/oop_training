#pragma once

#include <iostream>
#include <vector>
#include "Account.hpp"

class Account;

class Bank
{
	private:

		std::vector<Account *> _clients;
		float _liquidity;
		int _ids;

	public:

		Bank();
		~Bank();

		const std::vector<Account *>& getClients() const;
		const float& getLiquidity() const;
		void addLiquidity(const int&);

		Account & createAccount();
		void deleteAccount(Account &);
		void bankingFees(Account &);
		void giveLoan(const int&, Account &);
};

std::ostream& operator << (std::ostream& p_os, const Bank& p_bank);