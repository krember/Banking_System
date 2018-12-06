//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_CREDENTIALS_H
#define BANKINGSYSTEM_CREDENTIALS_H


#include <string>

struct Credentials {
    std::string username;
    std::string password;

    Credentials(const std::string &username, const std::string &password);
};


#endif //BANKINGSYSTEM_CREDENTIALS_H
