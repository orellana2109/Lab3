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
				
		
	private:
		double qty;
		double total;
		int answer;
		
			
};

#endif
