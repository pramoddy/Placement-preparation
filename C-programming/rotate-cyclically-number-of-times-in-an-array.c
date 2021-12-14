//Write a program to rotate clockwise with given number of times
#include<stdio.h>
void main()
{
    int *nums,i,temp,k,j,size;
    printf("Enter the size:");
    scanf("%d",&size);
    nums=calloc(size,sizeof(int));
    printf("Enter the %d elements: \n",size);
    for(i=0;i<size;i++)
        scanf("%d",&nums[i]);
    printf("Enter the No of rotation:");
    scanf("%d",&k);

    //main code

    for(j=0;j<k;j++)
    {
        temp=nums[size-1];
        for(i=size-2;i>=0;i--)
        {
            nums[i+1]=nums[i];
        }
        nums[0]=temp;
    }
    printf("======================================\n");
    printf("\n\n\tOUTPUT:\n");
    for(i=0;i<size;i++)
    {
        printf("\t%d\n",nums[i]);
    }
    printf("======================================\n");

}
