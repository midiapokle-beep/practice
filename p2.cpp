#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);      
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
 
    bool deck = true;
    for (int i = 0; i < n - 1; i++) { 
        if (v[i + 1] - v[i] != 1) {    
            deck = false;
            break;  
        }
    }
    if (deck) {
        cout << "Deck looks good" << "\n";
    }
    else {
        cout << "Scammed" << "\n";
    }
    return 0;
}