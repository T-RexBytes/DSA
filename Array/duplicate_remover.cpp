#include<bits/stdc++.h>
int main(){
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element "<<i+1<<": ";
        std::cin>>arr[i];
    }
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    std::cout << "The finalized array is : ";
    for(int k=0;k<i+1;k++)
    std::cout << arr[k] << " ";
}