#include<stdio.h>
#include<stdlib.h>
void swap(int*x,int*y);
void quicksort (int arr[],int start,int end);
int partition(int arr[],int start,int end);

int main ()
{
    int n,i;
    scanf("%d",&n);
    int*arr =(int*)malloc (n*sizeof(int));

    for (i=0;i<n;i++)
    {
        scanf("%d",arr+i);

    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
void quicksort (int arr[],int start,int end)
{
    if (start < end)
    {
        int piv = partition (arr,start,end);
        quicksort (arr,start,piv-1);
        quicksort (arr,piv+1,end);

    }
}

int partition(int arr[],int start,int end)
{
    int i =start-1,j;
    int piv =arr[end];
    for (j=start;j<=end;j++)
    {
        if (arr[j]<piv)
        {
            i++;
            swap(arr+i,arr+j);
                for(int i=start;i<end;i++)
    {
        printf("%d\t\n",arr[i]);
    }

        }
    }
    swap (arr+i+1,arr+end);
    return i+1;

}


void swap(int*x,int*y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}
