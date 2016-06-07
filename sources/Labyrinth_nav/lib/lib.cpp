#include "lib.h"


Lib::Lib()
{
    maze = new int* [10];
    for (int i = 0; i < 10; i++)
        maze[i] = new int [10];
}
void Lib::move(std::string command)
{findplayer();
    if(command == "up" && maze[x-1][y] == 0) {maze[x][y] = 0; maze[x-1][y] = 2;} else
    if(command == "down" && maze[x+1][y] == 0) {maze[x][y] = 0; maze[x+1][y] = 2;}  else
    if(command == "left" && maze[x][y-1] == 0) {maze[x][y] = 0; maze[x][y-1] = 2;} else
    if(command == "right" && maze[x][y+1] == 0) {maze[x][y] = 0; maze[x][y+1] = 2;}
   else {std::cout << "You can`t do it" << std::endl << std::endl;}
}
void Lib::fread()
{
    std::ifstream lab("file.txt");
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            lab>>maze[i][j];
    lab.close();
}

void Lib::findplayer()
{
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (maze[i][j] == 2) {x = i;
                y = j;
            };
}

Lib::~Lib()
{
    for (int i = 0; i < 10; i++) {
        delete []maze[i];
    }
    delete []maze;
}

