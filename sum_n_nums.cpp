#include<bits/stdc++.h>
using namespace std;
// parametric way
// void func(int i, int sum){
//     if(i<1){
//         cout << sum << endl;
//         return ;
//     }
//     func(i-1,sum+i);
// }
// int main(){
//     int n;
//     cout << "Enter A Number = ";
//     cin >> n;
//     func(n,0);
// }

// parametric way
int func(int n){
    if(n == 0)
        return 0;
    return n + func(n-1);
}
int main(){
    int n;
    cout << "Enter A Number = ";
    cin >> n;
    cout << "The Sum Is : " << func(n) << endl;
}