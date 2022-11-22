#include <iostream>
using namespace std;
int main() {
    int primo_numero=0;
    int secondo_numero=1;
    int numero;
    cin >> numero;
    int i=3;
    if (numero > 2){
       int risultato;
   while (i++  <= numero){
       risultato = primo_numero + secondo_numero;
       cout << risultato << " ";
       primo_numero = secondo_numero;
       secondo_numero = risultato;
   }else {cout << "errore};
   return 0;
}
