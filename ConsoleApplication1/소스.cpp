#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <random>
#include <string.h>
#include <cctype>
using namespace std;

int main() {
    //1������
    char str = 0;
    int count = 0;
    int num = 0;
    cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;
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
    cout << "����: " << count << endl;
    cout << "����: " << num << endl;

    //2������
    /*
    srand(time(NULL));
    int a = rand() % 9;
    int b = rand() % 9;
    int c = 0;
    int d = 0;
    char add = 0;
    cout << "��� ������ �ڵ����� �����մϴ�." << endl;
    cout << a <<"  "<< b << endl;
    cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
    cin >> add;
    cout << "��� �Է��ϱ�" << endl;
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
       cout << "�¾ҽ��ϴ�" << endl;
    else
       cout << "Ʋ�Ƚ��ϴ�" << endl;
    */

    //3�� ����
    /*
    int N = 0;
    int M = 0;
    int sum = 0;
    cin >> N >> M;
    cout << "N�� ���� " << N << ", " << "M�� ���� " << M << endl;
    for (int i = 0; i < N; i++) {
       if ((i + 1) % M == 0)
          sum = sum + (i + 1);
    }
    cout << sum << endl;
    */

    //4�� ����
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
       cout << "ERROR- 0 �Ǵ� �����Դϴ�." << endl;
    */

    //5�� ����
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
      cout << "(x,y)��ǥ: ";
      cin >> x >> y;
      board[x][y] = (k % 2 == 0) ? 'x' : 'o';

      for (i = 0; i < 3; i++) {
         cout << "---l---l---" << endl;
         cout << board[i][0] << "  l " << board[i][1] << " l  " << board[i][2] << endl;
      }
      cout << "---l---l---" << endl;

      }
   */

   //6�� ����
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