#include <iostream>
#include <fstream>
#include <string>


// Functions declarations
void signup();
void login();
void search();
void forgor();


int main()
{
    int n;
    std::cout << "Welcome! \n1.Register(Enter 1)\n2.Login(Enter 2)\n3.Forgor(Enter 3)\n\n";
    std::cin >> n;
    switch (n)
    {
    case 1:
        signup();
        break;

    case 2:
        login();
        break;

    case 3:
        forgor();
        break;

    default:
        break;
    }
}


void signup()
{
    std::string ruserId, rpassword, rid, rpass;
    system("cls");
    std::cout << "\nEnter username: ";
    std::cin >> ruserId;
    std::cout << "\nEnter password: ";
    std::cin >> rpassword;

    std::ofstream f1("records.txt", std::ios::app);
    f1 << ruserId << ' ' << rpassword << std::endl;
    system("cls");
    std::cout << "\n You have registered succefully !\n";
    main();
}

void login()
{
    int count = 0;
    std::string userId, password, id, pass;
    system("cls");
    std::cout << "\nEnter username: ";
    std::cin >> userId;
    std::cout << "\nEnter password: ";
    std::cin >> password;

    std::ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count++;
            system("cls");
        }
        input.close();

        if (count == 1)
        {
            std::cout << userId << "\n\tYou have succesfully logged in !\n\n";
        }
        else
        {
            std::cout << "\nError! \nCheck credentials\n";
            main();
        }
    }
}

void search()
{
    int count = 0;
    std::string suserId, sId, spass;
    std::cout << "Enter username you remember";
    std::cin >> suserId;

    std::ifstream f2("records.txt");
    while (f2 >> sId >> spass)
    {
        if (sId == suserId)
        {
            count++;
        }
    }
    f2.close();

    if (count == 1)
    {
        std::cout << "Account found! \nYour password is " << spass<<"\n";
        main();
    }
    else
    {
        std::cout << "Sorry, can't find your username!";
        main();
    }
}

void forgor()
{
    int option;
    system("cls");
    std::cout << "\nTo recover credentials, follow through\n";
    std::cout << "Enter 1 to search by username in records\nEnter 2 to return to main menu\n";
    std::cin >> option;
    switch (option)
    {
    case 1:
        search();
        break;

    case 2:
        main();

    default:
        std::cout << "\n Wrong choice ! Reenter choice";
        forgor();
    }
}
