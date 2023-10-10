/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //altura do degrau=vd//
    //altura que o usuario deseja alcancar=al//
    //valor de degraus que o usuario precisa para alcancar seu objetivo=vdo//
    float vd, al, vdo;
    printf("altura dos de graus em metros:");
    scanf("%f", &vd);
    printf("altura que deseja alcancar em metros:");
    scanf("%f", &al);
    vdo=al/vd;
    printf("a quantidade de degraus que tera quer subir é de:%.2f\n,", vdo);
} 
