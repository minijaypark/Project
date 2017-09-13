#include "data.h"

int init(){
    int i = numOfPlayer;
    char tmp[100];

    //input name
    pintf("이름을 입력하세요: ");
    scanf_s("%s", tmp, sizeof(tmp));
    strncpy_s(Player[i].data.playerName, sizeof(Player.data.playerName), tmp, sizeof(Player[i].data.playerName));

    //initialize data
    Player[i].level = 1;
    Player[i].data.score = 0;

    numOfPlayer++;
}
int update(){

}
int saveData(){

}
int loadData(){
    
}