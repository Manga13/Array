#include<stdio.h>                                                                                                                       #include<stdio.h>
#include<stdlib.h>
        int main()
        {
                int n,i,*arr,sum=0;
                printf("Enter number of elements :\n");
                scanf("%d",&n);
                arr=(int*)malloc(n*sizeof(int));
                if(arr==NULL)
                {
                                printf("memory allocation failed\n");
                                exit(0);
                        }
                printf("Array Elements\n");
                for(i=0;i<n;i++)
                {
                                scanf("%d",&arr[i]);
                               sum=sum+arr[i];
                        }
                printf("Sum Of Array Elements %d\n",sum);
        }
