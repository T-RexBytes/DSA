#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element "<< i+1 <<": ";
        std::cin>>arr[i];
    }
    int smallest = arr[0];
    int second = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<second){
            second = arr[i];
        }
    }
    if(second == INT_MAX)
        std::cout << "All the elements of the array is equal..";
    else
        std::cout<< "second smallest element is : " << second << std::endl;
    return 0;
}