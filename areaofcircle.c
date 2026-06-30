#include <stdio.h>


int main() {
    int a = 10;
    int b = 8;
    int c = mul(a,b);
    printf("%d",c);
    return 0;
}
int mul( int x, int y){
    int p ;
    p= x *y;
    return(p);

}