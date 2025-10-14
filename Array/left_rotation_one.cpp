#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element "<< i+1 <<": ";
        std::cin>>arr[i];
    }
    int tmp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=tmp;
    std::cout << "The finalized array is : ";
    for(int k=0;k<n;k++)
    std::cout << arr[k] << " ";
}