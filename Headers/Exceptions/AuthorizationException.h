//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H
#define BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H

#include "Exception.h"

class AuthorizationException : public Exception {
public:
    explicit AuthorizationException(const char * const desc);
    explicit AuthorizationException(std::string desc);
    std::string what() override;
};


#endif //BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H
