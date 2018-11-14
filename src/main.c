//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"

int main (void)
{
	int a = LancerDe(), P=0;
						  
		do
		{
		if (a%2==0)
		{
		   P = P + a;
		   a = LancerDe();
		}
			
		else if (a == 3)
		{
		   P = P * 2;
		   a = LancerDe();
		}
			   
	    else
		{
			if (P<2)
			{
			P = 0;
			a = LancerDe();
			}
			else
			{
		    P = P - 2;
			a = LancerDe();
			}
			}
		}while (a != 1);

return 0;

}

