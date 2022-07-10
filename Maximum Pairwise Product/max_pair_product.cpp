#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int function(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    auto m1 = arr[n - 1];
    auto m2 = arr[n - 2];
    
    cout << m1 << " " << m2 << endl;
    return m1 * m2;
}

int main() {
    vector<int> v = {5, 6, 2, 7, 4};
    cout << function(v);
    return 0;
}
