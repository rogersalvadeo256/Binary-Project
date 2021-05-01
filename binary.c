/*
 * =====================================================================================
 *
 *       Filename:  binary.c
 *
 *    Description: teste 
 *
 *        Version:  1.0
 *        Created:  01/05/2021 11:32:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roger Salvadeo
 *
 * =====================================================================================
 */

#include <stdio.h>
#define MAX_SIZE 100

// dear reader, while i wrote this, I was on drugs, so i don't remember anything, don't blame me
// when it breaks
int toBinary(int num)
{
int number = num;
int a[1000];
int i ;

for (i= 0; number > 0; i++)
{
    a[i]=number%2;
    number = number/2;
}

for (i=i-1; i >= 0; i--)
{
    printf("%d",a[i]);
}

printf("\n");
return 0;
}




int main()
{
    int num;
    scanf("%d",&num);

    printf("\n %d",toBinary(num));
    return 0;
}

