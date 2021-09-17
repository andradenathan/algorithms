#include <iostream>

using namespace std;

int main() {
  int n, i;

  cin >> n >> i;

  if(i % n == 0 || n % i == 0) {
    cout << "Sao Multiplos" << endl;
  } else {
    cout << "Nao sao Multiplos" << endl;
  }
  
  return 0;
}