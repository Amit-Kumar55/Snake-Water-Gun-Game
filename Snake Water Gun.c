#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char opponent){
    if(you == opponent){
        return 0;
    }

   

    if(you=='s' && opponent=='g'){
        return -1;
    }
    else if(you=='g' && opponent=='s'){
        return 1;
    }

    if(you=='s' && opponent=='w'){
        return 1;
    }
    else if(you=='w' && opponent=='s'){
        return -1;
    }

    if(you=='g' && opponent=='w'){
        return -1;
    }
    else if(you=='w' && opponent=='g'){
        return 1;
    }

}
int main(){
    char you, opponent;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        opponent = 's';
    }
    else if(number>33 && number<66){
        opponent='w';
    }
    else{
        opponent='g';
    }
    
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, opponent);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and opponent chose %c. ", you, opponent);
    return 0;
}