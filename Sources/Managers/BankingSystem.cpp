//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Managers/BankingSystem.h"
#include <vector>

BankingSystem *BankingSystem::instance = 0;

BankingSystem::BankingSystem() {
    authenticationManager = AuthenticationManager::getInstance();
    accountManager = AccountManager::getInstance();
}

void BankingSystem::initialize() {
    if(!accountManager->getAllSystemAccount().empty()) {
        authenticationManager->createUser("admin", "admin123", "admin", "admin", true);
    }
}

BankingSystem *BankingSystem::getInstance() {
    if (instance == 0) {
        instance = new BankingSystem();
    }
    return instance;
}

void BankingSystem::signIn(std::string username, std::string password) {
    authenticationManager->signIn(username, password);
}

void BankingSystem::createUser(std::string username, std::string password, std::string name,
                               std::string lastName, bool system) {
    authenticationManager->createUser(username, password, name, lastName, system);
}

Account BankingSystem::getAccountInfo(std::string username) const {
    return accountManager->getAccountInfo(username);
}

Account BankingSystem::getAccountInfo() const {
    return accountManager->getAccountInfo(authenticationManager->getActiveUsername());
}
