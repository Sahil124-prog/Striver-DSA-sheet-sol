#include<bits/stdc++.h>
using namespace std;
class Solution {

     public:
    int select(int arr[], int i, int n)
    {
        int minIndex = i; 
        for (int j = i + 1; j < n; j++)
        {
           
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        return minIndex; 
    }
    void selectionSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = select(arr, i, n);
            if (minIndex != i)
            {
                int temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
            }
        }
    }
};