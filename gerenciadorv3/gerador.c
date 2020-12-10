#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fptr;
	int i;
	int acessos=0;
	printf("Inserir o numero de acessos\n");
	scanf("%d",&acessos);
	
	fptr = fopen("anomalygerado.dat","w");
	
	if(fptr == NULL)
   	{
      		printf("Error!\n\n");   
      		exit(1);             
   	}
   	
   	fprintf(fptr, "10 3\n");
   	
   	  for (i = 0; i < acessos; i++){
    	  	fprintf(fptr, "%d w\n", rand() % 10);
  }
  
  	fclose(fptr);
	
}
