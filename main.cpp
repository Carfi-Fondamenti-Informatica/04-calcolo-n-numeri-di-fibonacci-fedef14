#include <iostream>
using namespace std;

int main() {
   int a = 1;
   int b = 1;
   int c = 0;
   int n = 0;
   cin >> n;
   
   if(n<2){
   cout << "errore" << endl;
   } else {
      for(int i=0;i<n;i++){
      cout << a << endl;
         c = a+b;
         a = b;
         b = c;
      }
   }
   return 0;
}
