#include<stdio.h>
int n;
int check(int g){
    if(n==g){
        printf("Correct guess!\n");
        return 1;
    }
    else{
        printf("Try again!\n");
        return 0;
    }
    
}
int main(){
    n=5;
    int i,g;

    for(i=0;i<5;i++){
        printf("Guess the pass: ");
        scanf("%d",&g);
        int result = check(g);
        if(result){
            break;
        }
    }
    if(i==5) printf("Out of attempts!\n");
    return 0;
}



