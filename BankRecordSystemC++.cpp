// BankRecordSystemC++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
// This project was inspired from https://www.slideshare.net/ShriyaDodda/bank-record-system-137936881#:~:text=This%20bank%20record%20system%20project,use%20file%20as%20database%20overall.

#include <iostream>
#include <string>
#include <cstdlib>

#include "BankRecordSystemC++.h"


int main()
{
    char profil;
    std::string password;
    std::string inPassword;
    std::string inUsername;
    std::string userAdmin;

    password = "admin";

    Initialize();

    std::cin >> profil;

    if (profil == 'A' || profil == 'a') {
        std::cout << "Admin selected" << std::endl;
        Clear();
        do {
            std::cout << "Enter yout username:" << std::endl;
            std::cin >> userAdmin;
            std::cout << "Enter your password" << std::endl;
            std::cin >> inPassword;
            if (userAdmin == inUsername && password == inPassword) {
            }
            else {
                std::cout << "Wrong password, try again" << std::endl;
            }

        } while (password != inPassword);
        std::cout << "Session unlocked" << std::endl;
        Clear();
        AdminMenu();
    }
    else if (profil == 'U' || profil == 'u') {
        std::cout << "User selected";
        Clear();
    }
    else if (profil == 'Q' || profil == 'q') {
        exit(0);
    }
    else
    {

    }
    return 0;
}

void Initialize()
{
    std::cout << "********************** Welcome to our Banking system ************************" << std::endl;
    std::cout << "A -> Admin" << std::endl;
    std::cout << "U -> User" << std::endl;
    std::cout << "Q -> Quit" << std::endl;
}

void Clear() {
    std::cout << "\x1B[2J\x1B[H";
}

void AdminMenu()
{
    char mainMenu;

    std::cout << "********************** Main menu ************************" << std::endl;
    std::cout << "C -> Create Account" << std::endl;
    std::cout << "M -> Modify Account" << std::endl;
    std::cout << "D -> Close Account" << std::endl;

    std::cin >> mainMenu;
    if (mainMenu == 'C' || mainMenu == 'c') {
        Clear();
        std::cout << "Create Account select" << std::endl;
    }
    else if (mainMenu == 'M' || mainMenu == 'm') {
        Clear();
        std::cout << "Modify Account select" << std::endl;
    }
    else if (mainMenu == 'D' || mainMenu == 'd') {
        Clear();
        std::cout << "Close Account select" << std::endl;
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

