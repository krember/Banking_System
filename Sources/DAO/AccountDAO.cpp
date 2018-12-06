//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/DAO/AccountDAO.h"

static AccountDAO* AccountDAO::instance = 0;

AccountDAO::AccountDAO() {}

AccountDAO *AccountDAO::getInstance() {
    if(instance == 0){
        instance = new AccountDAO();
    }
    return instance;
}
