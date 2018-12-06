cmake_minimum_required(VERSION 3.10)
project(BankingSystem)

set(CMAKE_CXX_STANDARD 11)

add_executable(BankingSystem main.cpp Sources/Managers/BankingSystem.cpp Headers/Managers/BankingSystem.h Sources/Managers/AuthenticationManager.cpp
        Headers/Managers/AuthenticationManager.h Sources/Managers/AccountManager.cpp Headers/Managers/AccountManager.h Sources/Models/Account.cpp Headers/Models/Account.h
        Sources/DAO/AccountDAO.cpp Headers/DAO/AccountDAO.h Sources/Models/Credentials.cpp Headers/Models/Credentials.h Sources/Models/Permissions.cpp Headers/Models/Permissions.h Sources/Exceptions/Exception.cpp Headers/Exceptions/Exception.h Sources/Exceptions/AuthorizationException.cpp Headers/Exceptions/AuthorizationException.h Headers/Config/AuthConfig.h Sources/Util/UserUtil.cpp Headers/Util/UserUtil.h Sources/Util/StringUtil.cpp Headers/Util/StringUtil.h Sources/Exceptions/InvalidArgumentException.cpp Headers/Exceptions/InvalidArgumentException.h Sources/Util/Precondition.cpp Headers/Util/Precondition.h Sources/Exceptions/UserNotFoundException.cpp Headers/Exceptions/UserNotFoundException.h Sources/Exceptions/RuntimeException.cpp Headers/Exceptions/RuntimeException.h)