//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Exceptions/AuthorizationException.h"

AuthorizationException::AuthorizationException(const char * const desc) : Exception(desc)
{
}

AuthorizationException::AuthorizationException(std::string desc) : Exception(desc)
{
}

std::string AuthorizationException::what()
{
    return "AuthorizationException: " + Exception::what();
}
