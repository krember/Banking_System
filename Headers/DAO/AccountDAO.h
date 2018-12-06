//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_ACCOUNTDAO_H
#define BANKINGSYSTEM_ACCOUNTDAO_H

#include <map>
#include "../Models/Credentials.h"
#include "../Models/Account.h"

class AccountDAO {
private:
    static AccountDAO* instance;

    AccountDAO();
    std::map<std::string, Account> accountDB;
    std::map<std::string, Credentials> credentialDB;

public:
    static AccountDAO* getInstance();

    std::vector<Account> getAllAccounts();

    Account getAccount(std::string username);
    Account createAccount(Account account, Credentials credentials);
    Account updateAccount(std::string userName, Account account);
    void deleteAccount(std::string userName);
    bool doesAccountExist(std::string username);

    Credentials getCredentials(std::string username);
};

#endif //BANKINGSYSTEM_ACCOUNTDAO_H