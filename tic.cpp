/**
line 152: player starts his move
line 233: computer starts its' move
line 159: input is taken
line 134: Declaration of player wining
line 139: Declaration of computer wining
line 149: Declaration of match draw
**/
#include<cstdio>
//#include<windows.h>
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<cstring>

int main(int argc, char *argv[])
{
    int a[10],temp,i,j,f=1,rnd=0;
    time_t t;
    bool p=true, brk=false,player=false, computer=false, win=true,check=true,check2=true,check3=true;
    char boxstr[20];
    for(int i = 0; i<argc; i++)
    {
        if(strlen(argv[i])==12) {
            strcpy(boxstr, argv[1]);
        }
    }
    for(int i = 1; i<=9; i++){
        if(boxstr[i-1] == 'n') {
            a[i] = 0;
        }
        else if(boxstr[i-1] == 'x') {
            a[i] = 1;
        }
        else {
            a[i] = 2;
        }
        //printf("a[%d] = %d\n", i, a[i]); //debug
    }
    srand((unsigned) time(&t));

    if(boxstr[9]=='1'){
        if(rand()%2)
        {
            p=true;
            //printf("Your turn first!\n");

        }
        else
        {
            p=false;
            //printf("Computers' turn first\n");
            boxstr[9] = '0';
            printf("nnnnnnnnn00N\n");
            return 0;
        }
        boxstr[9] = '0';
    }

    //Sleep(1000);

    //for(i=0; i<10; i++)
    //a[i]=0;


    // start:
    //
    // //system("cls");
    // //system("clear");
    // /**first row**/
    // //printf("..................................\n");
    // //printf(".          .          .          .\n");
    // //printf(".          .          .          .\n");
    // if(a[1]==1)
    // {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[1]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".1         ");
    //     printf("n");
    // }
    //
    // if(a[2]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[2]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".2         .");
    //     printf("n");
    // }
    //
    // if(a[3]==1) {
    //     //printf(".  Player  \n");
    //     printf("x");
    // }
    // else if(a[3]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf("3         .\n");
    //     printf("n");
    // }
    //
    // //printf(".          .          .          .\n");
    // //printf(".          .          .          .\n");
    //
    // /**second row**/
    //
    // //printf("..................................\n");
    // //printf(".          .          .          .\n");
    // //printf(".          .          .          .\n");
    // if(a[4]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[4]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".4         ");
    //     printf("n");
    // }
    //
    // if(a[5]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[5]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".5         .");
    //     printf("n");
    // }
    //
    // if(a[6]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[6]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     // printf("6         .\n");
    //     printf("n");
    // }
    //
    // //printf(".          .          .          .\n");
    // //printf(".          .          .          .\n");
    //
    // /**third row**/
    //
    // //printf("..................................\n");
    // //printf(".          .          .          .\n");
    // //printf(".          .          .          .\n");
    // if(a[7]==1){
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[7]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".7         ");
    //     printf("n");
    // }
    //
    // if(a[8]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[8]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf(".8         .");
    //     printf("n");
    // }
    //
    // if(a[9]==1) {
    //     //printf(".  Player  ");
    //     printf("x");
    // }
    // else if(a[9]==2) {
    //     //printf(". Computer ");
    //     printf("o");
    // }
    // else {
    //     //printf("9         .\n");
    //     printf("n");
    // }

    //printf(".          .          .          .\n");
    //printf(".          .          .          .\n");
    //printf("..................................\n\n\n");






    if(p)
    {
        int x;
        //printf("Enter your position\n");

        //scanf("%d", &x);
        x = (int)(boxstr[11]-'0');
        if(a[x]==0&&x>=1&&x<=9)
        {
            a[x]=1;
            p=false;
        }

        //win check for payer
        for(i=1; i<=9; i++)
        {
            if(a[i]==1)
            {
                if(i==1)
                {
                    if(a[2]==1&&a[3]==1)
                    {
                        player=true;
                        break;
                    }
                    if(a[4]==1&&a[7]==1)
                    {
                        player=true;
                        break;
                    }
                    if(a[5]==1&&a[9]==1)
                    {
                        player=true;
                        win=false;
                        break;
                    }
                }
                if(i==2)
                {
                    if(a[5]==1&&a[8]==1)
                    {
                        player=true;
                        break;
                    }
                }
                if(i==3)
                {
                    if(a[6]==1&&a[9]==1)
                    {
                        player=true;
                        break;
                    }
                    if(a[5]==1&&a[7]==1)
                    {
                        player=true;
                        break;
                    }
                }
                if(i==4)
                {
                    if(a[5]==1&&a[6]==1)
                    {
                        player=true;
                        break;
                    }
                }
                if(i==7)
                {
                    if(a[8]==1&&a[9]==1)
                    {
                        player=true;
                        break;
                    }
                }

            }
        }
        //goto start;

    }
    if(p==false)
    {
        check=true;

        //checking if computer can win with one move
        for(i=1; i<=9; i++)
        {
            if(a[i]==2)
            {
                if(i==1)
                {
                    if(a[2]==2&&a[3]==0)
                    {
                        a[3]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[3]==2&&a[2]==0)
                    {
                        a[2]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[4]==2&&a[7]==0)
                    {
                        a[7]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[7]==2&&a[4]==0)
                    {
                        a[4]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[5]==2&&a[9]==0)
                    {
                        a[9]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[9]==2&&a[5]==0)
                    {
                        a[5]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==2)
                {
                    if(a[3]==2&&a[1]==0)
                    {
                        a[1]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[5]==2&&a[8]==0)
                    {
                        a[8]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[8]==2&&a[5]==0)
                    {
                        a[5]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==3)
                {
                    if(a[6]==2&&a[9]==0)
                    {
                        a[9]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[9]==2&&a[6]==0)
                    {
                        a[6]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==4)
                {
                    if(a[7]==2&&a[1]==0)
                    {
                        a[1]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[5]==2&&a[6]==0)
                    {
                        a[6]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[6]==2&&a[5]==0)
                    {
                        a[5]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==5)
                {
                    if(a[8]==2&&a[2]==0)
                    {
                        a[2]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[9]==2&&a[1]==0)
                    {
                        a[1]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[7]==2&&a[3]==0)
                    {
                        a[3]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[6]==2&&a[4]==0)
                    {
                        a[4]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==6)
                {
                    if(a[9]==2&&a[3]==0)
                    {
                        a[3]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==7)
                {
                    if(a[8]==2&&a[9]==0)
                    {
                        a[9]=2;
                        p=true;
                        check=false;
                        break;
                    }
                    if(a[9]==2&&a[8]==0)
                    {
                        a[8]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
                if(i==8)
                {
                    if(a[9]==2&&a[7]==0)
                    {
                        a[7]=2;
                        p=true;
                        check=false;
                        break;
                    }
                }
            }
        }

        //checking if computer can block the player from wining
        check2=true;

        if(check)
        {
            for(i=1; i<=9; i++)
            {
                if(a[i]==1)
                {
                    if(i==1)
                    {
                        if(a[2]==1&&a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[3]==1&&a[2]==0)
                        {
                            a[2]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[4]==1&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[7]==1&&a[4]==0)
                        {
                            a[4]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[5]==1&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[9]==1&&a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==2)
                    {
                        if(a[3]==1&&a[1]==0)
                        {
                            a[1]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[5]==1&&a[8]==0)
                        {
                            a[8]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[8]==1&&a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==3)
                    {
                        if(a[6]==1&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[9]==1&&a[6]==0)
                        {
                            a[6]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[5]==1&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[7]==1&&a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==4)
                    {
                        if(a[7]==1&&a[1]==0)
                        {
                            a[1]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[5]==1&&a[6]==0)
                        {
                            a[6]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[6]==1&&a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==5)
                    {
                        if(a[8]==1&&a[2]==0)
                        {
                            a[2]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[7]==1&&a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[9]==1&&a[1]==0)
                        {
                            a[1]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[6]==1&&a[4]==0)
                        {
                            a[4]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==6)
                    {
                        if(a[9]==1&&a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==7)
                    {
                        if(a[8]==1&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                        if(a[9]==1&&a[8]==0)
                        {
                            a[8]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                    if(i==8)
                    {
                        if(a[9]==1&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check2=false;
                            break;
                        }
                    }
                }
            }
        }

        //checking if computer can build a move for wining
        check3=true;

        if(check2&&check)
        {
            for(i=1; i<=9; i++)
            {
                if(a[i]==2)
                {
                    if(i==1)
                    {
                        if(a[2]==0&&a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[4]==0&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[9]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==2)
                    {
                        if(a[1]==0&&a[3]==0)
                        {
                            a[1]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[8]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==3)
                    {
                        if(a[1]==0&&a[2]==0)
                        {
                            a[1]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[6]==0&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==4)
                    {
                        if(a[1]==0&&a[7]==0)
                        {
                            a[7]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[6]==0)
                        {
                            a[6]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==5)
                    {
                        if(a[1]==0&&a[9]==0)
                        {
                            a[1]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[2]==0&&a[8]==0)
                        {
                            a[8]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[3]==0&&a[7]==0)
                        {
                            a[3]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[4]==0&&a[6]==0)
                        {
                            a[6]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==6)
                    {
                        if(a[3]==0&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[4]==0&&a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==7)
                    {
                        if(a[4]==0&&a[1]==0)
                        {
                            a[1]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[3]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[8]==0&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==8)
                    {
                        if(a[7]==0&&a[9]==0)
                        {
                            a[9]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[2]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                    if(i==9)
                    {
                        if(a[7]==0&&a[8]==0)
                        {
                            a[7]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[6]==0&&a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                        if(a[5]==0&&a[1]==0)
                        {
                            a[5]=2;
                            p=true;
                            check3=false;
                            break;
                        }
                    }
                }
            }
        }

        //if the middle block is empty fill it else fill serially
        if(check3&&check2&&check)
        {
            if(a[5]==0)
            {
                a[5]=2;
                p=true;
            }
            else
            {
                for(i=1; i<=9; i++)
                {
                    if(a[i]==0)
                    {
                        a[i]=2;
                        p=true;
                        break;
                    }
                }
            }
        }

    }

    //win check for computer
    for(i=1; i<=9; i++)
    {
        if(a[i]==2)
        {
            if(i==1)
            {
                if(a[2]==2&&a[3]==2)
                {
                    computer=true;
                    break;
                }
                if(a[4]==2&&a[7]==2)
                {
                    computer=true;
                    break;
                }
                if(a[5]==2&&a[9]==2)
                {
                    computer=true;
                    win=false;
                    break;
                }
            }
            if(i==2)
            {
                if(a[5]==2&&a[8]==2)
                {
                    computer=true;
                    break;
                }
            }
            if(i==3)
            {
                if(a[6]==2&&a[9]==2)
                {
                    computer=true;
                    break;
                }
                if(a[5]==2&&a[7]==2)
                {
                    computer=true;
                    break;
                }
            }
            if(i==4)
            {
                if(a[5]==2&&a[6]==2)
                {
                    computer=true;
                    break;
                }
            }
            if(i==7)
            {
                if(a[8]==2&&a[9]==2)
                {
                    computer=true;
                    break;
                }
            }

        }
    }
    //if(computer)
    //goto start;

    //checking if draw

    f=0;

    for(i=1; i<=9; i++)
    {
        if(a[i]==0)
        f=1;
    }

    //winner declaration:

    if(player)
    {
        //printf("Player wins\n");
        boxstr[10] = 'p';
        goto finish;
    }
    if(computer)
    {
        //printf("I win\n");
        boxstr[10] = 'c';
        goto finish;
    }
    /**check if draw**/

    if(!f)
    {
        //printf("Match draw!\n");
        boxstr[10] = 'd';
        goto finish;
    }

    //Sleep(150);

    //goto start;

    finish:
    for(int i = 1; i<=9; i++){
        if(a[i] == 0) {
            boxstr[i-1] = 'n';
        }
        else if(a[i] == 1) {
            boxstr[i-1] = 'x';
        }
        else {
            boxstr[i-1] = 'o';
        }
        //printf("a[%d] = %d\n", i, a[i]);
    }
    boxstr[12] = '\0';
    printf("%s\n", boxstr);
    //Sleep(100);

    return 0;
}
