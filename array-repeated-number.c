#include<stdio.h>
void main()
{

    int *arr,i,n,j,count=0;
    printf("Enter the Size :\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter the %d elements to store\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nOUTPUT\n");
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
    }
    if(1<=count)
    {
        printf("%d Element repeated is %d times \n",arr[i],count);
        count=0;
    }
    count=0;
    }
}
