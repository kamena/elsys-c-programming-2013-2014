#include <stdio.h>
#include <stdlib.h>
	 
	int ascending(void const *a, void const *b )
	{
	    return (*(char*)a - *(char*)b );
	}
	 
	int main()
	{
	    char a[13];
	    scanf ("%s", a);
	    qsort(a, 13, sizeof(char), ascending);
		a[8]='T';
		a[9]='J';
		a[10]='Q';
		a[11]='K';
		a[12]='A';
	    printf("%s\n", a);
	 
	    return 0;
	}
