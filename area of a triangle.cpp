#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,c,s,area;
	printf("enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of a tringle=%d\n",area);
    return 0;           
    
    
}


