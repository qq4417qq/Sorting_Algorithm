#include<bits/stdc++.h>
using namespace std;
void sort_merge(int arr[],int left,int mid,int right){
    const int len = right - left + 1;
    int newarr[len];
    int i = left;
    int j = mid + 1;
    int k = 0;
    while (i<=mid&&j<=right){
        if (arr[i]<arr[j]) newarr[k++] = arr[i++];
        else newarr[k++] = arr[j++];
    }
    while(i<=mid){
        newarr[k++] = arr[i++];
    } 
    while (j<=right)
    {
        newarr[k++] = arr[j++];
    }
    for (i = left,k = 0; k < len; )
    {
        arr[i++] = newarr[k++];
    }
    

}
void mergeSort_use(int arr[],int left,int right){
    if (left<right)
    {
        int mid = (left + right)/2;
        mergeSort_use(arr,left,mid);
        mergeSort_use(arr,mid+1,right);
        sort_merge(arr,left,mid,right);
    }
}

void mergeSort(int arr[],int len){
    mergeSort_use(arr,0,len-1);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
}