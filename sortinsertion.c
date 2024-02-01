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
    printf("array before sorting \t");
    for(int i=0;i<n;i++){
        printf("%d :\t",arr[i]);
    }
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {

            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("\n");
    printf("array after sorting :\t");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
