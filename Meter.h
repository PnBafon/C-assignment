#ifndef METER_H
#define METER_H
//#include <string>
//#include <vector>

using namespace std;

class Meter
{
	private:
		struct Meter_details{
		long NIC;
		int meter_number;
		string meter_type;
		string date_purchase;
		};
		
	Meter_details meter_d;
	vector<Meter_details> meter_details;
		
		
		
		
	public:
		Meter();
		~Meter();
		
	void setMeterType();
	
	void Meter_registration();
	void view_meter_details();
	
};

#endif
