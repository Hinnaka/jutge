#include <iostream>
using namespace std;

int main() {

    //Pre: L�entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1= b1 i a2= b2.
    //Post: Cal escriure �=� si els intervals s�n iguals, �1� si el primer es troba dins del segon
    //  (per� no s�n iguals), �2� si el segon es troba dins del primer (per� no s�n iguals), o b� �?�
    //  altrament. Tamb�, cal escriure �[]� si els intervals no tenen intersecci�, o b� �[x,y]� si
    //  aquesta �s la seva intersecci� no buida.

    int a1, b1, a2, b2;


    cin>>a1>>b1>>a2>>b2;

    if (b1 < a2 || a1 > b2) {
        cout<<"? , []"<<endl;
    } else {
        int maxA, maxB;
        char signeFinal;

        if(a1 >= a2) maxA = a1;
        else maxA = a2;

        if(b1 >= b2 ) maxB = b2;
        else maxB = b1;

        if(a1==a2 and b1==b2) {
            signeFinal = '=';
        } else if(a1<=a2 and b1>=b2){
            signeFinal = '2';
        } else if (a1>=a2 and b1<=b2) {
            signeFinal = '1';
        } else {
            signeFinal = '?';
        }

        cout<<signeFinal<<" , "<<"["<<maxA<<","<<maxB<<"]"<<endl;

    }

    return 0;
}
