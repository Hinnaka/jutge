#include<iostream>

using namespace std;

int main(){
	int any = 0;
	cin>>any;
	
	//Any de traspàs = any % 4 menys 1800, 1900, etc.
	
	if( any % 400 == 0){
		cout<<"YES"<<endl;
	}
	else if( any % 100 == 0){
		cout<<"NO"<<endl;
	}
	else if( any % 4 == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
}
