/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>


int main()
{
    float sb,rat, slbt, imp;
    int sl;
    printf("informe o salario base:");
    scanf("%f", &sb);
    printf("informe o valor da ratificacao:");
    scanf("%f", &rat);

    slbt = sb + rat;
    
    if (slbt <= 999) {
        imp = 0;
    }
    else if (slbt <= 1499) {
        imp = 0.15* slbt;
    }
    else {
        imp = 0.27* slbt;
    }
    
    sl = slbt - imp;
    
    printf("seu salario liquido Ã© de ""%d", sl);
    
}
