#include<iostream>

using namespace std;

int main(){
	float numero  = 0;
	int inferior,superior, entero = 0;
	cin>>numero;
	
	superior = numero + 1;
	inferior = numero;
	
	if(numero >= 0.5){
		entero = numero + 0.5;
	}
	else if(numero < 0.5){
		entero = numero - 0.5;
	}
	else if(numero = 0.0){
		numero = numero;
	}
	
	
	
	cout<<inferior<<" "<<superior<<" "<<entero<<endl;
	
	
	
	
}
