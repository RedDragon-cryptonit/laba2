// Example program
// Лесковец С.С. Пи-241 вариант 10
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

  double a = 5.54;
  double b = 3.93;
  double y = 1.45;
  float K;
  float n1;
  float n2;
  float n3;
  float c;
  int T1 = 288;
  int T2 = 675;

  K = (y - 1) / y;
  n1 = 1 - (pow((1 / b), K));
  n2 = (T_2 - T_1) / (T_2 + ((T_2 - T_1) / ((y - 1) * log(a))));
  n3 = 1 - K * (log(b) / (pow(b, K) - 1));

  cout << "K = " << K << endl;
  cout << "n1 = " << n1 << endl;
  cout << "n2 = " << n2 << endl;
  cout << "n3 = " << n3 << endl;

  return 0;
}