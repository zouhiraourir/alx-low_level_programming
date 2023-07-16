#include <stdio.h>
int main()
{
    int a ;
    long int b ;
    long long int c ;
    char d ;
    float e ;
    
    printf("Size of a char is : %d bytes\n",sizeof(d)) ;
    printf("Size of an int is : %d bytes\n",sizeof(a)) ;
    printf("Size of a long int is : %d bytes\n",sizeof(b)) ;
    printf("Size of a long long int is : %d bytes\n",sizeof(c)) ;
    printf("Size of a float is : %d bytes\n",sizeof(e)) ;
    
    return(0) ;
}
