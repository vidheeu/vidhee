// C++ program to find k'th smallest element// 
#include<iostream>
#include <algorithm>
using namespace std; 
  
// Function to return k'th smallest element in a given array 
int kthSmallest(int arr[], int n, int k) 
{ 
    // Sort the given array 
    sort(arr, arr+n); 
  
    // Return k'th element in the sorted array 
    return arr[k-1]; 
} 

//function to return kth largest element in a given array
int kthlargest (int arr[],int n,int k)
{
//sort the given array
    sort(arr,arr+n);
//return kth element in the sorted array
    return arr[k+1];
}
  
// Driver program to test above methods 
int main() 
{ 
    int arr[] = {1, 3, 45, 7, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]), k = 2; 
    cout << "K'th smallest element is " <<  kthSmallest(arr, n, k); 
    cout <<"kth largest element is"<< kthlargest(arr, n,k);
    return 0; }




