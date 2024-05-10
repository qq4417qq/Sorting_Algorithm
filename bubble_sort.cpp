#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int len) {
  bool flag = true;
  while (flag) {
    flag = false;
    for (int i = 0; i < len; ++i) {
        cout<<i;
      if (arr[i] > arr[i + 1]) {
        flag = true;
        int t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
      }
    }

  }
for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
}