//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_AUTHCONFIG_H
#define BANKINGSYSTEM_AUTHCONFIG_H


#include <string>

class AuthConfig {
private:
    AuthConfig();

public:
    static const unsigned MINIMUM_ALLOWED_PASSWORD_LENGTH = 6;
    static const unsigned MINIMUM_ALLOWED_USERNAME_LENGTH = 6;
};


#endif //BANKINGSYSTEM_AUTHCONFIG_H
