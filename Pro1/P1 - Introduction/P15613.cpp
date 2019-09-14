#include<iostream>
using namespace std;

int main(){
	int temp = 0;
	cin>>temp;
	
	if( (temp <= 30) && (temp >= 10) ){
		cout<<"it's ok"<<endl;
	}
	
	else if((temp < 10) && (temp > 0)){
		cout<<"it's cold"<<endl;
	}
	 
	else if((temp <= 0)){
		cout<<"it's cold"<<endl<<"water would freeze"<<endl;
	}
	
	else if((temp > 30) && (temp < 100)){
		cout<<"it's hot"<<endl;
	}
	
	else if(temp >= 100){
		cout<<"it's hot"<<endl<<"water would boil"<<endl;
	}
}
