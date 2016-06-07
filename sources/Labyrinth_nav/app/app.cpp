#include "app.h"



void app::printlabyrinth()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            if (labyrinth.maze[i][j] == 1)
                std::cout << " * ";
            else if (labyrinth.maze[i][j] == 2) std::cout << " @ ";
            else std::cout << "   ";
        std::cout << "\n";
    }
}

void app::printMenu()
{
    std::cout << "Labyrinth Navigator" << "\n";
    std::cout << "1. Start new game" << "\n";
    std::cout << "2. Load labyrringh" << "\n";
    std::cout << "3. Help" << "\n";
    std::cout << "0. Exit" << "\n";
}

void app::start()
{
    while (true)
    {   labyrinth.fread();
        printMenu();

        std::cout << "Input a number of program" << std::endl;
        std::cin >> choice;
        std::cout << std::endl;

        menu_choice();
    }
}

void app::menu_choice()
{
    switch (choice){

    case 1:
        game();
        break;

    case 2:
        std::cout << "Dunno wtf is it" << std::endl;
        break;
    case 3:
        help();
        break;
    case 0:
        exit(0);
        break;

    default:
    {
        std::cout << "Wrong number. Input another number" << std::endl << std::endl;
    }
    }
}

void app::help()
{
    std::cout << "Legend:" << std::endl;
    std::cout << "'*'' is wall \n '  ' is space \n  '@' is player" << std::endl;
    std::cout << "Commands:" << std::endl;
    std::cout << "up, down, left, right -- for movement"  << std::endl;
    std::cout << "exit -- for quit"  << std::endl;
}



void app::game()
{
    while (true)
    {
        printlabyrinth();
        std::cout << "Input command" << std::endl;
        std::cin >> command;
        std::cout << std::endl;

        if(command == "exit") exit(0);
        if(command == "up" || command == "down" || command =="left" || command == "right") labyrinth.move(command);
        else{ std::cout << "Wrong command. Input another command" << std::endl << std::endl;};

    }
}
