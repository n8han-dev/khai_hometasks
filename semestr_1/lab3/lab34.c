/*
filename: lab31.c
author: Filatov E., 515b
creation date: 29.02.2020
lab3, task 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char *value[] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    char *suit[] = {"Spades","Hearts","Clubs","Diamonds"};
    char *h1[6][2], *h2[6][2], *h3[6][2], *h4[6][2];
    int v, s;
    srand(time(NULL));
    for (int j=0; j<6; j++)
    {
        v = rand()%13;
        s = rand()%4;
        h1[j][0] = value[v];
        h1[j][1] = suit[s];
        if (j>0&&(h1[j][0]==h1[j-1][0]||h1[j][1]==h1[j-1][1]))
        {
            j--;
            continue;
        }
    }
    for (int j=0; j<6; j++)
    {
        v = rand()%13;
        s = rand()%4;
        h2[j][0] = value[v];
        h2[j][1] = suit[s];
        if (j>0&&(h2[j][0]==h2[j-1][0]||h2[j][1]==h2[j-1][1]))
        {
            j--;
            continue;
        }
    }
    for (int j=0; j<6; j++)
    {
        v = rand()%13;
        s = rand()%4;
        h3[j][0] = value[v];
        h3[j][1] = suit[s];
        if (j>0&&(h3[j][0]==h3[j-1][0]||h3[j][1]==h3[j-1][1]))
        {
            j--;
            continue;
        }
    }
    for (int j=0; j<6; j++)
    {
        v = rand()%13;
        s = rand()%4;
        h4[j][0] = value[v];
        h4[j][1] = suit[s];
        if (j>0&&(h4[j][0]==h4[j-1][0]||h4[j][1]==h4[j-1][1]))
        {
            j--;
            continue;
        }
    }
    for (int i=0; i<6; i++)
    {
        if (h1[i][0]==h2[i][0]||h1[i][1]==h2[i][1]||h1[i][0]==h3[i][0]||h1[i][1]==h3[i][1]||h1[i][0]==h4[i][0]||h1[i][1]==h4[i][1])
        {
            v = rand()%13;
            s = rand()%4;
            h2[i][0] = value[v];
            h2[i][1] = suit[s];
        }
    }
    for (int i=0; i<6; i++)
    {
        if (h2[i][0]==h3[i][0]||h3[i][1]==h2[i][1]||h2[i][0]==h4[i][0]||h2[i][1]==h4[i][1])
        {
            v = rand()%13;
            s = rand()%4;
            h3[i][0] = value[v];
            h3[i][1] = suit[s];
        }
    }
    for (int i=0; i<6; i++)
    {
        if (h4[i][0]==h3[i][0]||h3[i][1]==h4[i][1])
        {
            v = rand()%13;
            s = rand()%4;
            h4[i][0] = value[v];
            h4[i][1] = suit[s];
        }
    }
    for (int j=0; j<6; j++)
    {
        printf("%s %s; ", h1[j][0], h1[j][1]);
    }
    printf("\n");
    for (int j=0; j<6; j++)
    {
        printf("%s %s; ", h2[j][0], h2[j][1]);
    }
    printf("\n");
    for (int j=0; j<6; j++)
    {
        printf("%s %s; ", h3[j][0], h3[j][1]);
    }
    printf("\n");
    for (int j=0; j<6; j++)
    {
        printf("%s %s; ", h4[j][0], h4[j][1]);
    }
    printf("\n");
    int cns=0, cnh=0, cnc=0, cnd=0;
    int hs[6]={0}, dd[6]={0}, cb[6]={0}, sp[6]={0};
    for (int i=0; i<6; i++)
    {
        if (h1[i][1]=="Spades")
        {
            cns++;
            sp[i]=1;
        }
        if (h1[i][1]=="Hearts")
        {
            cnh++;
            hs[i]=1;
        }
        if (h1[i][1]=="Damonds")
        {
            cnd++;
            dd[i]=1;
        }
        if (h1[i][1]=="Clubs")
        {
            cnc++;
            cb[i]=1;
        }
    }
    if (cnd>=4||cnh>=4||cnc>=4||cns>=4)
    {
        printf("Fifty!!!\n");
    }
    cns=0, cnh=0, cnc=0, cnd=0;
    for (int i=0; i<6; i++)
    {
        if (h2[i][1]=="Spades")
            cns++;
        if (h2[i][1]=="Hearts")
            cnh++;
        if (h2[i][1]=="Damonds")
            cnd++;
        if (h2[i][1]=="Clubs")
            cnc++;
    }
    if (cnd>=4||cnh>=4||cnc>=4||cns>=4)
    {
        printf("Fifty!!!\n");
    }
    cns=0, cnh=0, cnc=0, cnd=0;
    for (int i=0; i<6; i++)
    {
        if (h3[i][1]=="Spades")
            cns++;
        if (h3[i][1]=="Hearts")
            cnh++;
        if (h3[i][1]=="Damonds")
            cnd++;
        if (h3[i][1]=="Clubs")
            cnc++;
    }
    if (cnd>=4||cnh>=4||cnc>=4||cns>=4)
    {
        printf("Fifty!!!\n");
    }
        cns=0, cnh=0, cnc=0, cnd=0;
    for (int i=0; i<6; i++)
    {
        if (h4[i][1]=="Spades")
            cns++;
        if (h4[i][1]=="Hearts")
            cnh++;
        if (h4[i][1]=="Damonds")
            cnd++;
        if (h4[i][1]=="Clubs")
            cnc++;
    }
    if (cnd>=4||cnh>=4||cnc>=4||cns>=4)
    {
        printf("Fifty!!!\n");
    }
    return 0;
}
