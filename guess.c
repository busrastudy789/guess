#include<stdio.h>
int main(){
    int n=10,g,i;
    for(i=0;i<5;i++){
    printf("Guess the pass: ");
    scanf("%d",&g);
    if(n==g){
        printf("Correct guess!\n");
        break;
    }
    }
    if(i==5){
    printf("Out of attempts!\n");
    }
    return 0;
}
