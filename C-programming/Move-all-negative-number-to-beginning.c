//move the negative numbers into beginning without using the sort technique

#include<stdio.h>
void main()
{
    int *arr,size,i,j=0;
    printf("Enter the size:");
    scanf("%d",&size);              //read the size of the array
    arr=calloc(size,sizeof(int));
    printf("Enter the %d Elements :",size); //allocate the size to the array
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]<0 && arr[j]>0)
        {
            arr[i]^=arr[j];         //bitwise operator to swap the two element
            arr[j]^=arr[i];
            arr[i]^=arr[j];
        }
        else if(arr[j]<0)
        {
            j++;
            i--;   //other wise the i incremented by one
        }
    }
    printf("OUTPUT:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
