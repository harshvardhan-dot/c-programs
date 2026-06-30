#include <stdio.h>

int main() {
    int n ,i ;
    float average, sum;
    float number ;
    sum =0 ;
    printf("how many numbers ? :");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&number);
        sum = sum +number;
    }
    average = sum / n;
    printf("Average: %.2f",average);
    
   
    
    

    return 0;
}