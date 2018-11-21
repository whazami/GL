//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "math.h"
#include "stdlib.h"
#define SEUILB -100
#define SEUILH 200
#define SEUIL 5

int main(void)
 {
	 unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9}, dist[10]={0,1,2,3,4,5,6,7,8,9}, N=5, a[5]={rand()%50, rand()%50, rand()%50, rand()%50, rand()%50}, M=6, miroir[6]={rand()%50, rand()%50, rand()%50, rand()%50, rand()%50, rand()%50}, b[5], i, j, k, l, m;
	 int sat[10]={rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383,rand()-16383};
	 
	 for (i=0; i<10; i++) 
	 {
	 if (bin[i]>SEUIL)
		 bin[i]=1;
			   
	 else
		 bin[i]=0;
	 }

	 for (j=0; j<10; j++)
	 {
		 if (sat[j]>SEUILH)
			 sat[j] = SEUILH;
					  
		 else if (sat[j]<SEUILB)
			 sat[j] = SEUILB;
		 
	 }
	 
	 for (k=9; k>0; k=k-1)
		 dist[k]= fabs(dist[k]-dist[k-1]);
	 
	 for (l=0; l<N; l++)
		 b[l] = a[(N-1)-l];
	 
	 for (m=M/2; m<M; m++)
		 miroir[m] = miroir[m-(2*(m-M/2)+1)];

	 return 0;					 
 }
