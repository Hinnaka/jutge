#include<iostream>
using namespace std;

int main(){
	int a, b, d, r = 0;
	cin>>a>>b;
	
	d = a / b;
	r = a - (d * b);
	
	cout<<d<<" "<<r<<endl;
	
}
