#include<iostream>
#include<algorithm>
#include<ctime>

using namespace std;

void t_main() {
  short n, a[1000], x, num,i;
  cin >> n;

  for (i = 0; i < n; ++i)
    cin >> a[i];

  sort(a, a + n);

  num = a[0];

  cin >> x;

  size_t start_time = clock();

  short mid = (n - 1) / 2;

  if (a[mid] == x) {
    cout << a[mid];
    return;
  }

  if (a[mid] < x) {
    for (i = mid; i < n; ++i) {
      if (abs(a[i] - x) < abs(num - x) || abs(a[i] - x) == abs(num - x) && a[i] < num)
        num = a[i];
    }
  }

  else {
    for (i = 0; i < mid; ++i) {
      if (abs(a[i] - x) < abs(num - x) || abs(a[i] - x) == abs(num - x) && a[i] < num)
        num = a[i];
    }
  }
  cout << num;

  size_t end_time = clock();

  cerr << '\n' << (end_time - start_time + 0.0) / CLOCKS_PER_SEC;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  short t = 1; while (t--) t_main();
  return 0;
}

Boburmirzo Uchkunov, [14.10.21 17:20]
#include<iostream>
#include<algorithm>
#include<ctime>

using namespace std;

void t_main() {
  short n, a[1000], x, num,i;
  cin >> n;

  for (i = 0; i < n; ++i)
    cin >> a[i];

  sort(a, a + n);

  num = a[0];

  cin >> x;

  size_t start_time = clock();

  short mid = (n - 1) / 2;

  if (a[mid] == x) {
    cout << a[mid];
    return;
  }

  if (a[mid] < x) {
    for (i = mid; i < n; ++i)
      if (abs(a[i] - x) < abs(num - x))
        num = a[i];
  }

  else {
    for (i = 0; i < mid; ++i)
      if (abs(a[i] - x) < abs(num - x))
        num = a[i];
  }
  cout << num;

  size_t end_time = clock();

  cerr << '\n' << (end_time - start_time + 0.0) / CLOCKS_PER_SEC;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  short t = 1; while (t--) t_main();
  return 0;
}