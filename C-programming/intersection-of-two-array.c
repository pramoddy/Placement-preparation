//write a program to print the intersection in a given two array

#include<stdio.h>
int *a,l=0;
int check(int val)          //check wheather the number is repeated or not
{
    int i;
    a=realloc(a,1*sizeof(int));
    for(i=0;i<l;i++){
        if(a[i]==val){
            return 1;
        }
    }
    a[l]=val;
    l++;
    return 0;
}
void main()
{
    int *arr_a,*arr_b,i,j,p=0,flag=0,size_a,size_b;
    printf("Enter the size of array A and B:");
    scanf("%d%d",&size_a,&size_b);
    arr_a=malloc(size_a*sizeof(int));
    arr_b=malloc(size_b*sizeof(int));
    printf("Enter the %d elements to Array_A :\n",size_a);
        for(i=0;i<size_a;i++){
            scanf("%d",&arr_a[i]);
        }
    printf("Enter the %d elements to Array_B :\n",size_b);
        for(i=0;i<size_b;i++){
            scanf("%d",&arr_b[i]);
    }
    printf("\n\n\tOUTPUT:\n");
    for(i=0;i<size_a;i++)
    {
        for(j=0;j<size_b;j++)
        {
            if(arr_a[i]==arr_b[j] && check(arr_a[i])==0)
            {
                printf("%d\n",arr_a[i]);
            }
        }
    }
}
