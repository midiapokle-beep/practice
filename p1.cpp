#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
 
int main() {
    int T;
    cin >> T;
    
    vector<ll> results(T);
    
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        
        vector<int> arr(N);
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        
        ll swaps = 0;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (arr[i] > arr[j]) {
                    swaps++;
                }
            }
        }
        
        results[t] = swaps;
    }
    
    for (int t = 0; t < T; t++) {
        cout << results[t] << "\n";
    }
    
    return 0;
}
