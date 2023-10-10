#include <stdio.h>

int main() {
int n1,n2,i;

printf("digite um numero n1:");
scanf("%d", &n1);
printf("digite um numero n2:");
scanf("%d", &n2);

if(n1<n2){
    for(i=n1+1;i<n2;i++){
    if(i % 7 ==0){
        printf("%d\n", i);
    } 
    }
}else{
    for(i=n1-1;i>n2;i--){
    if(i % 7 ==0){
        printf("%d/n", i);
    }
    }

}
}