// Note, Comments are not allowed in code on Hackerrank website for this problem- test cases WILL fail
// I add comments here to show where changes were made
#include <bits/stdc++.h>
using namespace std;

void findZigZagSequence(vector < int > a, int n){
    sort(a.begin(), a.end());
    // First line modified by adding - 1 to the equation
    int mid = (n + 1)/2 - 1;
    swap(a[mid], a[n-1]);

    int st = mid + 1;
    // Second line modified, change - 1 to - 2
    int ed = n - 2;
    while(st <= ed){
        swap(a[st], a[ed]);
        st = st + 1;
        // Third line modified, change + 1 to - 1
        ed = ed - 1;
    }
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

int main() {
    int n, x;
    int test_cases;
    cin >> test_cases;

    for(int cs = 1; cs <= test_cases; cs++){
        cin >> n;
        vector < int > a;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        findZigZagSequence(a, n);
    }
}



