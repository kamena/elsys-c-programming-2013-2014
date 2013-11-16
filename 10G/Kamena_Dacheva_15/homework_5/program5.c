#include <stdio.h>
#include <stdlib.h>
 
int fact(unsigned int number);

void main()
{
    int n, i;
    float sum=0, a;
    scanf("%d",&n);
if ((n>=0) && (n<=20)) 
{
           for (i=1; i<=n; i++) {sum=(float)(sum)+(float)(1/(float)fact(i));}
    printf("%f\n", sum);
}
else  printf ("0<=n<=20!\n");
} 
int fact(unsigned int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
