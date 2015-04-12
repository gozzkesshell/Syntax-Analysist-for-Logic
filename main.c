#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#define n 100

void Error(int );
char Getnext(int * );
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
    len=strlen(line);




    return 0;
}

char Getnext(int *pi);
{ char ch;
    *pi++;
if(i==len)
{
    printf("Express is correct")
    exit(EXIT_SUCCESS);
}
    ch=getchar();
    return ch;

}


void Expression(char *line,int *pi)
{
    char ch;
    ch=Getnext(pi);

}
