#include <iostream>
#include <vector>
#include "Bank.hpp"
#include "Account.hpp"

int main()
{
	Bank bank = Bank();
	bank.addLiquidity(1000);

	std::cout << "Bank start: " << std::endl;
	std::cout << bank << "\n" << std::endl;
	
	Account& accountA = bank.createAccount();
	Account& accountB = bank.createAccount();
	Account& accountC = bank.createAccount();
	Account& accountD = bank.createAccount();
	(void)accountC;
	(void)accountD;

	std::cout << "Bank with new account: " << std::endl;
	std::cout << bank << "\n" << std::endl;

	accountA.addMoney(100);

	std::cout << "Bank after 5%: " << std::endl;
	std::cout << bank << "\n" << std::endl;

	accountC.requestLoan(2000);
	accountD.requestLoan(1000);

	std::cout << "\nBank after loans: " << std::endl;
	std::cout << bank << "\n" << std::endl;

	bank.bankingFees(accountC);
	bank.deleteAccount(accountB);

	std::cout << "Bank after deletion: " << std::endl;
	std::cout << bank << "\n" << std::endl;

	return (0);
}
