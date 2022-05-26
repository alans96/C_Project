// <tipo de retorno> <nome> (<argumentos>){
// <escopo>
//}

#include  <iostream>
 void PrintTest(int x){ // Void é vazio, não retorna nada apenas faz p print na tela
     std::cout << x << " foi o teste \n";

 }

 int main(){
     int x = 10;

     PrintTest(x);
     PrintTest(20);
     PrintTest(30);
 }