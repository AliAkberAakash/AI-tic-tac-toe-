#include<cstdio>
#include<windows.h>
#include<iostream>
#include<cstdlib>



int main()
{
    int a[10],temp,i,j,f,rnd=0;

    bool p=true, brk=false, nothing=true, player=false, computer=false;

    for(i=0; i<10; i++)
        a[i]=0;


    start:

        if(player)
        {
            printf("Player wins\n");
            goto finish;
        }

    system("cls");

    /**first row**/
    printf("..................................\n");
    printf(".          .          .          .\n");
    printf(".          .          .          .\n");
    if(a[1]==1)
        printf(".  Player  ");
    else if(a[1]==2)
        printf(". Computer ");
    else
        printf(".1         ");

    if(a[2]==1)
        printf(".  Player  .");
    else if(a[2]==2)
        printf(". Computer .");
    else
        printf(".2         .");

    if(a[3]==1)
        printf("  Player  .\n");
    else if(a[3]==2)
        printf(" Computer .\n");
    else
        printf("3         .\n");

    printf(".          .          .          .\n");
    printf(".          .          .          .\n");

    /**second row**/

    printf("..................................\n");
    printf(".          .          .          .\n");
    printf(".          .          .          .\n");
    if(a[4]==1)
        printf(".  Player  ");
    else if(a[4]==2)
        printf(". Computer ");
    else
        printf(".4         ");

    if(a[5]==1)
        printf(".  Player  .");
    else if(a[5]==2)
        printf(". Computer .");
    else
        printf(".5         .");

    if(a[6]==1)
        printf("  Player  .\n");
    else if(a[6]==2)
        printf(" Computer .\n");
    else
        printf("6         .\n");

    printf(".          .          .          .\n");
    printf(".          .          .          .\n");

    /**third row**/

    printf("..................................\n");
    printf(".          .          .          .\n");
    printf(".          .          .          .\n");
    if(a[7]==1)
        printf(".  Player  ");
    else if(a[7]==2)
        printf(". Computer ");
    else
        printf(".7         ");

    if(a[8]==1)
        printf(".  Player  .");
    else if(a[8]==2)
        printf(". Computer .");
    else
        printf(".8         .");

    if(a[9]==1)
        printf("  Player  .\n");
    else if(a[9]==2)
        printf(" Computer .\n");
    else
        printf("9         .\n");

    printf(".          .          .          .\n");
    printf(".          .          .          .\n");
    printf("..................................\n\n\n");

    /**check if draw**/

    f=0;

    for(i=1; i<9; i++)
    {
        if(a[i]==0)
            f=1;
    }

    if(!f)
    {
        printf("Match draw!\n");
        goto finish;
    }


    if(p)
    {
        int x;
        printf("Enter your position\n");

        scanf("%d", &x);

        if(a[x]==0&&x>=1&&x<=9)
        {
            a[x]=1;
            p=false;
            nothing=true;
        }

        goto start;

    }
    else
    {
        for(i=1; i<=9; i++)
        {
            if(a[i]==1)
            {
                if(i==1)
                {
                    if(a[2]==1)
                    {
                        if(a[3]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[3]==0)
                            {
                                a[3]=2;
                                p=true;
                                nothing=false;
                                break;
                            }
                        }
                    }
                    if(a[3]==1)
                    {
                        if(a[2]==0)
                        {
                            a[2]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                    if(a[4]==1)
                    {
                        if(a[7]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[7]==0)
                            {
                            a[7]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[7]==1)
                    {
                        if(a[4]==0)
                        {
                            a[4]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                    if(a[5]==1)
                    {
                        if(a[9]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[9]==0)
                            {
                            a[9]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[9]==1)
                    {
                        if(a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                }
                if (i==2)
                {
                    if(a[3]==1)
                    {
                        if(a[1]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[1]==0)
                            {
                                a[1]=2;
                                p=true;
                                nothing=false;
                                break;
                            }
                        }
                    }
                    if(a[1]==1)
                    {
                        if(a[3]==0)
                        {
                            a[3]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                   if(a[5]==1)
                    {
                        if(a[8]==1)
                        {
                            player=true;
                            break;
                        }
                        else if(a[8]==0)
                        {
                            a[8]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                   if(a[8]==1)
                    {
                        if(a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }

                }
                if(i==3)
                {
                    if(a[2]==1)
                    {
                        if(a[1]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[1]==0)
                            {
                            a[1]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[1]==1)
                    {
                        if(a[2]==0)
                        {
                            a[2]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                    if(a[6]==1)
                    {
                        if(a[9]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[9]==0)
                            {
                            a[9]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[9]==1)
                    {
                        if(a[6]==0)
                        {
                            a[6]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                    if(a[5]==1)
                    {
                        if(a[7]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[7]==0)
                            {
                            a[7]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[7]==1)
                    {
                        if(a[5]==0)
                        {
                            a[5]=2;
                            p=true;
                            nothing=false;
                            break;
                        }
                    }
                }
                else if(i==4)
                {
                    if(a[5]==1)
                    {
                        if(a[6]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[6]==0)
                            {
                            a[6]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[6]==1)
                    {
                        if(a[5]==0)
                            {
                            a[5]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                    }
                    if(a[1]==1)
                    {
                        if(a[7]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[7]==0)
                            {
                                a[7]==2;
                                p=true;
                                nothing=false;
                                break;
                            }
                        }
                    }
                    if(a[7]==1)
                    {
                        if(a[1]==0)
                            {
                            a[1]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                    }

                }

                else if(i==5)
                {
                    if(a[6]==1)
                    {
                        if(a[4]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[4]==0)
                            {
                            a[4]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[9]==1)
                    {
                        if(a[1]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[1]==0)
                            {
                            a[1]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[7]==1)
                    {
                        if(a[3]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[3]==0)
                            {
                            a[3]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[8]==1)
                    {
                        if(a[2]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[2]==0)
                            {
                            a[2]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                }
                if(i==7)
                {
                    if(a[8]==1)
                    {
                        if(a[9]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[9]==0)
                            {
                            a[9]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                    if(a[9]==1)
                    {
                        if(a[8]==0)
                            {
                            a[8]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                    }
                }
                if(i==8)
                {
                    if(a[9]==1)
                    {
                        if(a[7]==1)
                        {
                            player=true;
                            break;
                        }
                        else
                        {
                            if(a[7]==0)
                            {
                            a[7]=2;
                            p=true;
                            nothing=false;
                            break;
                            }
                        }
                    }
                }
            }

        }

        if(nothing)
        {
            for(i=1; i<10;i++)
            {
                if(a[i]==0)
                {
                    a[i]=2;
                    p=true;
                    nothing=false;
                    break;
                }
            }

        }
    }

    Sleep(100);

    goto start;

    finish:

        Sleep(100);

    return 0;
}