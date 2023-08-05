#include<stdio.h>
#include<stdlib.h>
void swap(int*x,int*y);
void quicksort (int arr[],int start,int end);
int partition(int arr[],int start,int end);
int binarysearch(int arr[],int start,int end,int key);


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
    quicksort(arr,0,n-1);
    
    printf("%d",binarysearch( arr, 0, n-1, x));

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

int binarysearch(int arr[],int start,int end,int key)
{
    int mid =(start+end)/2;
    if (start>end)
    {
        return -1;
    }
    else if (arr[mid]==key)
    {
        return mid;
    }
    else if (arr[mid]>key)
    {
        return binarysearch(arr,start,mid-1,key);
    }
    else if (arr[mid]<key)
    {
        return binarysearch(arr,mid+1,end,key);
    }
}