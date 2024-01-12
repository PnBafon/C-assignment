#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<vector>
#include "Profile.h"


class Customer: public Profile {
	private:
		int meter_number;
		bool is_domestic;
		bool is_industrial;
		
		
		struct Invoice {
			int meter_number;
			string date;
			int units_consumed;
			double price; 
			double vat;
			double net_price;
			int meter_fee = 500;
			
		};
		Invoice invoice;
		
		vector<Invoice> invoices;
		
	public:
		Customer(bool skip);
		
		
		void setFname(string fname){
			first_name = fname;
		}
		
		void setLname(string lname){
			last_name = lname;
		}
		
		void setAddress(string adr){
			address = adr;
		}
		
		void setNIC(string NIC){
			NIC = NIC;
		}
		
		void setEmail(string email){
			email = email;
		}
		
		void setMeterType();
		
		
		void bill_payment();
		void review_invoices();
		meter_registration();
		void file_complain();
		
};

#endif
