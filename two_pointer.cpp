#include<bits/stdc++.h>
using namespace std;
// with two variables
/*void func(int l, int r, int arr[]){
    if(l >= r) 
        return;
    swap(arr[l],arr[r]);
    func(l+1, r-1, arr);
}
int main(){
    int arr[5] = {1,2,3,4,5};   
    for(auto it : arr)    
        cout << it <<" ";
    cout << "\n";
    func(0, sizeof(arr) / sizeof(arr[0]) - 1, arr);
    for(auto it : arr)    
        cout << it <<" ";
    return 0;
}*/

//using one variable

void func(int i, int arr[], int n){
    if(i >= n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    func(i+1, arr, n);
}
int main(){
    int arr[5] = {1,2,3,4,5};   
    for(auto it : arr)    
        cout << it <<" ";
    cout << "\n";
    func(0, arr, sizeof(arr) / sizeof(arr[0]));
    for(auto it : arr)    
        cout << it <<" ";
    return 0;
}
