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

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  string out;

  unordered_map<char, int> vow = {
      {'a', 1},
      {'e', 1},
  };

  unordered_map<char, int> cons = {
      {'b', 1},
      {'c', 1},
      {'d', 1},
  };

  int i = 0;
  while (i < s.size()) {
    if (i == n - 2) {
      char cvc[3] = {s[i], s[i + 1], '\0'};
      out += cvc;
      out += '.';
      i += 2;
      continue;
    }

    if (i == n - 3) {
      char cvc[4] = {s[i], s[i + 1], s[i + 2], '\0'};
      out += cvc;
      out += '.';
      i += 3;
      continue;
    }

    if (cons[s[i]] && vow[s[i + 1]] && cons[s[i + 2]] && i != n - 1 &&
        cons[s[i + 3]]) {
      char cvc[4] = {s[i], s[i + 1], s[i + 2], '\0'};
      out += cvc;
      out += '.';
      i += 3;
      continue;
    } else {
      char cvc[3] = {s[i], s[i + 1], '\0'};
      out += cvc;
      out += '.';
      i += 2;
      continue;
    }
  }

  out.resize(out.size() - 1);

  cout << out << endl;
}

int main() {
  FAST_IO;
  int TC = 1;
  cin >> TC;
  while (TC--)
    solve();
}