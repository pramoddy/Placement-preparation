#include<stdio.h>
void main()
{
    int *arr_a,*arr_b,i,j,p=0,flag=0,size_a,size_b;
    printf("Enter the size of array A and B:");
    scanf("%d%d",&size_a,&size_b);
    arr_a=malloc(size_a*sizeof(int));
    arr_b=malloc(size_b*sizeof(int));
    printf("Enter the %d elements\n",size_a);
        for(i=0;i<size_a;i++){
            scanf("%d",&arr_a[i]);
        }
    printf("Enter the %d elements\n",size_b);
    for(i=0;i<size_b;i++){
    scanf("%d",&arr_b[i]);
    }
    printf("\n\n\tOUTPUT:\n");
    for(i=0;i<size_a;i++)
        printf("%d\n",arr_a[i]);

    for(i=0;i<size_b;i++)
    {
        for(j=0;j<size_a;j++)
        {
            if(arr_b[i]==arr_a[j])
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
        {
            printf("%d\n",arr_b[i]);
            flag=0;
        }
        else
            flag=0;
    }
}
