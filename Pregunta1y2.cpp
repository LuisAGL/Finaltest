#include <iostream>
#include <sstream>
#include "console.h"
#include "math.h"

using namespace std;

class PUNTO {
private:
   // Datos miembro de la clase "PUNTO"
   float x=0;
   float y=0;
public:
      // Funciones miembro de la clase "PUNTO"
  PUNTO(float i, float j){
   x = i;
   y = j;
}
    int cuadrante(){
        int NrodeCuad = 4;
        if(x > 0 && y > 0){
             NrodeCuad = 1;
        }
        if(x < 0 && y > 0){
             NrodeCuad = 2;
        }
        if(x < 0 && y < 0){
             NrodeCuad = 3;
        }
        return NrodeCuad;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    float  theta(){
        float P= 3.1416;
        float  AX1 = 0;
        float  AX2 = 0;
        AX1 = y/x;
        AX2 = atan(AX1)*180/P;
        return AX2;
    }
    string toString(){
      string i,j;
      float AX1;
      float AX2;
      AX1=x;
      AX2=y;
      i=to_string(AX1);
      j=to_string(AX2);
      return "(" +i +"," +j+ ")";
    }
    float Euclid(PUNTO A1, PUNTO A2){
        float N1 = A1.getX() - A2.getX();
        float N2 = A1.getY() - A2.getY();
        return sqrtf(N1*N1 + N2*N2);
    }
 };


int main() {
   PUNTO Valor1(4,-5);
   PUNTO A1(10,45);
   PUNTO A2(44,35);
   cout << "El cuadrante es: " << Valor1.cuadrante()<<endl;
   cout << "La abcisa es: " << Valor1.getX()<<endl;
   cout << "La ordenada es: " << Valor1.getY()<<endl;
   cout << "El angulo theta es: " << Valor1.theta()<<endl;
   cout << "El valor del punto es: " << Valor1.toString()<<endl;
   cout << "La distancia Euclidiana entre dos puntos es: " << Valor1.Euclid(A1,A2) <<endl;
   return 0;
}
