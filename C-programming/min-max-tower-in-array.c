/*
Minimize the Heights II

Given an array arr[] denoting heights of N towers and a positive integer K,
you have to modify the height of each tower either by increasing or decreasing them by K only once.
After modifying, height should be a non-negative integer.
Find out what could be the possible minimum difference of the height of shortest and longest towers
after you have modified each tower.

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as
{3, 3, 6, 8}. The difference between
the largest and the smallest is 8-3 = 5.

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between
the largest and the smallest is 17-6 = 11.
*/
#include<stdio.h>
void main()
{
    int *array,i,key,size,min,max;
    printf("Enter the size:");
    scanf("%d",&size);
    array=malloc(size*sizeof(int));
    printf("Enter the %d element:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the key :");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if((array[i]/key)>0)
        {
            array[i]-=key;
        }
        else
            array[i]+=key;
    }
        max=min=array[0];
    for(i=0;i<size;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
        else if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("==============================================\n");
    printf("\n\tOUTPUT\n\n");
    printf(" Diff b/w large & small Value is = %d\n",(max-min));
    printf("==============================================\n");
}
