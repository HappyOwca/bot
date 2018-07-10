#include <bot.h>
using namespace std;
int bot::find_wall(int dir_row,int dir_col)
{
    int length=0;
    while((map[pl_row+dir_row][pl_col+dir_col] != '#')&& (map[pl_row+dir_row][pl_col+dir_col] != '2'))
    {
        ++length;
        if(dir_row != 0)
        {
            if(dir_row < 0)
            --dir_row;
            else
            ++dir_row;
        }
        else if(dir_col != 0)
        {
            if(dir_col < 0)
                --dir_col;
            else
                ++dir_col;
        }
    }
    return length;
}

void bot::get_map()
{
    string line;
    int i = 0;
    while(getline(cin,line))
    {
        istringstream iss(line);
        string line2;
        getline(iss,line2);
        map.push_back(line2);
        if(map[i].find("1") != string::npos)
        {
            pl_row = i;
            pl_col = map[i].find("1");
        }
        ++i;
        
    }
    
    
}

int bot::get_row()
{
    
}

int bot::get_col()
{
    
}

int bot::find_move()
{
    /*if((map[pl_row][pl_col-1] != '#')&& (map[pl_row][pl_col-1] != '2'))
    {
        return 4;
    }
    else if((map[pl_row-1][pl_col] != '#')&&(map[pl_row][pl_col-1] != '2'))
    {
        return 1;
    }

    else if((map[pl_row][pl_col+1] != '#')&&(map[pl_row][pl_col-1] != '2'))
    {
        return 2;
    }
    else
    {
        return 3;
    }*/
    vector<int>mov;
    mov.push_back(find_wall(-1,0));
    mov.push_back(find_wall(0,1));
    mov.push_back(find_wall(1,0));
    mov.push_back(find_wall(0,-1));
    
    return distance(mov.begin(),(max_element(mov.begin(),mov.end())))+1;
    srand(static_cast<unsigned>(time(0)));
    return rand()%4;
}