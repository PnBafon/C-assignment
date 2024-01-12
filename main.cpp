#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <random>
#include "Customer.cpp"
#include "Meter.cpp"
#include "Menu.cpp"
#include "Payment.cpp"

using namespace std;

//	getting the date 
	time_t now = time(0);
	char* dt = ctime(&now);
	
// creating an array of customers 
	vector<Customer> customers;


int main() {
	

//    Menu m1;
//    m1.General_menu();

	Payment p1;
	p1.bill_payment();
    
//    Customer customer;
	
	return 0;
}

	

