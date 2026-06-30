#include <stdio.h>
int linearsearch(int arr[],int n, int key ){
    for (int  i = 0; i < n ; i++)
    {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
    

}

int main() {
    int arr[] = {1,4,7,89,8,69};
    int n =6;
    int key ;
    int result;

    printf("enter the  number to search");
    scanf("%d",&key);
    result = linearsearch(arr,n,key);
    if (result != -1){
        printf("the element is found at index %d\n",result);
    }
    else{
        printf("element not found");
    }
    



    return 0;
}