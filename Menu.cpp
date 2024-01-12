#include "Menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::General_menu(){
	while (true){
		
	
	int choice;
	cout <<"------------------------------------------------" <<endl;
	cout <<"**  Welcome to ENEO Bill Payment System  ***"<<endl<<endl<<endl;
	cout <<"Select any entery that matches your needs"<<endl;
	
	cout <<"1 - Login "<<endl <<"2 - Create Account"<<endl<<"3 - Pay bills"<<endl<<"4 - File Complain"<<endl;
	cin >> choice;
	
	if (choice == 1){
		continue;
	}
	else if (choice == 2){
		Customer customer(true);
		continue;
	}
	else if (choice == 3){
		Customer customer(false);
		
		customer.bill_payment();
		continue;
	}
	else if (choice == 4){
		Customer customer(true);
		customer.file_complain();
		continue;
	}
	else if (choice == 99){
		break;
	}
	else{
		cout <<endl<<endl <<"Please Enter a valid input";
	}
				
		
	}
	
}