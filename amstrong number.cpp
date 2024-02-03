/*
#include<stdio.h>
 int main()
{
	int n,i,sum,temp;
	for(i=0;i<500;i++)
	{
		n=i;
		sum=0;
		
		while(n>0)
		{
			temp=n%10;
			sum+=temp*temp*temp;
			n/=10;
		}
		if(i==sum)
		{
			printf("%d is a amstrong number\n",i);
		}
	}
	return 0;
}
*/
#include<stdio.h>
int is_armstrong( int n)
{
	 int i,m,sum,temp;
     sum=0;
	 m=n;	
     while(n>0)
	 {
	 	 temp=n%10;
		 sum=sum+(temp*temp*temp);
	 	 n/=10;
	 }  	
	 if(m==sum)
	     return 1; //Armstrong number
	 else
	     return 0; // not
}

int armstron_in_range(int lb, int ub){
	 int i;
     for(i=lb;i<ub;i++)
	 {
         if( is_armstrong(i) == 1 )
    	     printf("\n%d",i);
     }	
}
int main()
{
	
	 int i,sum=0;
	 armstron_in_range(2,500);
	 return 0;
}





