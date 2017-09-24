#include "Company.h"
#include <iostream>
#include <iomanip>
using namespace std;

Company::Company(){
	
	
}

int Company::introMessage(){
		
		
		cout << "Enter product number (1-5) (0 to stop): ";
		cin >> answer;
		
		return answer;
		
}

double Company::Calculate(double x, double y){
	qty = x;
	total = y;
	double subtotal;
	
	if(qty > 10 && qty <= 20){
		
		subtotal = total * .10;
		total = total - subtotal;
		
	}else if(qty > 20){
		subtotal = total * .25;
		total = total - subtotal;
		
	}else{
		return total;
	}
	
	
}

void Company::printTotals(){
	
	
	cout << "\nTotal Sales for the week:\n";
	cout << "---------------------------\n";
	precision();
	cout << "Product 1: " << total << endl;

	
}

void Company::precision(){
	cout << fixed;
	cout << setprecision(2);
}


