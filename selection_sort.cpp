#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int len){
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
        }
    }
        for (int i = 0; i < len; i++) cout<<arr[i];
}