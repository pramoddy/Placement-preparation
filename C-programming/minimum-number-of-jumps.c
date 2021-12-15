/*
Minimum number of jumps
Given an array of N integers arr[] where each element represents the max number of steps
that can be made forward from that element. Find the minimum number of jumps to reach the end
of the array (starting from the first element). If an element is 0, then you cannot move through
that element.Note: Return -1 if you can't reach the end of the array.

Example 1:
Input:
N = 11
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output: 3
Explanation:
First jump from 1st element to 2nd
element with value 3. Now, from here
we jump to 5th element with value 9,
and from here we will jump to last.
Example 2:

Input :
N = 6
arr = {1, 4, 3, 2, 6, 7}
Output: 2
Explanation:
First we jump from the 1st to 2nd element
and then jump to the last element.

Your task:
You don't need to read input or print anything. Your task is to complete function minJumps()
which takes the array arr and it's size N as input parameters and returns the minimum number
of jumps. If not possible returns -1.
 */
#include<stdio.h>
void main()
{
    int *array,size,i=0,count=0;
    printf("Enter the size :");
    scanf("%d",&size);
    array=calloc(size,sizeof(int));
    printf("Enter the %d elements\n",size);
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\n\tOUTPUT:\n");
    i=0;
    while(1)
    {
        if(i<size-1)
        {
            count++;
            i+=array[i];
        }
        else{
            break;
        }
    }
    printf("Min NO OF jumps : %d\n",count);
}
