#include <iostream>
using namespace std;

int main() {
  int numero;
  
  cout << "=== Verificação de Par ou Ímpar ===" <<
  endl;
  
  for (int i = 1; i <= 10; i++) {
    cout << "Digite o " << i << "º número: ";
    cin >> numero;
    
    if (numero % 2 == 0) {
      cout << numero << " é PAR." << endl;
    } else {
      cout << numero << " é ÍMPAR." << endl;
    }
    
  }
  
  return 0;
}
