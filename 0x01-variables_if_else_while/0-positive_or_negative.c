#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-program entry point.
* Return:0-no error, non zero value if error.
**/
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - Rand_MAX / 2;
     
    if (n > 0);
    {
            printf("%d is positive\n", n);
    }
    else if (n == 0);
    {
	    printf("%d is zero\n", n)' 
    }              
    else
    {
	    printf("%d is negative\n", n);
    }
    return (0);	    
}
