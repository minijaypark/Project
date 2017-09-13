ifndef __DATA_H__
#define __DATA_H__

#define MAX_DOT_NUM //max number of dots
#define MIN_DOT_NUM 0
#define MAX_ITEM_NUM 1
#define MAX_GHOST_NUM 4
#define MAX_LEVEL 3
#define INIT_LEVEL 1
#define DOT_SCORE 10

//User interface data
const char SYMBOL_EMPTY = ' ';
const char SYMBOL_PLAYER = 
const char SYMBOL_GHOST = 
const char SYMBOL_WALL = 
const int MapDx = 
const int MapDy = 

const int GameSpeed = 100;
const int LEFT = 1;
const int RIGHT = 2;
const int UP = 3;
const int DOWN = 4;
int direction = RIGHT;
int score = 0;

typedef enum Boolean{FALSE, TRUE};//Boolean type

//functions
int init();//initialize data
int update();//update data with player, dots, items
int saveData();//save data file as *.data
int loadData();//load *.data
    




#endif