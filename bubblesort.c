#include<stdio.h>
void swap(int arr[],int a,int b){
int tmp=arr[a];
arr[a]=arr[b];
arr[b]=tmp;
}
int main()
{
    int n=5;
    int arr[5];

    for(int i=0;i<n;i++){
        printf("enter element at index %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("array before sorting\t");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr,j,j++);
            }
        }
    }
     printf("\n");
             printf("array after sorting \t");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
        }
