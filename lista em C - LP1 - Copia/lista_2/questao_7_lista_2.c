/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float total, td, tcd, vp, cv, cv2, cvp, cvp2;
   printf("valor total:");
   scanf("%f",&total);
   td= (total*10)/100;
   tcd= total-td;
   vp=tcd/3;
   cv=(tcd*5)/100;
   cv2=cv+ tcd;
   cvp= (total*5)/100;
   cvp2=total+cvp;
   printf("valor total com desconto = %.2f\n valor das parcelas = %.2f\n comissao do vendedor a vista= %.2f\n comissao do vendedor para venda parcelada= %.2f", tcd, vp, cv2,cvp2);
} 
