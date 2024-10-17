#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    void insert(int arr[], int j)
    {
        //code here
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        //int n= arr.size();
        for(int i=1;i<n;i++){
            int j=i;
            insert(arr,j);
        }
    }
};