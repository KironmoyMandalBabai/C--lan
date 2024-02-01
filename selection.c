#include<stdio.h>
void swap(int arr[],int a,int b){
int tmp=arr[a];
arr[a]=arr[b];
arr[b]=tmp;
}
int main()
{
    int n=5;
    int i,j,arr[5];
    for(i=0;i<n;i++){
        printf("enter element at index%d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("array before sorting \t");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++)
        {

            if(arr[j]<arr[min])
            {
                min=j;
            }
            if(min!=i)
            {
                swap(arr,min,i);
            }
            printf("\n");
             printf("array after sorting \t");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
        }
 }
}
