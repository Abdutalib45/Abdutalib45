#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i,j=0,min=10000000;

    
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]==min)
        {
            j++;
        }
        
    }

    if(j%2!=0)
    {
        printf("Lucky");
    }
    else
         printf("Unlucky");


    }
