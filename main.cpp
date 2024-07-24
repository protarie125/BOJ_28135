#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

bool Has50(ll x) {
  auto i = 100;
  while (i <= x * 10) {
    if ((x % i) / (i / 100) == 50) {
      return true;
    }

    i *= 10;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  auto ans = ll{1};
  auto now = ll{1};
  while (now < n) {
    if (Has50(now)) {
      ++ans;
    }

    ++now;
    ++ans;
  }
  cout << ans;

  return 0;
}