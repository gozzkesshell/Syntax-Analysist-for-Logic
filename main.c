#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define n 100

void Error(int );
char Getnext(int *, int  );
void Expression(char *, int * );

bool isKonjunkc();
bool isSpace();
bool isVarial();
bool isFactor();

int main()
{
    int len;
    char *line;
    int i=0;
    int *pi;
    pi=&i;
    line=(char *)malloc(n*sizeof(char));
    puts("Input ur expression");
    gets(line);
    len=strlen(line, len);


    free(line);
    return 0;
}

void Expression()
{
    char ch;
    ch = Getnext(pi, len);
    if(isKonjunkc())
        if()
}

char Getnext(int *pi, int len )
{
    char ch;
    *pi++;
        if(*pi == len )
    {
        printf("The expression is coorect ");
        exit(EXIT_SUCCESS);
    }

    ch=getchar();

    return ch;
}

void Error(int n)
{
    switch(n)
    case 1: printf("The first symbol error");
    break;
    case 2:
}

bool isKonjunkc(int *pi, int len)
{




}


