//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_PRECONDITION_H
#define BANKINGSYSTEM_PRECONDITION_H

#include <string>
#include "../Models/Account.h"

class Precondition {
public:
    static void checkArgument(bool expression, std::string message);
    static void checkPrivilege(bool expression, std::string message = "You are not authorized to perform this operation");
    static void checkPrivilege(Account account, Permissions permission, std::string message = "You are not authorized to perform this operation");
    static void checkActionRequirment(bool expression, std::string message);
};


#endif //BANKINGSYSTEM_PRECONDITIONS_H
