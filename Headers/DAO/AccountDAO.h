//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_ACCOUNTDAO_H
#define BANKINGSYSTEM_ACCOUNTDAO_H

#include "../Models/Credentials.h"
#include "../Models/Account.h"

class AccountDAO {
private:
    static AccountDAO* instance;

    AccountDAO();

public:
    static AccountDAO* getInstance();

    Credentials getCredentials(std::string username);
    Account getAccount(std::string username);
    bool doesAccountExist(std::string username);

    Account createAccount(Account account, Credentials credentials);
    Account updateAccount(std::string userName, Account account);
};


#endif //BANKINGSYSTEM_ACCOUNTDAO_H
