#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <stdbool.h>
#define n 30

int now=0;
void Error(int ); // Arguments of function:
/*
1 - Incorrect Space
2 - Incorrect OR
3 - Incorrect NOT
4 - Incorrect AND
5 - Incorrect FALSE
6 - Incorrect TRUE
7 - Incorrect Varial
8 - Incorrect Letter
9 - Wrong Konjuckj
10 - Wrong Expression
11 - Incorrect Factor
*/

void Expression(char *);
bool isKonjunkc(char *);
bool isFactor(char *);
bool isAND(char *);
bool isOR(char *);
bool isNOT(char *);
bool isSpace(char *);
bool isFALSE(char *);
bool isTRUE(char *);
bool isVarial(char *);
bool isLetter(char *);

int main()
{
    //int len;
    char *line;
    line=(char *)malloc(n*sizeof(char));
    puts("Input ur expression");
    gets(line);
    //len=strlen(line);
    Expression(line);
        return 0;
}

void Expression(char *line )
{
    if(isKonjunkc(line) && now==strlen(line))
        { printf("Expression is correct!");
          exit(EXIT_SUCCESS); }
    else if(isKonjunkc(line))
             { if(isOR(line))
                {   if(isSpace(line))
                        Expression(line);
                    else Error(1); }
            //    else if(!isOR(line))
              //      Error(2);
             }
    else {  Error(10);
            exit(EXIT_SUCCESS); }
}

bool isKonjunkc(char *line)
{
    if(isFactor(line) && now==strlen(line))
        return true;
    else if(isFactor(line))
            {   if(isAND(line))
                {   if(isSpace(line))
                        isKonjunkc(line);
                    else Error(1);
                }
        //        else if(!isAND(line))
          //          Error(4);
            }
        else {  Error(9);
                return false;}
}

bool isFactor(char *line)
{
    if(isNOT(line))
       { if(isSpace(line))
            return isFactor(line);
         else Error(1); }
    //else if(!isNOT(line))
      //      Error(3);
    else if(isVarial(line))
            return true;
    else if(isTRUE(line))
            {   if(isSpace(line))
                    return true;
                else Error(1); }
    //else if(!isTRUE(line))
      //      Error(6);
    else if(isFALSE(line))
            {   if(isSpace(line))
                    return true;
                else Error(1); }
    //else if (!isFALSE(line))
      //      Error(5);
    else  {  Error(11);
             return false; }
}

bool isAND(char *line)
{
    if(line[now]=='A' && line[now+1]=='N' && line[now+2]=='D')
        {
            now=now+3;
            return true;
        }
    else {  //Error(4);//4 - error of AND
            return false; }
}

bool isOR(char *line)
{
    if(line[now]=='O' && line[now+1]=='R')
        {
            now=now+2;
            return true;
        }
    else {  //Error(2);//3 - error of OR
            return false; }
}

bool isNOT(char *line)
{
    if(line[now]=='N' && line[now+1]=='O' && line[now+2]=='T')
    {
        now=now+3;
        return true;
    }
    else {  //Error(3);// Error of NOT
            return false; }
}

bool isSpace(char *line )
{
    if(line[now]==' ' && line[now+1]!=' ')
    {
        now++;
        return true;
    }
    else if(line[now]!=' ')
            {   now++;
                return false;
            }
    else {  now++;
            return isSpace(line); }
}

bool isFALSE(char *line)
{
    if(line[now]=='F' && line[now+1]=='A' && line[now+2]=='L' && line[now+3]=='S' && line[now+4]=='E')
    {
        now=now+5;
        return true;
    }
    else {  //Error(5);
            return false; }
}

bool isTRUE(char *line )
{
    if(line[now]=='T' && line[now+1]=='R' && line[now+2]=='U' && line[now+3]=='E' )
    {
        now=now+4;
        return true;
    }
    else {  //Error(6);
            return false; }
}

bool isVarial(char * line)
{
    if(isLetter(line))
       { if(isSpace(line))
            return true;
         else Error(1); }
    else {  Error(7);// Error of variable
            return false;}
}



bool isLetter(char *line)
{
    if( line[now]=='a' || line[now]=='b' || line[now]=='c' || line[now]=='d' || line[now]=='e' ||
        line[now]=='f' || line[now]=='g' || line[now]=='h' || line[now]=='i' || line[now]=='j' ||
        line[now]=='k' || line[now]=='l' || line[now]=='l' || line[now]=='m' || line[now]=='n' ||
        line[now]=='o' || line[now]=='p' || line[now]=='q' || line[now]=='r' || line[now]=='s' ||
        line[now]=='t' || line[now]=='u' || line[now]=='v' || line[now]=='w' || line[now]=='x' ||
        line[now]=='y' || line[now]=='z' )
        {
            now++;
            return true;
        }
    else {  Error(8);//Error of letter
            return false; }
}




void Error(int i)
{
    switch(i)
    {
        case 1: printf("\nIncorrect Space");
            break;
        case 2: printf("\nIncorrect OR");
            break;
        case 3: printf("\nIncorrect NOT");
            break;
        case 4: printf("\nIncorrect AND");
            break;
        case 5: printf("\nIncorrect FALSE");
            break;
        case 6: printf("\nIncorrect TRUE");
            break;
        case 7: printf("\nIncorrect Varial");
            break;
        case 8: printf("\nIncorrect Letter");
            break;
        case 9: printf("\nWrong Konjuckj");
            break;
        case 10: printf("\nWrong Expression");
            break;
        case 11: printf("\nIncorrect Factor");
            break;

    }
}
