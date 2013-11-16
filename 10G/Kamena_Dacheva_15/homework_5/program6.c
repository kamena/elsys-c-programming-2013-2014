#include <stdio.h>

int main(){
int first[4][4], second[4][4];
int i,j,r;

      for (i=0; i<4; i++)
      {
        for (j=0; j<4; j++)
        {
          scanf("%d", &first[i][j]);
        }
      }

      for (i=0; i<4; i++)
      {
        for (j=0; j<4; j++)
        {
           second[j][i]=first[i][j];
        }
      }

      for( i = 0 ; i < 4 ; i++ )
      {
        for( j = 0 ; j < 4 ; j++ )
        {
           printf("%d\t",second[i][j]); 
        }  
       printf("\n");
      }

return 0;
}
