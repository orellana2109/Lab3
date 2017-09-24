#include <iostream>
#include <iomanip>
#include "Company.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int productNumber;
	
	Company p;
	productNumber = p.introMessage();
	

	while(productNumber !=0){
			
		switch(productNumber){
			case 1: 
				cout << "Enter quantity sold: ";
				double qty;
				double total;
				double grandTotal;
									
				cin >> qty;
				total = qty * 2.98;
							
				grandTotal = p.Calculate(qty, total);
				p.precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;							
			break;
			
			case 2: 
				cout << "Enter quantity sold: ";
				double qty;
				double total;
				double grandTotal;
									
				cin >> qty;
				total = qty * 4.50;
							
				grandTotal = p.Calculate(qty, total);
				p.precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;				
			break;
			
			case 3: 
				cout << "Enter quantity sold: ";
				double qty;
				double total;
				double grandTotal;
									
				cin >> qty;
				total = qty * 9.98;
							
				grandTotal = p.Calculate(qty, total);
				p.precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
			
			case 4: cout << "Enter quantity sold: ";
				double qty;
				double total;
				double grandTotal;
									
				cin >> qty;
				total = qty * 4.49;
							
				grandTotal = p.Calculate(qty, total);
				p.precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
			
			case 5: 
				cout << "Enter quantity sold: ";
				double qty;
				double total;
				double grandTotal;
									
				cin >> qty;
				total = qty * 6.87;
							
				grandTotal = p.Calculate(qty, total);
				p.precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
					
			
			default:
				cout << "Invalid product number. Please try again"
				break;
		}
		
		productNumber = p.introMessage();
		
	}
		
	p.printTotals();
	cout << endl;

		
		return 0;
}
