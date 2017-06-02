#include<stdio.h>
#include<stdlib.h>
int main ()
{   
 	
  FILE *fp;
  char x[1000];
  char y[10] = "file";
  char z[10];
  char buffer[1000000];
  int i;
  
  for (i = 0; i < 999999; i++ )
      buffer[i] ='a';
  buffer[999999] = '\0';
    
  for(i = 1; i< 305; i++)
  { 
    z[0] = i + '0';
    z[1] = '.';
    z[2] = 't';
    z[3] = 'x';
    z[4] = 't';
    z[5] = '\0';
    
    strcpy(y,"file");
    strcat(y,z);
    strcpy(x, y);
    
    fp = fopen(x,"w");
    fprintf(fp, buffer);
    
    fclose(fp);
  }
    
    
}

  