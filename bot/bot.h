#ifndef BOT_H
#define BOT_H
#include <vector>
#include <iostream>
#include <string.h>
#include <sstream>
#include <istream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
class bot
{
private:
    std::vector<std::string> map;
    int find_wall(int dir_row,int dir_col);
    int get_row();
    int get_col();
    int pl_row;
    int pl_col;
    int map_row;
    int map_col;
public:
    int find_move();
    void get_map();
};

#endif