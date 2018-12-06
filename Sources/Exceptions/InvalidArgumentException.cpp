//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Exceptions/InvalidArgumentException.h"

InvalidArgumentException::InvalidArgumentException(const char * const desc) : Exception(desc)
{
}

InvalidArgumentException::InvalidArgumentException(std::string desc) : Exception(desc)
{
}

std::string InvalidArgumentException::what()
{
    return "InvalidArgumentException: " + Exception::what();
}
