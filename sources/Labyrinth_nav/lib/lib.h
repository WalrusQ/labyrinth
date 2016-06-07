#ifndef LIB_H
#define LIB_H

#include<string>
#include<fstream>
#include<iostream>
class Lib
{

public:
    Lib();
    int x; int y;
    int** maze;
    void move(std::string command);
    void fread();
    void findplayer();
    ~Lib();
};

#endif // LIB_H
