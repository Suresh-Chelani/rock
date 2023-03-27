#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("\n\nRules of this Game is :- \t\t\n");
    printf("1). If you write wrong spelling or at that round your point will be reduced.\n");
    printf("2). There will be three rounds of this game.\n");
    printf("3). You have the choices to enter Rock, Paper, Scissor.\n");
    printf("4). You can enter the string in upercase or lowercase both.\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("\t\t\t\tTHE GAME HAS STARTED.\n\n");

    srand(time(NULL));
    char player[14];
    int computer,choice;
    int c_p=0;
    int c_c=0;
    int i=3;
    while(i--){
       printf("Enter your choice: ");
       scanf("%s",player);
       computer=rand()%3;
       choice=strlen(player);
       if (choice==5 && computer==0){
        c_p++;
       }
       else if (choice==4 && computer==2){
        c_p++;
       }
       else if (choice==7 && computer==1){
        c_p++;
       }
       else if (choice==4 && computer==0){
        c_p;
        c_c;
       }
       else if (choice==5 && computer==1){
        c_p;
        c_c;
       }
       else if (choice==7 && computer==2){
        c_p;
        c_c;
       }
       else{
        c_c++;
       }
       if (computer==0){
            printf("Computer's choice = Rock\n");
       }
       else if (computer==1){
            printf("Computer's choice = Paper\n");
       }
       else if (computer==2){
        printf("Computer's choice = Scissor\n");
       }
       else {
        printf("");
       }
    }
    printf("\t\t\t\tRESULTS\n");
    printf("Your Result = %d point\n",c_p);
    printf("Computer's Result = %d point\n",c_c);
    if (c_c>c_p){
        printf("\n\t\t\t\tYou lost the game.\n");
        printf("\t\t\t\tBatter luck next time.\n");
        exit(1);
    }
    else if (c_c<c_p){
        printf("\n------------ * ------------ You win the match. ------------ * ------------\n");
        printf("------------ * ---------------- Victory ------------------ * ------------");
        exit(1);
    }
    else {
        printf("\n\t\t\t\t Drow the match!!\n");
    }
    return 0;
    
}