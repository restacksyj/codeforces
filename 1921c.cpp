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
  // _print(p.second);
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

void solve() {
  int f, n, a, b;
  cin >> n >> f >> a >> b;
  int last = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++) {
    long long keepOn = 1LL * a * (v[i] - last);
    long long turnOffAndOn = b;
    long long required = min(keepOn, turnOffAndOn);

    f -= required;
    last = v[i];

    if (f <= 0) {
      cout << "NO" << endl;
      return;
    }
  }

  yes;

  // int n, f, a, b;
  // cin >> n >> f >> a >> b;
  //
  // vector<int> v(n);
  // for (int i = 0; i < n; i++)
  //   cin >> v[i];
  //
  // int last = 0;
  //
  // for (int i = 0; i < n; i++) {
  //   long long keepOn = 1LL * a * (v[i] - last);
  //   long long turnOffAndOn = b;
  //   long long required = min(keepOn, turnOffAndOn);
  //
  //   f -= required;
  //   last = v[i];
  //
  //   if (f <= 0) {
  //     cout << "NO" << endl;
  //     return;
  //   }
  // }
  //
  // cout << "YES" << endl;
}

int main() {
  FAST_IO;
  int TC = 1;
  cin >> TC;
  while (TC--)
    solve();
}
