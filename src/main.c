//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#include "stdlib.h"

int main(void)
{
	
	long int S1 = 0, S4 = 0;
	int n = 0, v = 1, r, S3 = rand()%10 + 1, p=0, m=1;

	while (n<3292)
	{
		S1 = S1+3*n;
		n = n+1;
	}
			 
	while (v<12)
	{
		r = rand()%10 + 1;
		S3 = S3 + r;
		v = v+1;
	}
	
	while (p<20)
	{
		if (m%3==0 || m%7==0)
		{
			S4 = S4 + m;
		    p = p+1;
		    m = m+1;
		}
		
	    else
			m = m+1;
		}
	
return 0;
}
