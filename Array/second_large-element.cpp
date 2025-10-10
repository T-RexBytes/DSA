#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element "<<i+1<<": ";
        std::cin>>arr[i];
    }
    int largest = arr[0];
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        std::cout << "All the elements of the array is equal..";
    else
        std::cout<< "second largest element is : " << second << std::endl;
    return 0;
}