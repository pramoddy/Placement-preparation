#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *array,index1,index2,size,temp;
    printf("Enter the Size \n");
    scanf("%d",&size);
    array=calloc(size,sizeof(int));
    printf("Enter the %d elements\n",size);
    for(index1=0;index1<size;index1++){
        scanf("%d",&array[index1]);
    }
    for(index1=0;index1<size;index1++){
        for(index2=0;index2<size-(index1+1);index2++){
            if( array[index2]>array[index2+1]){
                temp=array[index2];
                array[index2]=array[index2+1];
                array[index2+1]=temp;
            }
        }
    }
    printf("Sorted elements are \n");
    for(index1=0;index1<size;index1++){
        printf("%d\n",array[index1]);
    }

}