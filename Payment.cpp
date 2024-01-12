#include "Payment.h"

Payment::Payment()
{
}

Payment::~Payment()
{
}

void Payment::bill_payment(){

int prev, current, units;
	float price, vat, net_price; 
	bool is_domestic,is_industrial;
	int meter_number;
	
	cout << "Enter Meter Number: " <<endl;
	cin >> meter_number;
	
	cout << "Enter previous meter reading: " <<endl;
	cin >> prev;
	
	cout << "Enter current meter reading: " <<endl;
	cin >> current;
	
	cout << "Enter current meter reading: " <<endl;
	
	units = current - prev;
	
	cout << "Enter a corresponding value to chose metal type: " <<endl;
				cout << "1 - Domestic meter type " << endl << "2 - Industrail meter type " <<endl;
				int type; 
				cin >> type; 
				if (type == 1){
					is_domestic = true;
					is_industrial = false; 
					
				}
				else if (type == 2){
					is_industrial = true;
					is_domestic = false;
				
				};
	
//	computing bill based on the numbe of units consumped and the deduction of tax
	
//	computation based on domestic use
	if (is_domestic == 1){
		if (units <= 110){
			price = units * 50;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		else if (units >= 111 && units <= 400){
			price = units * 79;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		else if (units >= 401 && units <= 800){
			price = units * 94;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		else if (units >= 801 && units <= 2000 || units > 2000){
			price = units * 99;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		
	}
	
//	calculating bill payment for insdustrial consumption

	else if (is_industrial == 1){
		if (units <= 110){
			price = units * 84;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		
		else if (units >= 111 && units <= 400){
			price = units * 92;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
		else if (units >= 401 && units <= 1000 || units >1000){
			price = units * 99;
			vat = price * (19.25/100);
			net_price = price + vat;
			
		}
	}
	
//	generating invoice

//	getting the date 
	time_t now = time(0);
	char* dt = ctime(&now);
	
	
	
	invoice.meter_number = meter_number;
	invoice.date = dt;
	invoice.units_consumed = units;
	invoice.price = price;
	invoice.vat = vat;
	invoice.net_price = net_price + invoice.meter_fee;
//	invoices.push_back(invoice);
	
	
	cout << "----------------------"<<endl;
	cout << "Your invoce "<<endl;
	cout << "Date: " << dt;
	cout <<"Meter Number: " << meter_number <<endl;
	cout <<"Previous Units: " << prev <<" units"<<endl;
	cout <<"Current Units: " << current <<" units"<<endl;
	cout << "Units " << units <<" units"<<endl;
	cout << "Price " << price <<" CFAF"<<endl;
	cout << "Meter Rentage " << 500 <<" CFAF"<<endl;
	cout << "VAT " << vat <<" CFAF"<<endl;
	cout << "Net Price " << net_price + 500 <<" CFAF"<<endl;
	cout << "----------------------"<<endl;
	
	
//	generating a payment method 
	
	int Choice, choice, choice_mtn, choice_orange, choice_card;
	
	cout <<"Chose a payment method from below: " <<endl;
	cout <<"1 - MTN Mobile Money" <<endl <<"2 - Orange Money" <<endl <<"3 - Visa Card Payment" <<endl <<"4 - Cancel" <<endl;
	cin >> Choice;
	
//	selecting a payment method based on the user choice
	long contact = 0;
	switch (Choice){
		case 1:
			
			cout <<endl <<endl << "1 - Use my contact"<<endl <<"2 - Use a different contact"<<endl <<"3 - Cancel"<<endl;
			cin >> choice_mtn;
			
			switch(choice_mtn){
				case 1:
					cout << "Dial *126# to confirm payment"<<endl;
					break;
				
				case 2:
					
					cout << "Enter number"<<endl;
					cin >> contact;
					
					if(contact != 0){
						cout << "Dial *126# to confirm payment"<<endl;
					}
					else{
						cout << "Exiting -- Number can't be empty!"<<endl;
					}
					
					break;
					
				case 3:
					cout << "Payment Cancelled"<<endl;
					break;
				default:
					cout << "Exiting -- invalid choice entered"<<endl;
					break;
					
			}
			
			break;
			
		case 2:
			cout << "1 - Use my contact"<<endl <<"2 - Use a different contact"<<endl <<"3 - Cancel"<<endl;
			cin >> choice_orange;
			
			switch(choice_orange){
				case 1:
					cout << "Dial #150# to confirm payment"<<endl;
					break;
				
				case 2:
					cout << "Enter number"<<endl;
					cin >> contact;
					
					if(contact != 0){
						cout << "Dial #150# to confirm payment"<<endl;
						break;
					}
					else{
						cout << "Exiting -- Number can't be empty!"<<endl;
					}
					break;
				case 3:
					cout << "Payment Cancelled"<<endl;
					break;
				
				default:
					cout << "Exiting -- invalid choice entered"<<endl;
					break;
					
			}
			break;
			
			case 3:
				cout << "1 - Master Card"<<endl <<"2 - Visa Card"<<endl <<"2 - Cancel" <<endl;
				cin >> choice_card;
			
				switch(choice_card){
					case 1:
						
						cout << "Enter Master Card Number" <<endl;
						cin >> contact;
						
						if(contact != 0){
							cout << "Confirm Payment"<<endl;
							break;
						}
						else{
							cout << "Exiting -- Card Number can't be empty!"<<endl;
						}
						break;
					
					case 2:
						
						cout << "Enter Visa Card Number"<<endl;
						cin >> contact;
						
						if(contact != 0){
							cout << "Confirm Payment";
							break;
						}
						else{
							cout << "Exiting -- Card Number can't be empty!"<<endl;
						}
						break;
						
					case 3:
						break;
					
					default:
						cout << "Exiting -- invalid choice entered"<<endl;
						break;
						
				}
				
				break;
			
		case 4:
			cout << "Payment canceled";
			break;
		default:
					cout << "Exiting -- invalid choice entered" <<endl;
					break;
	}
		
	

	
	
	

	

};
	
