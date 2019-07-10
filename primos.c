#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>


void crivo()
{
	
	
	FILE *p_arq;
	p_arq = fopen("prim.txt","w");

	for(int count=2;count<99999;count++){
		bool primo=true;
		
		for(int i=2;i<count;i++)
		{
			if(count % i == 0)
			{
				primo = false;
			}
		}
		if(primo)
		{
			fprintf(p_arq, "%d\n", count);
		}
			
	}
	
	fclose(p_arq);
}

void main()
{
	
	crivo();
	

}
