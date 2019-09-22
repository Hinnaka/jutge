#include<iostream>

using namespace std;

int main(){
	char lletra;
	cin>>lletra;

	if( lletra >= 'A' and lletra <= 'Z' ) cout<<"majuscula";
	else cout<<"minuscula";
		 cout<<endl;
	if( lletra == 'A' or lletra == 'E' or lletra == 'I' or lletra == 'O' or lletra == 'U' or lletra == 'a' or lletra == 'e' or lletra == 'i' or lletra == 'o' or lletra == 'u' ) cout<<"vocal"<<endl;
	else cout<<"consonant"<<endl;

	
}
