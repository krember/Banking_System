//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Managers/AccountManager.h"
#include "../../Headers/Util/UserUtil.h"
#include "../../Headers/Exceptions/AuthorizationException.h"
#include "../../Headers/Util/Precondition.h"
#include <vector>

AccountManager* AccountManager::instance = 0;

AccountManager::AccountManager() {
    accountDAO = AccountDAO::getInstance();
    authenticationManager = AuthenticationManager::getInstance();
}

AccountManager *AccountManager::getInstance() {
    if(instance == 0){
        instance = new AccountManager();
    }
    return instance;
}

Account AccountManager::getAccountInfo(std::string username) const {
    return accountDAO->getAccount(username);
}

Account AccountManager::cashOut(unsigned cash) {
    Account account = accountDAO->getAccount(authenticationManager->getActiveUsername());

    Precondition::checkArgument(cash > 0, "Cannot cash out negative amount");
    Precondition::checkPrivilege(!UserUtil::isSystemAccount(account));
    Precondition::checkActionRequirment(account.balance >= cash, "Your balance is not enough");

    account.balance -= cash;
    accountDAO->updateAccount(authenticationManager->getActiveUsername(), account);
}

unsigned long AccountManager::numberOfAccounts() {
    return accountDAO->getAllAccounts().size();
}

std::vector<Account> AccountManager::getAllSystemAccount() {
    std::vector<Account> systems;
    std::vector<Account> all;

    std::copy_if(all.begin(), all.end(), std::back_inserter(systems),
                 [](Account acc){return acc.permissions.find(Permissions::SYSTEM_ACTIONS) != acc.permissions.end();});
    return systems;
}