#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 2) {
    cout << "Please input numbers to find average.\n";
    return 1;
  }
  double sum = 0;
  int n = argc - 1;
  for (int i = 1; i <= n; i++) {
    sum += atof(argv[i]);
  }
  cout << "---------------------------------\n";
  cout << "Average of " << n << " numbers = " << sum / n << '\n';
  cout << "---------------------------------\n";
  return 0;
}
