//  Copyright (c) 2018 Antoine Tran Tan
//

#include "TP_lib_suite.h"
#include "my_header.h"

int main(void)
{
	unsigned char i, j, k, l, m, valcom=0, valcomf[100], joueur[6]={5,38,42,12,2,8}, gagnante[6], meilleur_score, a=0;
	
	for(l=0;l<100;l++)
	{
	valcom = 0;
	initialiserTirage();	
		
	for(k=0;k<6;k++)
	{
		
		gagnante[k] = tirerNumero();
	}
	
		
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
			
			if(joueur[i]==gagnante[j])
				
				valcom++;
		       	
		}
		

	}
	
	valcomf[l]=valcom;
			
	}
	for(a=0;a<7;a++)
	{
		for (m=0;m<100;m++)
		{
	          if(a==valcomf[m])
	             meilleur_score = a;
		}
	}
    return 0;
}
