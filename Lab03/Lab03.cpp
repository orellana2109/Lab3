//	Eddie Orellana
//	September 24, 2017
//	Lab 3
//	Program takes input to calculate totals based on qty and the price for that specified product number
//	Results are displayed right after user input and a tally for the week is taken to display weekly sales
//	for each product when the user exits the loop

#include <iostream>
#include <iomanip>
#include "Company.h"
using namespace std;


int main() {
	
	int productNumber;
		
	Company p;
	productNumber = p.introMessage();
	p.productSwitch(productNumber);
	

	while(productNumber !=0){
			
		productNumber = p.introMessage();
		p.productSwitch(productNumber);
		
	}
		
	p.printTotals();
	cout << endl;

		return 0;
}
