/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()
{
    int tm, th, ts;
    
    printf("digite o tempo em segundos:");
    scanf("%d",&ts);
    
    th=ts/3600;
    ts=ts % 3600;
    tm=ts/60;
    ts=ts % 60;
    
    printf("o tempo em horas, minutos e segundos:""%d", th);
    printf(":""%d", tm);
    printf(":""%d", ts);
    
}
