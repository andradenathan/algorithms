#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float n1, n2, n3, n4, media = 0, media_final = 0, nota_exame = 0;

  cin >> n1 >> n2 >> n3 >> n4;
  media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10; 
  
  if(media >= 5.0 && media <= 7.0) {
    cin >> nota_exame;
  }
 
  cout.precision(1);
  cout << "Media: " << fixed << media << endl;

  if(media >= 5.0 && media <= 6.9) {
    cout << "Aluno em exame." << endl;
    media_final = (media+nota_exame)/2.0;
    cout << "Nota do exame: " << nota_exame << endl;
    if(media_final >= 5.0) cout << "Aluno aprovado." << endl 
      << "Media final: " << media_final << endl;
    else cout << "Aluno reprovado." << endl;
  }

  else if(media >= 7.0) cout << "Aluno aprovado." << endl;
  else if(media < 5.0) cout << "Aluno reprovado." << endl;
  
  return 0;
}
