//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Util/UserUtil.h"
#include "../../Headers/Util/StringUtil.h"
#include "../../Headers/Config/AuthConfig.h"

bool UserUtil::isValidUsername(std::string username) {
    if(username.empty()) {
        return false;
    }
    if(username.length() < AuthConfig::MINIMUM_ALLOWED_USERNAME_LENGTH) {
        return false;
    }
    if(!StringUtil::isAlpha(username[0])) {
        return false;
    }
    for (char sym : username) {
        if(!StringUtil::isAlphaNumeric(sym) && sym != '_') {
            return false;
        }
    }
    return true;
}

bool UserUtil::isSystemAccount(Account account) {
    return account.permissions.find(Permissions::SYSTEM_ACTIONS) != account.permissions.end();
}
