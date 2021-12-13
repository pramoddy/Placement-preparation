#include<stdio.h>
void main()
{
    int *arr,min,max,i,n;
    printf("Enter the size :");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));
    printf("Enter the %d array \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
        else if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Min=%d and max=%d",min,max);

}
