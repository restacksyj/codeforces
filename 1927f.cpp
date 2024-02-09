#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// Outputs
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

// Constants
#define PI 3.141592653589793238
#define INF LONG_LONG_MAX
#define MOD 1e9 + 7

// Faster Input Output
#define FAST_IO (ios_base::sync_with_stdio(false), std::cin.tie(NULL));
#define ll long long

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned ll t) { cerr << t; }

// template <class T, class V> void _print(pair<T, V> p);
// template <class T> void _print(vector<T> v);
// template <class T> void _print(set<T> v);
// template <class T, class V> void _print(map<T, V> v);
// template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(unordered_set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(multimap<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

template <class T, class V> void _print(unordered_map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

void bfs(vector<vector<pair<int, int>>> adj, int src, vector<int> &vis,
         int &minW, map<int, int> &um) {
  queue<pair<int, int>> q;
  vis[src] = 1;
  q.push({src, -1});

  vector<int> cyclePath;
  cyclePath.push_back(src);
  while (!q.empty()) {
    int u = q.front().first;
    int parent = q.front().second;
    q.pop();
    for (auto adjNode : adj[u]) {
      if (!vis[adjNode.first]) {
        vis[adjNode.first] = 1;
        cyclePath.push_back(adjNode.first);
        q.push({adjNode.first, u});
      }

      if (parent != adjNode.first) {
        // it's a cycle
        if (minW > adjNode.second) {
          minW = adjNode.second;
          _print(cyclePath);
        }
      }
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  int i = 0;

  vector<vector<pair<int, int>>> adj(n + 1);
  while (i < m) {
    int a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
    adj[b].push_back({a, w});
    i++;
  }

  vector<int> vis(n, 0);
  int result = INT_MAX;
  map<int, int> um;

  for (int s = 1; s <= n; s++) {
    if (!vis[s]) {
      int minW = INT_MAX;
      bfs(adj, s, vis, minW, um);
      result = min(minW, result);
    }
  }

  cout << result << endl;
  for (auto it : um) {
    _print(adj[it.first]);
  }
}

int main() {
  FAST_IO;
  int TC = 1;
  cin >> TC;
  while (TC--)
    solve();
}
