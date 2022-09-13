#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *array,index1,index2,size,temp,SwapVar;
    printf("Enter the Size \n");
    scanf("%d",&size);
    array=calloc(size,sizeof(int));
    printf("Enter the %d elements\n",size);
    for(index1=0;index1<size;index1++){
        scanf("%d",&array[index1]);
    }

    //------------insertion sort algorithm
    for(index2=0;index2<size-1;index1++){
        temp=index2+1;
        while(temp!=0){
        if(array[temp]<array[temp-1])
        {
            SwapVar=array[temp];
            array[temp]=array[temp-1];
            array[temp-1]=SwapVar;
            temp--;
        }
        break;
    }
    }

     printf("Sorted elements are \n");
    for(index1=0;index1<size;index1++){
        printf("%d\n",array[index1]);
    }
}