#include <iostream>
using namespace std;

int main() {

    //Pre: L’entrada consisteix en quatre enters a1, b1, a2, b2 que representen els intervals [a1,b1] i [a2,b2]. Assumiu a1= b1 i a2= b2.
    //Post: Cal escriure ‘=’ si els intervals són iguals, ‘1’ si el primer es troba dins del segon
    //  (però no són iguals), ‘2’ si el segon es troba dins del primer (però no són iguals), o bé ‘?’
    //  altrament. També, cal escriure “[]” si els intervals no tenen intersecció, o bé “[x,y]” si
    //  aquesta és la seva intersecció no buida.

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
