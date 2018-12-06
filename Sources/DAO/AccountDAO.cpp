//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/DAO/AccountDAO.h"
#include "../../Headers/Exceptions/RuntimeException.h"
#include "../../Headers/Exceptions/UserNotFoundException.h"
#include <vector>

AccountDAO* AccountDAO::instance = 0;

AccountDAO::AccountDAO() {}

AccountDAO *AccountDAO::getInstance() {
    if(instance == 0){
        instance = new AccountDAO();
    }
    return instance;
}

std::vector<Account> AccountDAO::getAllAccounts() {
    std::vector<Account> values;
    for(auto it = accountDB.begin(); it != accountDB.end(); ++it) {
        values.push_back(it->second);
    }
    return values;
}

Account AccountDAO::getAccount(std::string username) {
    return accountDB.at(username);
}

bool AccountDAO::doesAccountExist(std::string username) {
    return accountDB.find(username) != accountDB.end();
}

Account AccountDAO::createAccount(Account account, Credentials credentials) {
    accountDB.insert(std::pair<std::string, Account>(account.username, account));
    credentialDB.insert(std::pair<std::string, Credentials>(account.username, credentials));
    return account;
}

Account AccountDAO::updateAccount(std::string userName, Account account) {
    if(!doesAccountExist(userName)) {
        throw UserNotFoundException("User does not exist");
    }
    accountDB.insert(std::pair<std::string, Account>(account.username, account));
    return account;
}

void AccountDAO::deleteAccount(std::string userName) {
    accountDB.erase(userName);
    credentialDB.erase(userName);
}

Credentials AccountDAO::getCredentials(std::string username) {
    return credentialDB.at(username);
}
