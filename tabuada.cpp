#include <iostream>
using namespace std;

int main() {
  int num;
  
  cout << "Digite um número para ver sua tabuada: ";
  cin >> num;
  
  cout << "Tabuada do " << num;
  
  for (int i = 1; i <= 10; i++) {
    cout << num << " x " << i << " = " << num * i <<
    endl;
  }
  
  return 0;
}
