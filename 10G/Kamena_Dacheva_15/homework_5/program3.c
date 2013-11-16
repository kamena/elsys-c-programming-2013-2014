#include <stdio.h>

int main(){
int l=1, n=1, i, j, cifra, chislo;
int a[11];

scanf ("%d", &chislo);
for (i=10; i>=0; i--){
 a[i]=chislo % 10;
 chislo=chislo / 10;
}
i=1;
while (n<=10){
cifra=a[n];
for (i=n+1; i<=10; i++){
 if ((a[n]==a[i])&&(a[i]!=100)){l++; a[i]=100;}
}
if (l>1) {printf("%d:%d\n", cifra, l);}
n++;
l=1;
}
return 0;
}
