//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Models/Account.h"

Account::Account(const std::string &username, const std::string &name, const std::string &lastName,
                 const int cash, const std::set<Permissions> &permissions) : username(username), name(name), lastName(lastName),
                                                                             balance(cash), permissions(permissions) {}

Account::Account(const std::string &username, const std::string &name, const std::string &lastName, const int cash) :
        username(username), name(name), lastName(lastName), balance(cash) {}
