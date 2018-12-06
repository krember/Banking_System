//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Exceptions/RuntimeException.h"

RuntimeException::RuntimeException(const char * const desc) : Exception(desc)
{
}

RuntimeException::RuntimeException(std::string desc) : Exception(desc)
{
}

std::string RuntimeException::what()
{
    return "RuntimeException: " + Exception::what();
}
