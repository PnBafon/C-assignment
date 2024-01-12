#ifndef PAYMENT-H
#define PAYMENT_H
#include <string>

class Payment
{
	private:
		string date;
		int units;
		double price;
		
		struct Invoice {
			int meter_number;
			string date;
			int units_consumed;
			double price; 
			double vat;
			double net_price;
			int meter_fee = 500;
			
		} invoice;
		
	public:
		Payment();
		~Payment();
		void bill_payment();
		void review_invoice();
};

#endif
