// Example program
// Лесковец С.С. Пи-241 вариант 10
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

  double a = 5.54;
  double b = 3.93;
  double y = 1.45;
  float K;
  float n_1;
  float n_2;
  float n_3;
  float c;
  int T_1 = 288;
  int T_2 = 675;

  K = (y - 1) / y;
  n_1 = 1 - (pow((1 / b), K));
  n_2 = (T_2 - T_1) / (T_2 + ((T_2 - T_1) / ((y - 1) * log(a))));
  n_3 = 1 - K * (log(b) / (pow(b, K) - 1));

  cout << "K = " << K << endl;
  cout << "n1 = " << n_1 << endl;
  cout << "n2 = " << n_2 << endl;
  cout << "n3 = " << n_3 << endl;

  return 0;
}