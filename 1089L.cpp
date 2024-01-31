#include <iostream>
#include <set>
#include <unordered_map>

using namespace std;

int minimumTotalTime(int n, int k, vector<int> &jobs,
                     vector<int> &persuasionTimes) {
  vector<int> jobCounts(k, 0);
  int totalTime = 0;

  // Step 1: Update job counts
  for (int job : jobs) {
    jobCounts[job - 1]++;
  }

  cout << jobCounts.size() << endl;

  // Step 2: Identify unchosen jobs and sort idle idlers
  vector<int> unchosenJobs;
  vector<pair<int, int>> idleIdlers;

  for (int i = 0; i < k; ++i) {
    if (jobCounts[i] == 0) {
      unchosenJobs.push_back(i + 1);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (find(unchosenJobs.begin(), unchosenJobs.end(), jobs[i]) !=
        unchosenJobs.end()) {
      idleIdlers.push_back({persuasionTimes[i], i});
    }
  }

  sort(idleIdlers.begin(), idleIdlers.end());

  // Step 3: Assign idle idlers to unchosen jobs with minimum persuasion time
  for (auto &[persuasionTime, idlerIndex] : idleIdlers) {
    int unchosenJob = unchosenJobs.front();
    unchosenJobs.erase(unchosenJobs.begin());

    totalTime += min(persuasionTime, persuasionTimes[idlerIndex]);
    jobCounts[jobs[idlerIndex] - 1]++;
  }

  return totalTime;
}

void solve() {
  int n, k;
  cin >> n >> k;
  unordered_map<int, int> um;
  vector<int> time;
  vector<int> jobs;
  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    jobs.push_back(y);
    // if (um[y]) {
    //   um[y]++;
    // } else {
    //   um[y] = 1;
    // }
  }

  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    time.push_back(y);
  }

  // if (um.size() == n) {
  //   cout << 0 << endl;
  //   return;
  // }
  int min_time = minimumTotalTime(n, k, jobs, time);
  cout << min_time << endl;
}

int main() {
  solve();
  return 0;
}
