
#include <iostream>
using namespace std;

void sumOfTwo(int a, int b);

int main() {
    int a, b;
    sumOfTwo(a, b);
    return 0;
}
void sumOfTwo(int a, int b) {

  cout << "enter a first number" << endl;
  cin >> a;
  cout << "enter a second number" << endl;
  cin >> b;
  cout << a + b << endl;

}

