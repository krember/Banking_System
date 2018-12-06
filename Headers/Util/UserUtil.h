//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_AUTHUTIL_H
#define BANKINGSYSTEM_AUTHUTIL_H

#include <string>
#include "../Models/Account.h"

class UserUtil {
public:
    static bool isValidUsername(std::string username);

    static bool isSystemAccount(Account account);
};


#endif //BANKINGSYSTEM_AUTHUTIL_H
