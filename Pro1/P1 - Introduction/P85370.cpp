#include<iostream>

using namespace std;

main(){
	cout.setf(ios::fixed);
    cout.precision(4);
	
	float capital, interes, temps, dinersfinals = 0;
	string tipus;
	
	cin>>capital>>interes>>temps>>tipus;
	
	if(tipus == "simple"){
		dinersfinals = (capital * (interes / 100) * temps) + capital;
		cout<<dinersfinals<<endl;
	}else if(tipus == "compost"){
		
		while(temps > 0){
			interes = interes / 100;
			dinersfinals= ((interes * capital) + capital);
			capital = dinersfinals;
			temps = temps - 1;
		}
		
	cout<<dinersfinals;	
		
		
	}
	
	
	
	
}
