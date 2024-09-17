#pragma once

#include <iostream>
#include "Bank.hpp"

class Bank;

class Account
{
	private:

		const int _id;
		Bank& _bank;
		float _value;

		Account(int, Bank &);
		friend class Bank;

	public:

		~Account();
		const int& getId() const;
		const float& getValue() const;

		void addMoney(const int&);
		void requestLoan(const int&);
};

std::ostream& operator << (std::ostream& p_os, const Account& p_account);
