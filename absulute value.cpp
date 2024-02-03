#include<stdio.h>
int abs(int x){
	if(x<0){
		x=x*-1;
		return x;
	}
	
}
int main(){
	int a;
	printf("enter any integer");
	scanf("%d",&a);
	printf("absulute value is %d",abs(a));
	return 0;
}O
