#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
int main ()
{
    int n,i,min=INT_MAX,index;
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if (arr[i]<min)
        {
            min=arr[i];
            index=i;

        }

    }
    printf("%d %d",min,index+1);
}