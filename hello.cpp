#include <iostream>
#include <string>
#include <conio.h>
#include "Auth.h"

int main() {
    Auth auth;
    int n;
    std::cout<<"Welcome! \n1.Register(Enter 1)\n2.Login(Enter 2)\n3.Exit(Enter 3)\n\n";
    std::cin>>n;
    switch (n)
    {
    case 1:
        auth.signup();
        break;

    case 2:
        auth.login();
        break;
    
    default:
        break;
    }
}