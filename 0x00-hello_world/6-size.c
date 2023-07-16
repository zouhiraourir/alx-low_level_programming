#include <stdio.h>
int main()
{
    int a ;
    long int b ;
    long long int c ;
    char d ;
    float e ;
    
    printf("size of char is : %d bytes\n",sizeof(d)) ;
    printf("size of int is : %d bytes\n",sizeof(a)) ;
    printf("size of long int is : %d bytes\n",sizeof(b)) ;
    printf("size of long long int is : %d bytes\n",sizeof(c)) ;
    printf("size of float is : %d bytes\n",sizeof(e)) ;
    
    return(0) ;
}
