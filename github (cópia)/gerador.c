#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fptr;
	int i;
	
	fptr = fopen("anomaly.dat","w");
	
	if(fptr == NULL)
   	{
      		printf("Error!\n\n");   
      		exit(1);             
   	}
   	
   	fprintf(fptr, "10 3\n");
   	
   	  for (i = 0; i < 10; i++){
    	  	fprintf(fptr, "%d w\n", rand() % 10);
  }
  
  	fclose(fptr);
	
}
