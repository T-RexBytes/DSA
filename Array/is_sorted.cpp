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
    bool is_sorted = true;
    for(int i=1;i<n;i++){
        if(!(arr[i]>=arr[i-1])){
            is_sorted = false;
            break;
        }
    }
    if(is_sorted == true)
        std::cout << "The Array Is Sorted in Ascending Order.";
    else
        std::cout << "The Array Is not Sorted";
    return 0;
}