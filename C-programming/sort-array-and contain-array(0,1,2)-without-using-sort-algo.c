//an array contain 0,1,2 and sort the array without using the sorting algorithm

#include<stdio.h>
void main()
{
    int *array,i,len_array,ones=0,zeros=0,twos=0;
    printf("Enter the size of array: ");
    scanf("%d",&len_array);
    array=malloc(len_array*sizeof(int));
    printf("Enter the %d element\n",len_array);
    for(i=0;i<len_array;i++)
        scanf("%d",&array[i]);
    for(i=0;i<len_array;i++)
    {
        if(array[i]==0)
            zeros++;
        else if(array[i]==1)
            ones++;
        else
            twos++;

    }
    for(i=0;i<len_array;i++)
    {
        if(zeros!=0)
        {
            array[i]=0;
            zeros--;
        }
        else if(ones!=0)
        {
            array[i]=1;
            ones--;
        }
        else{
            array[i]=2;
            twos--;
        }
    }
    printf("===========================\n");
    printf("\n\tOUTPUT: \n");
    for(i=0;i<len_array;i++)
    {
        printf("\t\t%d\n",array[i]);
    }
    printf("============================\n");
}
