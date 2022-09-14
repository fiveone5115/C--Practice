#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <random>
#include <string.h>
#include <cctype>
using namespace std;

int main() {
    //1번문제
    char str = 0;
    int count = 0;
    int num = 0;
    cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
    while (!cin.eof()) {
        cin >> str;
        switch (str) {
        case 'a':
            count++;
            break;
        case 'e':
            count++;
            break;
        case 'i':
            count++;
            break;
        case 'o':
            count++;
            break;
        case 'u':
            count++;
            break;
        default:
            if (isupper(str)) {
                num++;
                break;
            }
            else
                break;
        }
    }
    cout << "모음: " << count << endl;
    cout << "자음: " << num << endl;

    //2번문제
    /*
    srand(time(NULL));
    int a = rand() % 9;
    int b = rand() % 9;
    int c = 0;
    int d = 0;
    char add = 0;
    cout << "산수 문제를 자동으로 출제합니다." << endl;
    cout << a <<"  "<< b << endl;
    cout << "연산자 입력하기(+,-,*,/)" << endl;
    cin >> add;
    cout << "결과 입력하기" << endl;
    cin >> d;

    switch (add)
    {
    case '+':
       c = a + b;
       break;
    case '-':
       c = a - b;
       break;
    case '*':
       c = a * b;
       break;
    case'/':
       c = a / b;
       break;
    }
    if (d == c)
       cout << "맞았습니다" << endl;
    else
       cout << "틀렸습니다" << endl;
    */

    //3번 문제
    /*
    int N = 0;
    int M = 0;
    int sum = 0;
    cin >> N >> M;
    cout << "N의 값은 " << N << ", " << "M의 값은 " << M << endl;
    for (int i = 0; i < N; i++) {
       if ((i + 1) % M == 0)
          sum = sum + (i + 1);
    }
    cout << sum << endl;
    */

    //4번 문제
    /*
    int sum = 1;
    int a = 0;
    cin >> a;
    if (a > 0) {
       cout << "1";
       for (int i = 2; i < a; i++) {
          if (a % i == 0) {
             cout << " + " << i;
             sum = sum + i;
          }
       }
       cout << " = " << sum << endl;
    }
    else
       cout << "ERROR- 0 또는 음수입니다." << endl;
    */

    //5번 문제
    /*
    char board[3][3];
   int x, y, k, i;

   for (x = 0; x < 3; x++)
      for (y = 0; y < 3; y++)
         board[x][y] = '  ';
   for (x = 0; x < 3; x++)
      for (y = 0; y < 3; y++)
         board[x][y] = 0;

   for (k = 0; k < 9; k++) {
      cout << "(x,y)좌표: ";
      cin >> x >> y;
      board[x][y] = (k % 2 == 0) ? 'x' : 'o';

      for (i = 0; i < 3; i++) {
         cout << "---l---l---" << endl;
         cout << board[i][0] << "  l " << board[i][1] << " l  " << board[i][2] << endl;
      }
      cout << "---l---l---" << endl;

      }
   */

   //6번 문제
   /*
   bool board[10][10] = { 0 };
  srand(time(NULL));

  for (int i = 0; i < 10; i++)
     for (int k = 0; k < 10; k++)
        if ((rand() & 100) < 30)
           board[i][k] = true;

  for (int i = 0; i < 10; i++) {
     for (int k = 0; k < 10; k++) {
        if (board[i][k])
           cout << " # ";
        else
           cout << " . ";
     }
     cout << endl;
  }
  */
}