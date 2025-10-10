#include<bits/stdc++.h>
int main()
{
    int n;
    std::cout<<"Enter the size of array: ";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter element "<<i+1<<": ";
        std::cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    std::cout<<largest;
    return 0;
}