//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Util/Precondition.h"
#include "../../Headers/Exceptions/InvalidArgumentException.h"
#include "../../Headers/Exceptions/AuthorizationException.h"
#include "../../Headers/Exceptions/RuntimeException.h"

void Precondition::checkArgument(bool expression, std::string message) {
    if(!expression) {
        throw InvalidArgumentException(message);
    }
}

void Precondition::checkPrivilege(bool expression, std::string message) {
    if(!expression) {
        throw AuthorizationException(message);
    }
}

void Precondition::checkPrivilege(Account account, Permissions permission, std::string message) {
    if(account.permissions.find(permission) != account.permissions.end()) {
        throw AuthorizationException(message);
    }
}

void Precondition::checkActionRequirment(bool expression, std::string message) {
    if(!expression) {
        throw RuntimeException(message);
    }
}
