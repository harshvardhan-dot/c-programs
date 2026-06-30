#include <stdio.h>
int fact(int x){
    if(x == 0||x==1){
        return 1;
    }
    else{
        return x*fact(x-1);/*here fact is a recursive function */
    }
}

int main() {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
}