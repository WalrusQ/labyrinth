#ifndef APP_H
#define APP_H
#include "lib.h"

#include<fstream>
#include<string>
#include<iostream>

class app
{
public:
    Lib labyrinth;
    std::string command;
    int choice;
    void printlabyrinth();
    void printMenu();
    void start();
    void menu_choice();
    void game();
    void help();
      };

#endif // APP_H
