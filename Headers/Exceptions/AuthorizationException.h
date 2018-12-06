//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H
#define BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H

#include "Exception.h"

class AuthorizationException : public Exception {
public:
    AuthorizationException(const char * const desc);
    AuthorizationException(std::string desc);
    virtual std::string what();
};


#endif //BANKINGSYSTEM_AUTHORIZATIONEXCEPTION_H
