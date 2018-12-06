//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Exceptions/Exception.h"

Exception::Exception(const char * const desc) : m_description(desc)
{
}

Exception::Exception(std::string desc) : m_description(desc)
{
}

std::string Exception::what()
{
    return  m_description;
}
