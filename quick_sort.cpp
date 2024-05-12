#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int left,int right){
    int i = left;
    int j = right;
    int mid = arr[left];
    while (true)
    {
        while (i<=j&&arr[i]<=mid) i++;   
        while (i<=j&&arr[j]>=mid) j--;
        if(i>=j){
            break;
        }         
        swap(arr[i],arr[j]);  
    }
    swap(arr[left],arr[j]);
    return j;
}
int* quick_sort_use(int arr[],int left,int right){
    if(left<right){
        int mid = partition(arr,left,right);
        arr = quick_sort_use(arr,left,mid-1);
        arr = quick_sort_use(arr,mid+1,right);
    }
    return arr;
}
void quick_sort(int arr[],int len){
    arr = quick_sort_use(arr,0,len-1);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
}