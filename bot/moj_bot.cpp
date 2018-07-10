#include <iostream>
#include <string.h>
#include <vector>
#include <bot.h>






int main()
{
    bot winner;
    winner.get_map();
    int move;
    move = winner.find_move();

    std::cout<<move<<"\n";
}