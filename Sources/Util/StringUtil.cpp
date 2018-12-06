//
// Created by Narek Hovhannisyan and/or Milena Mamyan.
//

#include "../../Headers/Util/StringUtil.h"

bool StringUtil::isNumeric(char sym) {
    return sym > '0' && sym < '9';
}

bool StringUtil::isAlpha(char sym) {
    return (sym > 'a' && sym < 'z') || (sym > 'A' && sym < 'Z');
}

bool StringUtil::isAlphaNumeric(char sym) {
    return isAlpha(sym) || isNumeric(sym);
}
