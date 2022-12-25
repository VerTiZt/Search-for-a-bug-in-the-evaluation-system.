#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

bool check(int& arr) {
    return (arr > 0);
}
bool check1(int& arr) {
    return (arr < 0);
}

int main() {
    int n, m = 0;
    cin >> n;
    vector<int> a(n);
    for (auto it = a.begin(); it != a.end(); ++it) {
        cin >> *it;
    }

    if (all_of(a.begin(), a.end(), check)) {
        cout << "MARKS ARE CLEAR";
    }
    else {
        cout << count_if(a.begin(), a.end(), check1);
    }


    cout << endl;

    return 0;
}
