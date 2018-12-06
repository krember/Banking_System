//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Exceptions/UserNotFoundException.h"

UserNotFoundException::UserNotFoundException(const char * const desc) : Exception(desc)
{
}

UserNotFoundException::UserNotFoundException(std::string desc) : Exception(desc)
{
}

std::string UserNotFoundException::what()
{
    return "UserNotFoundException: " + Exception::what();
}
