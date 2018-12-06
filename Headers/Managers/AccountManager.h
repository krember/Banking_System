//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_ACCOUNTMANAGER_H
#define BANKINGSYSTEM_ACCOUNTMANAGER_H


#include "../DAO/AccountDAO.h"
#include "AuthenticationManager.h"

class AccountManager {
private:
    AccountDAO* accountDAO;
    AuthenticationManager *authenticationManager;
    static AccountManager* instance;

    AccountManager();

public:
    static AccountManager* getInstance();

    Account getAccountInfo(std::string username) const;

    Account cashOut(unsigned cash);
};


#endif //BANKINGSYSTEM_ACCOUNTMANAGER_H
