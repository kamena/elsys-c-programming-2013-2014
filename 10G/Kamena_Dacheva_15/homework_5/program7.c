#include <stdio.h>

int main(){
int n, r, i, boolean=1;
scanf ("%d", &n);
if ((n<100) && (n>1)){
if ((n%10==0) && (n!=20) && (n!=10)) {r=n/10;}
else {r=n;}

if ((n>20) && (n<30)) {printf ("dvadeset i "); r=n%10;}

if ((n>30) && (n<100)) {r=n/10;}


if ((n>12) && (n<20)) {r=n%10;}

for (i=1; i<=2; i++){
if (boolean==1){
switch (r)
     {

        case 1 : printf( "edno" ); break;
        case 2 : printf( "dve" ); break;
        case 3 : printf( "tri" ); break;
        case 4 : printf( "chetiri" ); break;
        case 5 : printf( "pet" ); break;
        case 6 : printf( "shest" ); break;
        case 7 : printf( "sedem" ); break;
        case 8 : printf( "osem" ); break;
        case 9 : printf( "devet" ); break;
        case 10 : printf( "deset" ); break;  
        case 11 : printf( "edinadeset" ); break;
        case 12 : printf( "dvanadeset" ); break;
        case 20 : printf( "dvadeset" ); break;  
     }
}
if ((n>=30) && (n<=90) && (n%10==0) && (i!=2)) {printf ("deset"); }	
if ((n>12) && (n<20) && (i!=2)) {printf("nadeset");}
boolean=0;
if ((n>30) && (n<100) && (n%10!=0) && (i!=2)) {printf ("deset i ");r=n%10; boolean=1;}
}

printf ("\n");
}
else 
printf ("0<n<100!\n");

return 0;
}
