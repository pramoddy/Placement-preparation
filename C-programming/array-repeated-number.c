#include<stdio.h>
int b[10],len=1;
int check(int val)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(b[i]==val)
        {
            return 1;
        }
    }
    len=len+1;
    b[len]=val;
    len++;
    return 0;
}
void main()
{
    int *arr,i,n,j,k=0,count=0,b[10],len=1,flag=0;
    printf("Enter the Size :\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));                     //allocate the size
    printf("Enter the %d elements to store\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    b[0]=arr[0];
    printf("\nOUTPUT\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && check(arr[i])==0)
            {
                printf("%d\n",arr[i]);
            }
        }

    }
    getch();
}

