#include<iostream>
using namespace std;

int main(){
	int anys, dies, hores, minuts, segons1, segons2 = 0;
	cin>>anys>>dies>>hores>>minuts>>segons1;
	
	segons2 = anys * 31536000  + dies * 86400 + hores * 3600 + minuts * 60 + segons1;
	cout<<segons2<<endl;
	
	
}
