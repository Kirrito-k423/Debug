/*
 * @Descripttion: 
 * @version: 
 * @Author: Shaojie Tan
 * @Date: 2022-02-18 23:45:02
 * @LastEditors: Shaojie Tan
 * @LastEditTime: 2022-02-19 19:54:37
 */
#include <iostream>
#include <string.h>
#include <stdarg.h> 
#define MAX_DIGITS 20


#include "tsjCommonFunc.h"

int errorPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-2){
        errorPrint("errorPrint input too long than MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifdef DEBUG
    std::cout << FRED(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}


int passPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-2){
        errorPrint("passPrint input too long than MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifdef DEBUG
    std::cout << FGRN(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}

int yellowPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-2){
        errorPrint("yellowPrint input too long than MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    #ifdef DEBUG
    std::cout << FYEL(<<tmp_char<<) << std::endl;
    #endif
    return 0;
}

int splitPrint(const char* format, ...){
    if(strlen(format)> MAX_DIGITS-2){
        errorPrint("splitPrint input too long than MAX_DIGITS");
        return 1;
    }
    char tmp_char[MAX_DIGITS + sizeof(char)];
    va_list argptr;
    va_start(argptr, format);
    vsprintf(tmp_char, format, argptr);
    va_end(argptr);
    const char* line=(const char*)"------------------";
    #ifdef DEBUG
    std::cout <<std::endl;
    std::cout <<line<< tmp_char <<line<< std::endl;
    std::cout <<std::endl;
    #endif
    return 0;
}


