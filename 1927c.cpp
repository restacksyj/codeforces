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

void mergeSortedArrays(vector<int> arr1, int m, vector<int> arr2, int n,
                       vector<int> &merged) {
  int i = 0, j = 0, k = 0;

  while (i < m && j < n) {
    if (arr1[i] <= arr2[j]) {
      merged[k++] = arr1[i++];
    } else {
      merged[k++] = arr2[j++];
    }
  }

  while (i < m) {
    merged[k++] = arr1[i++];
  }

  while (j < n) {
    merged[k++] = arr2[j++];
  }
}

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x > k)
      continue;
    v.push_back(x);
  }
  vector<int> v2;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    if (x > k)
      continue;
    v2.push_back(x);
  }

  if (k / 2 > n || k / 2 > m) {
    no;
    return;
  }
  sort(v.begin(), v.end());
  sort(v2.begin(), v2.end());

  _print(v);
  _print(v2);

  // int pick = k / 2;
  // vector<int> arr1;
  // for (int i = 0; i < pick; i++) {
  //   arr1.push_back(v[i]);
  // }
  // vector<int> arr2;
  // for (int i = 0; i < pick; i++) {
  //   arr2.push_back(v2[i]);
  // }
  //
  // unordered_map<int, bool> u;
  // for (int i = 1; i <= k; i++) {
  //   u[i] = false;
  // }
  // _print(arr1);
  // _print(arr2);
  // vector<int> merged(k);
  // mergeSortedArrays(arr1, pick, arr2, pick, merged);
  //
  // _print(merged);
  //
  // for (int i = 0; i < k; i++) {
  //   u[merged[i]] = true;
  // }
  //
  // for (auto it : u) {
  //   if (!it.second) {
  //     no;
  //     return;
  //   }
  // }
  //
  // yes;
}

int main() {
  FAST_IO;
  int TC = 1;
  cin >> TC;
  while (TC--)
    solve();
}
