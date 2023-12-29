#include "bits/stdc++.h"

const int64_t inf = 1e18;

void solve() {
    int n, m; std::cin >> n >> m;
    std::vector<std::pair<int, int>> adj[n];
    for(int i = 0; i < m; ++i) {
        int u, v, w; std::cin >> u >> v >> w; --u, --v;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }
    std::vector<int> s(n);
    for(int& i: s) std::cin >> i;

    std::vector<std::vector<int64_t>> dist(n, std::vector<int64_t>(1001, inf));
    std::vector<std::vector<bool>> vis(n, std::vector<bool>(1001, false));
    
    dist[0][s[0]] = 0;
    std::priority_queue<std::array<int64_t, 3>> q;
    q.push({0, 0, s[0]});
    while(!q.empty()) {
        int u = q.top()[1], k = q.top()[2];
        q.pop();
        if(vis[u][k] || dist[u][k] == inf) continue;
        vis[u][k] = true;
        for(auto x: adj[u]) {
            int v = x.first, w = x.second;
            int c = std::min(s[v], k);
            if(dist[v][c] > dist[u][k] + 1LL * w * k) {
                dist[v][c] = dist[u][k] + 1LL * w * k;
                q.push({-dist[v][c], v, c});
            }
        }
    }
    int64_t ans = inf;
    for(int k = 1; k <= 1000; ++k) 
        ans = std::min(ans, dist[n - 1][k]);
    std::cout << ans << "\n";
}   
 
int main() {
    std::ios_base::sync_with_stdio(0);std::cin.tie(0);
    int t = 1; std::cin >> t;
    while(t--) {
        solve();
    }
}