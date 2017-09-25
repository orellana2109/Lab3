#ifndef COMPANY_H
#define COMPANY_H

class Company
{
	public:
		Company();
		void printTotals();
		double Calculate(double, double);
		void precision();
		int introMessage();
		void productSwitch(int);
				
		
	private:
		double qty;
		double total;
		double grandTotal;
		double weeklyTotal1;
		double weeklyTotal2;
		double weeklyTotal3;
		double weeklyTotal4;
		double weeklyTotal5;
		
		int answer;
		int productNumber;
			
};

#endif
