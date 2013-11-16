#include <stdio.h>

int main(){
int x=0, y=0, z=0, r, m1, m2, m5, m;
scanf ("%d %d %d %d", &m1, &m2, &m5, &m);
r=m;

while ((m>=5) && (z<m5)) 
{
 m=m-5;
 z=z+1;
}
while ((m>=2) && (y<m2))
{
 m=m-2;
 y=y+1;
}
while ((m>=1) && (x<m1))
{
 m=m-1;
 x=x+1;
}

if ((x*1)+(y*2)+(z*5)==r) {printf("Yes: %d, %d, %d\n", x, y, z);}
else printf ("No\n");

return 0;
}
