#include <iostream>
#include <vector>
using namespace std;

vector<int> print(const vector<int>& a, const vector<int>& b) {
    int n = a.size();
    vector<int> ans;
    for (int num : b) {
        int low = 0;
        int high = n - 1;
        bool found = false;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (num == a[mid]) {
                for (int k = mid; k < n; k++) {
                    ans.push_back(a[k]);
                }
                found = true;
                break;
            } else if (num < a[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (!found) {
            // Code to handle if the element is not found; optional
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {2, 4};
    vector<int> ans = print(a, b);
    
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
