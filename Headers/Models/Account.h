//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_ACCOUNT_H
#define BANKINGSYSTEM_ACCOUNT_H


#include <string>
#include <set>
#include "Permissions.h"

// TODO - derive System and User accounts
struct Account {
    std::string username;
    std::string name;
    std::string lastName;
    std::set<Permissions> permissions;
    int balance;

    Account(const std::string &username, const std::string &name, const std::string &lastName, const int cash,
            const std::set<Permissions> &permissions);

    Account(const std::string &username, const std::string &name, const std::string &lastName, const int cash);
};


#endif //BANKINGSYSTEM_ACCOUNT_H
