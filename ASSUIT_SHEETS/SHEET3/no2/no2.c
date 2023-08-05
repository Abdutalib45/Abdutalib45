#include<stdio.h>
#include<stdlib.h>
int linear_search(int arr[],int n,int x);

int main ()
{
    int n,i,x;
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));
    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);

    }
    scanf("%d",&x);
    printf("%d",linear_search(arr,n,x));
}

int linear_search(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}