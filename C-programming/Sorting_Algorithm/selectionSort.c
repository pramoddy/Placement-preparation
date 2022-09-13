#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *numberList,size,index,j,temp,p;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    numberList=calloc(size,sizeof(int));

    printf("Enter the %d values\n",size);
    for(index=0;index<size;index++){
        scanf("%d",&numberList[index]);
    }

    for(index=0;index<size;index++){
        temp=index;
        for(j=index+1;j<size;j++){
            if(numberList[temp]>numberList[j]){
                temp=j;
            }
        }
            p=numberList[index];
            numberList[index]=numberList[temp];
            numberList[temp]=p;  
    }
    printf("The sorted elements are \n");
     for(index=0;index<size;index++){
        printf("%d\n",numberList[index]);
    }
}