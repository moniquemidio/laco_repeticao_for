#include <iostream>
using namespace std;

int main() {

  int num;

  cout << "=== Verificação de Intervalo [10, 20] ===" << endl;

  for (int i = 1; i <= 5; i++) {
    cout << "Digite o " << i << "º número: ";
    cin >> num;

    if (num >= 10 && num <= 20) {
      cout << "O número " << num << " está dentro do intervalo [10, 20]." << endl;
    } else {
      cout << "O número " << num << " está fora do intervalo [10, 20]." << endl;
    }
  }
  
  return 0;
}
