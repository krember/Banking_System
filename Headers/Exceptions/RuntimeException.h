//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_RUNTIMEEXCEPTION_H
#define BANKINGSYSTEM_RUNTIMEEXCEPTION_H


#include "Exception.h"

class RuntimeException : public Exception {
public:
    RuntimeException(const char * const desc);
    RuntimeException(std::string desc);
    virtual std::string what();
};

#endif //BANKINGSYSTEM_RUNTIMEEXCEPTION_H
