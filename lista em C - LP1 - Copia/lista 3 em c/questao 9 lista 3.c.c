/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <string.h>


int main()
{
    float sal, sal1;
    int ret;
    char cargo[20];
    printf("informe seu salario:");
    scanf("%f", &sal);
    
    printf("informe seu cargo:");
    scanf("%s", cargo);
    
    if(strcmp(cargo, "programador")==0) {
        sal1 = sal*1.3;
        printf("seu salario ÃƒÂ© de ""%f", sal1);
    }
    else {
        sal1 = sal*1.1;
        printf("seu salario e de:""%f", sal1);
    }
    
}
