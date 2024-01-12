#include "Customer.h"

Customer::Customer(bool skip)

{
	if (skip != true){
		
	} else{
		
	string fname, lname,email,address;
	long NIC, contact;
	
	cout <<"Fill in the details below to create your account "<<endl;
	
	cout <<"Enter first name: "<<endl;
	cin >> fname;
	
	cout <<"Enter last name: "<<endl;
	cin >> lname;
	
	cout <<"Enter email: "<<endl;
	cin >> email;
	
	cout <<"Enter address: "<<endl;
	cin >> address;
	
	cout <<"Enter NIC: "<<endl;
	cin >> NIC;
	
	cout <<"Enter contact: "<<endl;
	cin >> contact;
	
	first_name = fname;
	last_name = lname;
	email = email;
	address = address;
	NIC = NIC;
	contact = contact;
}
	
	
	
	
	
}

//Customer::~Customer()
//{
//	cout << "Destroying customer instnace";
//}


void Customer::setMeterType(){
			while (true){
				
				cout << "Enter a corresponding value to chose metal type: " <<endl;
				cout << "1 - Domestic meter type " << endl << "2 - Industrail meter type " <<endl;
				int type; 
				cin >> type; 
				if (type == 1){
					is_domestic = true;
					is_industrial = false; 
					break;
				}
				else if (type == 2){
					is_industrial = true;
					is_domestic = false;
					break;
				};
				
			}
		}
			
		
		

void Customer::bill_payment(){
	
}


void Customer::review_invoices(){
	
	for (size_t i=0; i < invoices.size(); i++){
		cout <<"------------------------------------------------"<<endl;
		cout << "Invoice " << i + 1 << endl;
		cout <<"Meter number: " <<invoices[i].meter_number <<endl;
		cout <<"Date: " <<invoices[i].date;
		cout <<"Units consumed: " <<invoices[i].units_consumed <<endl;
		cout <<"Price: " <<invoices[i].price <<endl;
		cout <<"VAT: " <<invoices[i].vat <<" CFAF" <<endl;
		cout <<"Meter fee: " <<invoices[i].meter_fee <<" CFAF" <<endl;
		cout <<"Net Price: " <<invoices[i].net_price <<" CFAF" <<endl;
		cout <<"------------------------------------------------"<<endl<<endl;
		
	}	
}



void Customer::file_complain(){
	int choice;
	string reply = "We have received your complain, will get to you as soon as possible";
	
	cout << "Welcome to Eneo Help center " <<endl;
	cout << "Select a number that meets your needs" <<endl;
	cout << "1 - Meter issues "<<endl << "2 - Maintenance " <<endl << "3 - Faulty bills" <<endl <<"4 - Contact admin" <<endl;
	cin >> choice;
	switch (choice){
		case 1:
			cout << reply;
			break;
			
		case 2:
			cout << reply;
			break;
		
		case 3:
			break;
			
		case 4:
			cout << reply;
			break;
			
		default:
			cout <<"Invalid choice entered" <<endl;
			break;
	}
}

