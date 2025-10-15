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
    int smallest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    std::cout<< "The smallest element is : " << smallest;
    return 0;
}