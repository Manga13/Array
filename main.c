
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int n,*arr,i,min,max;
        printf("Enter n value\n");
        scanf("%d",&n);
        arr=(int *)malloc(n*sizeof(int));
        printf("Array elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        min=max=arr[0];
        for(i=1;i<n;i++)
        {
                if(arr[i]>max)
                {

                        max=arr[i];
                }
                if(arr[i]<min)
                {
                        min=arr[i];
                }
        }
        printf("Min : %d\n",min);
        printf("Max :%d\n",max);
}
