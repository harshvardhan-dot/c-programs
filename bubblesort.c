#include <stdio.h>
void bubblesort(int arr[],int n ){
    int issorted =0;
    for (int i = 0; i<n-1; i++){
        issorted = 1;
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
                issorted = 0;
            }
            
        }
        if (issorted)
        {
            break;
        }
    }
    
    
}


int main() {
    int n, i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    bubblesort(arr,n);
    printf("the array after sorting is :\n");
    for ( i = 0; i<n; i++)
    {
        printf("%d  ",arr[i]);
    }

return 0 ;
    


    
    
}