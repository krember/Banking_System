//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_BANKSYSTEM_H
#define BANKINGSYSTEM_BANKSYSTEM_H


#include <string>
#include "AuthenticationManager.h"
#include "AccountManager.h"

class BankingSystem {
private:
    static BankingSystem* instance;

    AuthenticationManager* authenticationManager;
    AccountManager* accountManager;

    BankingSystem();
public:
    static BankingSystem* getInstance();

    void initialize();

    void signIn(std::string username, std::string password);
    void createUser(std::string username, std::string password, std::string name, std::string lastName, bool system = false);
    Account getAccountInfo() const;
    Account getAccountInfo(std::string username)  const;
};


#endif //BANKINGSYSTEM_BANKSYSTEM_H
