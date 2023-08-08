#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n,i,j,t,min=10000000,result=0;
    scanf("%d",&t);
    while(t--)
    {
    min=10000000;    
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            result=arr[i]+arr[j]+j-i;

            if(result<min)
            {
                min=result;
            }

        }

        
    }

    printf("%d\n",min);


    }



}    