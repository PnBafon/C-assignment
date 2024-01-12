#include "Meter.h"

Meter::Meter()
{
}

Meter::~Meter()
{
}

void Meter::setMeterType(){
	while (true){
				
				cout << "Enter a corresponding value to chose metal type: " <<endl;
				cout << "1 - Domestic meter type " << endl << "2 - Industrail meter type " <<endl;
				int type; 
				cin >> type; 
				if (type == 1){
					meter_d.meter_type = "Domestic";
					break;
				}
				else if (type == 2){
					meter_d.meter_type = "Industrial";
					break;
				}
				
			}
}

void Meter::Meter_registration(){
	// generating a random meter number 
	random_device rd;
    mt19937 gen(rd());

    int min = 0;
    int max = 9;
    string meter_number_rand;
    int i;
    
    for (i=0; i<6; i++){
	    uniform_int_distribution<int> dist(min, max);
	    int randomNum = dist(gen);
	    meter_number_rand +=to_string(randomNum);
	}
	
//	getting the date 
	//	getting the date 
	time_t now = time(0);
	char* dt = ctime(&now);
	
	int NIC;
	cout << "Enter National Identification Number (NIC): " <<endl;
	cin >> NIC;
	
	meter_d.NIC = NIC;
	meter_d.meter_number = stoi(meter_number_rand);
	setMeterType();
	meter_d.date_purchase = dt;
	
	meter_details.push_back(meter_d);
	
}

void Meter::view_meter_details(){
	cout << "All Meter Invoices"<<endl;
	cout << "----------------------------"<<endl;
	
		for (size_t i=0; i < meter_details.size(); i++){
		
		cout << "Meter invoice " << i + 1 << endl;
		cout << "User ID number " << meter_details[i].NIC << endl;
		cout <<"Meter number: " <<meter_details[i].meter_number <<endl;
		cout <<"Date purchase: " <<meter_details[i].date_purchase;
		cout <<"Meter type: " <<meter_details[i].meter_type <<endl;
		
	}
	
}
