#include<bits/stdc++.h>
using namespace std;
// parametric way
/*void func(int n, int fact){
    if(n<1){
        cout << fact << endl;
        return;
    }
    func(n-1, fact*n);
}
int main(){
    int n;
    cout << "Enter A Number = ";
    cin >> n;
    func(n, 1);
}*/

//functional way

int func(int n){
    if(n == 0)
        return 1;
    return n * func(n-1);
}
int main(){
    int n;
    cout << "Enter A Number = ";
    cin >> n;
    cout << "The Factorial Is = " << func(n) << endl;
    return 0;
}