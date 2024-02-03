#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("enter the elements of matrix A :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);

		}
	}


	printf("enter the elements of matrix B :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		printf("the first matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
		printf("the second matrix is:\n ");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);

		}
		printf("\n");
	}

	printf("addition between A & B =third matrix is :\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}


}
