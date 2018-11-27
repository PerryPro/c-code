#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
  int n;
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++) {
    int jug = 0;
    int eq = 1;                 // 1在等号左边，-1在右边
    char un = { 0 };
    int sign = 1;               // 1=+ -1=-
    int xnum = 0;
    int xun = 0;
    int x = 0;
    while (1) {
      int a = getchar();
      if (a >= 'a' && a <= 'z') {
        un = (char)a;

        if (eq == -1) {
          jug = 1;
        }
        if (x != 0) {
          xun += eq * sign * x;
          x = 0;
          goto p1;
        }
        if (x == 0) {
          xun += eq * sign;
        }
      }
      if (a == '+' || a == '=' || a == '-' || a == '\n') {
        if (x != 0) {
          xnum += eq * sign * x;
          x = 0;
        }
      }
    p1:
      if (a == '\n') {
        break;
      } else if (a == '=') {
        eq = -1;
        sign = 1;
        x = 0;
      } else if (a == '-') {
        sign = -1;
        x = 0;
      } else if (a == '+') {
        sign = 1;
        x = 0;
      } else if (a >= '0' && a <= '9') {
        x = x * 10 + (a - '0');
      }
    }
    double y;
    if (xnum != 0) {
      y = (-1.0) * xnum / xun;
    } else {
      y = 0.000000;
    }
    printf("%c=%.6lf\n", un, y);

  }

}
