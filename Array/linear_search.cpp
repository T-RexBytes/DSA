#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arr;

    void input() {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;

        arr.resize(n);
        for (int i = 0; i < n; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    int search(int target) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == target)
                return i; 
        }
        return -1; 
    }
};

int main() {
    Solution obj;
    obj.input();

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int result = obj.search(target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
