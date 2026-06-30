// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a,b,c;
    printf("ENTER A\n");
    scanf("%d",&a);
    printf("ENTER B\n");
    scanf("%d",&b);
    printf("ENTER C\n");
    scanf("%d",&c);

    if(a==b==c) {
        printf("all numbers are equal");
     } 
    else if(a>b&&a>c){
        printf("a IS largest");
    }
    else if(b>a&&b>c){
        printf("A IS largest");
    }
    else{
        printf("C IS largest");
    }
     return 0;

}