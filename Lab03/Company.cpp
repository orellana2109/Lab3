#include "Company.h"
#include <iostream>
#include <iomanip>
using namespace std;

//constructor
Company::Company(){
	
	
}

//prints to screen instructions to the user and returns the answer
int Company::introMessage(){
		
		
		cout << "Enter product number (1-5) (0 to stop): ";
		cin >> answer;
		
		return answer;
		
}

//calculates a discount if applicable and returns the total
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

//print the weekly totals for each product
void Company::printTotals(){
	
	
	cout << "\nTotal Sales for the week:\n";
	cout << "---------------------------\n";
	precision();
	cout << "Product 1: $" << weeklyTotal1 << endl;
	cout << "Product 2: $" << weeklyTotal2 << endl;
	cout << "Product 3: $" << weeklyTotal3 << endl;
	cout << "Product 4: $" << weeklyTotal4 << endl;
	cout << "Product 5: $" << weeklyTotal5 << endl;

	
}

//switch statement that calls Calculate() to figure a grand total with quantity entered
//also displays the results after user inputs the qty and product number
void Company::productSwitch(int x){
	
	productNumber = x;
	
		switch(productNumber){
			case 1: 
				cout << "Enter quantity sold: ";																	
				cin >> qty;
				total = qty * 2.98;
							
				grandTotal = Calculate(qty, total);
				weeklyTotal1 += grandTotal;
				precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;							
			break;
			
			case 2: 
				cout << "Enter quantity sold: ";								
				cin >> qty;
				total = qty * 4.50;
							
				grandTotal = Calculate(qty, total);
				weeklyTotal2 += grandTotal;
				precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;				
			break;
			
			case 3: 
				cout << "Enter quantity sold: ";								
				cin >> qty;
				total = qty * 9.98;
							
				grandTotal = Calculate(qty, total);
				weeklyTotal3 += grandTotal;
				precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
			
			case 4: cout << "Enter quantity sold: ";								
				cin >> qty;
				total = qty * 4.49;
							
				grandTotal = Calculate(qty, total);
				weeklyTotal4 += grandTotal;
				precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
			
			case 5: 
				cout << "Enter quantity sold: ";									
				cin >> qty;
				total = qty * 6.87;
							
				grandTotal = Calculate(qty, total);
				weeklyTotal5 += grandTotal;
				precision();
				cout << "The sales for this product 1 is " << grandTotal << endl << endl;
			break;
					
			
			default:
				cout << "Invalid product number. Please try again\n\n";
				break;
		}
		
	
	
	
	
	
}

//formats the output sales into two decimals
void Company::precision(){
	cout << fixed;
	cout << setprecision(2);
}


