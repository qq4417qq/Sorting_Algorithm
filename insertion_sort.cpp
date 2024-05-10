#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int len){
    for (int i = 0; i < len; i++)
    {
        int tmp = arr[i];
        int j = i-1;
        while (j>=0&&arr[j]>tmp)
        {
            arr[j+1] = arr[j];  
            j--;
        }
        arr[j+1] = tmp;
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
}