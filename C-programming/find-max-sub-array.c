#include<stdio.h>
void main()
{
    int *array,i,size,j,max=0,res=0;
    printf("Enter the size:");
    scanf("%d",&size);
    array=malloc(size*sizeof(int));
    printf("Enter the %d element:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<=i;j++)
        {
            res+=array[j];
        }
        if(res>max)
        {
            max=res;
        }
        res=0;
    }
    printf("The max sub array : %d\n",max);

}
