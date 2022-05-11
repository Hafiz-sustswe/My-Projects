 (Update)///here is a bug,if someone inputs same number as previous,the inpuit replaces,this shouldnot be.


//Porject Name : TIC TAC TOE 
//Code written by :MD SADMAN HAFIZ . Date : 30/03/2020
 


#include<stdio.h>
#include<stdlib.h>
void displaygrid(int game[][3]);
void play(int game[][3]);
int checkwin(int game[][3], int player);
void displaygridDefault();

int main()
{
    int game[3][3]=
    {
        {
            -1,-1,-1
        },
        {
            -1,-1,-1
        },
        {
            -1,-1,-1
        }

    };

    play(game);
    return 0;
}
int checkwin(int game[][3],int player){
if((player == game[0][0] && player==game[0][1] && player==game[0][2])||
    (player == game[1][0] && player==game[1][1] && player==game[1][2])||
    (player == game[2][0] && player==game[2][1] && player==game[2][2])||
    (player == game[0][0] && player==game[1][0] && player==game[2][2])||
    (player == game[0][1] && player==game[1][1] && player==game[2][1])||
    (player == game[0][2] && player==game[1][2] && player==game[2][2])||
    (player == game[0][0] && player==game[1][1] && player==game[2][2])||
    (player == game[0][2] && player==game[1][1] && player==game[2][0]))
    return 1;
return -1;
}
void play(int game[][3])
{
    int player =1;
    int playerChoice = 0;
    int changed =0;
    int full =0;

    while(1)
    {

         system("cls");
         printf("PLZ DO NOT INPUT THE SAME NUMBER AS THE PREVIOUS PLAYER INPUTED\n\n\n");
         displaygridDefault();
         printf("\n\n\n");
         displaygrid(game);
         printf("\n\n\n");

         printf("player %d : ",player);
         scanf("%d",&playerChoice);

         changed =0;
         switch(playerChoice)
         {
         case 1:
            if(game[0][0]=-1)
            {
                game[0][0]=player%2;
                printf("\a");
                changed =1;
            }
            break;
         case 2:
            if(game[0][1]=-1)
            {
                game[0][1]=player%2;
                printf("\a");
                changed =1;
            }
            break;
         case 3:
            if(game[0][2]=-1)
            {
                printf("\a");
                game[0][2]=player%2;
                changed =1;
            }
            break;
         case 4:
            if(game[1][0]=-1)
            {
                printf("\a");
                game[1][0]=player%2;
                changed =1;
            }
            break;
         case 5:
            if(game[1][1]=-1)
            {
                printf("\a");
                game[1][1]=player%2;
                changed =1;
            }
            break;
         case 6:
            if(game[1][2]=-1)

            {
                printf("\a");
                game[1][2]=player%2;
                changed =1;
            }
            break;
         case 7:
            if(game[2][0]=-1)
            {
                printf("\a");
                game[2][0]=player%2;
                changed =1;

            }
            break;
         case 8:
            if(game[2][1]=-1)
            {
                printf("\a");
                game[2][1]=player%2;
                changed =1;
            }
            break;
         case 9:
            if(game[2][2]=-1)
            {
                printf("\a");
                game[2][2]=player%2;
                changed =1;
            }
            break;
        default:
            printf("\a");
            printf("invalid,try again.\n");


        }
        if(changed =1)
        {
         int winner;
         int temp;
         temp = player%2;
        winner  =  checkwin(game,temp);
         if(winner != -1)
         {
             if(winner==1)
                {
                    system("cls");
                    printf("\a");
                    printf("player 1 is the winner!!!!\n\n\n");
                displaygrid(game);
                return;}
             else if(winner =0)
                {
                    system("cls");
                    printf("\a");
                    printf("player 2 is the winner!!!\n\n\\n");
                displaygrid(game);
                return;}
         }
            if(player % 2 == 1)
            {

                player = 2;
            }
            else
                {player = 1;}

                full++;

                if(full==9)
                {
                    system("cls");
                    printf("\a");
                    printf("Draw!!!!!\n\n\n");
                    displaygrid(game);
                    return;
                }


        }
        displaygrid(game);
    }
}
void displaygridDefault()
{
    for(int i=1; i<=9; i++)
    {
        printf("\t%d\t|%s",i,(i%3 == 0)? "\n" : "");
    }
}
void displaygrid(int game[][3])
{
    for(int i=0 ; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            switch(game[i][j])
            {
            case 1 :
                printf("\tX\t|");
                break;
            case 0:
                printf("\tO\t|");
                break;
            case -1:
                printf("\t \t|");
                break;

            }

        }
        printf("\n");
    }
}

