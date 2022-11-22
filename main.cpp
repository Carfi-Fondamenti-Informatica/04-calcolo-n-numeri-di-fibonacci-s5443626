#include <iostream>
using namespace std;
int main() {
    int primo_numero=0;
    int secondo_numero=1;
    int n;
    cin >> n;
    int i=3;
    if (n>= 2){
       int risultato;
   while (i++  <= numero){
       risultato = primo_numero + secondo_numero;
       cout << risultato <<endl;
       primo_numero = secondo_numero;
       secondo_numero = risultato;
   }else {cout << "errore" << endl};
   return 0;
}
