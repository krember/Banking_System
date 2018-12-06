//
// Created by Narek Hovhannisyan and/or Milena Mamyan .
//

#include "../../Headers/Managers/AuthenticationManager.h"
#include "../../Headers/Util/Precondition.h"
#include "../../Headers/Util/UserUtil.h"
#include "../../Headers/Config/AuthConfig.h"
#include "../../Headers/Exceptions/UserNotFoundException.h"

static AuthenticationManager* AuthenticationManager::instance = 0;

AuthenticationManager::AuthenticationManager() {
    accountDAO = AccountDAO::getInstance();
}

AuthenticationManager *AuthenticationManager::getInstance() {
    if(instance == 0) {
        instance = new AuthenticationManager();
    }
    return instance;
}

std::string AuthenticationManager::getActiveUsername() const {
    return activeUsername;
}

void AuthenticationManager::signIn(std::string username, std::string password) {
    Precondition::checkArgument(UserUtil::isValidUsername(username), "Invalid username provided.");
    Precondition::checkArgument(password.length() < AuthConfig::MINIMUM_ALLOWED_PASSWORD_LENGTH,
                                "Password is too short. (More than " + std::to_string(AuthConfig::MINIMUM_ALLOWED_PASSWORD_LENGTH) + " symbols required");

    try {
        Credentials credentials = accountDAO->getCredentials(username);
        if (credentials.password != password) {
            throw UserNotFoundException("Given username or password is invalid");
        }
        Account account = accountDAO->getAccount(username);
        activeUsername = account.username;
    }
    catch(const Exception & exception) {
        throw UserNotFoundException("Given username or password is invalid");
    }
}

void AuthenticationManager::createUser(std::string username, std::string password, std::string name, std::string lastName, bool system) {
    Precondition::checkArgument(UserUtil::isValidUsername(username), "Invalid username provided.");
    Precondition::checkArgument(password.length() < AuthConfig::MINIMUM_ALLOWED_PASSWORD_LENGTH,
                                "Password is too short. (More than " + std::to_string(AuthConfig::MINIMUM_ALLOWED_PASSWORD_LENGTH) + " symbols required");
    Precondition::checkArgument(!accountDAO->doesAccountExist(username), "Account with username " + username + " already exists.");

    try {
        // TODO : can hash password
        if(system) {
            Account account = Account(username, name, lastName, -1);
            account.permissions.insert(Permissions::SYSTEM_ACTIONS);
            accountDAO->createAccount(account, Credentials(username, password));
        } else {
            accountDAO->createAccount(Account(username, name, lastName, 0), Credentials(username, password));
        }
    }
    catch(const Exception & exception) {
        throw UserNotFoundException("Given username or password is invalid");
    }
}