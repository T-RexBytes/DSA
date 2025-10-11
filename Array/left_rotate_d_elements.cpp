#include<bits/stdc++.h>
void rev(int arr[], int start, int end){
    while(start < end){
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        start++;
        end--;
    }
}
void rotate(int arr[], int n, int d){
    rev(arr, 0, d - 1);
    rev(arr, d, n - 1);
    rev(arr, 0, n - 1);

}
int main(){
    int n, d;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    std::cout << "How many elements do you want to move = ";
    std::cin >> d;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter element "<<i+1<<": ";
        std::cin>>arr[i];
    }
    rotate(arr, n, d);
    std::cout << "The finalized array is : ";
    for(int k=0;k<n;k++)
    std::cout << arr[k] << " ";
    return 0;
}