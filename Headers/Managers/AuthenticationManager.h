//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#ifndef BANKINGSYSTEM_AUTHENTICATIONMANAGER_H
#define BANKINGSYSTEM_AUTHENTICATIONMANAGER_H

#include <string>
#include "../DAO/AccountDAO.h"

class AuthenticationManager {
private:
    std::string activeUsername;
    AccountDAO* accountDAO;
    static AuthenticationManager* instance;

    AuthenticationManager();

public:
    static AuthenticationManager* getInstance();
    void signIn(std::string username, std::string password);
    void createUser(std::string username, std::string password, std::string name, std::string lastName, bool system = false);

    std::string getActiveUsername() const;
};


#endif //BANKINGSYSTEM_AUTHENTICATIONMANAGER_H
