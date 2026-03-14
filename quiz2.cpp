#include <iostream> #NodarChinchaladze
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
int a, b;

cout << "input the value of a" << endl;
cin >> a;
cout << "input the value of b" << endl;
cin >> b;

swap(&a, &b);
cout << "a= " << a << endl;
cout << "b= " << b << endl;

}
