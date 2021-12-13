#include<stdio.h>
void main()
{

    int arr[10],i,n,j,temp,k;
    printf("Enter the size of array :\t");
    scanf("%d",&n);
    printf("Enter the Kth smallest element:\t");
    scanf("%d",&k);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
         for(i=0;i<n;i++)
        {
            for(j=0;j<(n-j);j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
        printf("Kth[%d] element is : %d",k,arr[k-1]);
        getch();



}
