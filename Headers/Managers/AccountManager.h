//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_ACCOUNTMANAGER_H
#define BANKINGSYSTEM_ACCOUNTMANAGER_H


#include "../DAO/AccountDAO.h"
#include "AuthenticationManager.h"

class AccountManager {
private:
    static AccountManager* instance;

    AccountDAO* accountDAO;
    AuthenticationManager *authenticationManager;

    AccountManager();

public:
    static AccountManager* getInstance();

    Account getAccountInfo(std::string username) const;
    Account cashOut(unsigned cash);
    Account cashIn(unsigned cash);
    Account transfer(unsigned cash, std::string transferTo);
    Account systemTransfer(unsigned cash, std::string transferFrom, std::string transferTo);
    Account balance();
    std::vector<Account> getAllSystemAccount();
    unsigned long numberOfAccounts();
};


#endif //BANKINGSYSTEM_ACCOUNTMANAGER_H
