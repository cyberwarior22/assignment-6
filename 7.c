#include <stdio.h>
int main()
{
    int count = 0 ;
    long long int n ;
    printf("Enter a number : ") ;
    scanf("%lld",&n) ;
    
    
    while(n!=0)
    {
        n = n/10 ;
        count++;
    }
    printf("Number of digits in given number is %d " , count);
    return 0;
}
