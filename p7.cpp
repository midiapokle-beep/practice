#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
using ll = long long;
 
const ll INF = 1e18;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, s;
    cin >> n >> m >> s;
    
    vector<int> u(m), v(m);
    vector<ll> w(m);
    
    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i] >> w[i];
    }
    
    vector<ll> dist(n + 1, INF);
    dist[s] = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            if (dist[u[j]] != INF && dist[v[j]] > dist[u[j]] + w[j]) {
                dist[v[j]] = dist[u[j]] + w[j];
            }
        }
    }
    
    for (int j = 0; j < m; j++) {
        if (dist[u[j]] != INF && dist[v[j]] > dist[u[j]] + w[j]) {
            cout << "Negative cycle\n";
            return 0;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF) cout << "inf ";
        else cout << dist[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}