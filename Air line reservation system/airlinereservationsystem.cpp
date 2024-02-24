// Airline reservation system
#include <iostream>
#include <string.h>
using namespace std;
		//Program for an airline reservation system 
int main() {

// declaration and initialization
	int first_class= 0;
	int economic_class=30;
	string name[100];
	int age[100];
	char sex[100];
	string passport[100];
	int   main_choice;
	int sub_choice;
	char yes_no;
        int idx;
	// do- while loop for continues program
	do {
		system("color F1");// to make background color white and text color blue
		cout<<endl;
//main page option

		cout<<"\t*********************************************************************************************"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;;
		cout<<"\t*                               Airline Reservation System                                  *"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;
		cout<<"\t*  Book a flight------------------------------------------------------------------------[1] *"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;
		cout<<"\t*  Search for attendance----------------------------------------------------------------[2] *"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;
		cout<<"\t*  List  all passengers-----------------------------------------------------------------[3] *"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;
		cout<<"\t*  Exit---------------------------------------------------------------------------------[4] *"<<endl;
		cout<<"\t*___________________________________________________________________________________________*"<<endl;
		cout<<"\t*********************************************************************************************"<<endl;
		cout<<"   Enter your choice here : "; //ask the user to choice among the main option
		cin>>main_choice;
		if(main_choice==1) {
			if(first_class>=30 && economic_class>=100) {
				system("CLS");
				cout<<"ALL SEATS ARE BOOKED "<<endl;
				system("pause");
				system("CLS");
			} else {
				system("CLS");  // to clear console window
				system("color 06");//to make background color black and text color yellow
				cout<<endl;
				//list of available class
				cout<<"\t*********************************************************************************"<<endl;
				cout<<"\t*____________________List of available classes__________________________________*"<<endl;
				cout<<"\t*  First class --------------------------------------------------------------[1]*"<<endl;
				cout<<"\t*_______________________________________________________________________________*"<<endl;
				cout<<"\t* Economy class -------------------------------------------------------------[2]*"<<endl;
				cout<<"\t*********************************************************************************"<<endl;
choice :
				cout<<"   Enter your choice here : ";
				cin>>sub_choice;
				if(sub_choice != 1 && sub_choice!=2) {
					cout<< "invalid input"<<endl;
					goto choice;
				}

				// code to make reservation class for first class
				if(sub_choice==1) {
					system("CLS");
					if(first_class>=30) {
						//ask the user if he/she wants to take reservation in economy class
						cout<<"First class is full. do you want to book economic class? (y/n)"<<endl;
						cin>>yes_no;
						if(yes_no=='y' || yes_no=='Y') {
							// prompt the user name,sex , age and passport number
							cout<<"\nEnter your name please : "; 
							cin.ignore();
							getline(cin, name[economic_class]);
							cout<<"Enter your sex (m/f) : ";
							cin>>sex[economic_class];
							cout<<"Enter your age : ";
							cin>>age[economic_class];
							cout<<"Enter your passport : ";
							cin>>passport[economic_class];
							cout<<"\n";
							//display boarding pass according to the user information
							cout<<"\t******* Boarding pass **********"<<endl;
							cout<<"\t* Name : "<<name[economic_class]<<endl;
							cout<<"\t* Sex  : "<<sex[economic_class]<<endl;
							cout<<"\t* Age  : "<<age[economic_class]<<endl;
							cout<<"\t* Passport number  : "<<passport[economic_class]<<endl;
							cout<<"\t*-------------------------------"<<endl;
							cout<<"\t* Seat number : "<< ++economic_class<<endl;
							cout<<"\t*Section: economy               " << endl;
							cout<<"\t*Enjoy your flight!             " << endl;
							cout<<"\t*-------------------------------"<<endl;
							cout<<"\t*********************************\n"<<endl;
							
						} else {
							cout<<"NEXT FLIGHT LEAVES IN 3 HOURS"<<endl;
						}
					} else {
						// prompt the user name,sex , age and passport number
						cout<<"\nEnter your name please : ";
						cin.ignore();
						getline(cin, name[first_class]);
						cout<<"Enter your sex (m/f) : ";
						cin>>sex[first_class];
						cout<<"Enter your age : ";
						cin>>age[first_class];
						cout<<"Enter your passport : ";
						cin>>passport[first_class];
						cout<<"\n";

						//display boarding pass according to the user information
						cout<<"\t******* Boarding pass **********"<<endl;
						cout<<"\t* Name : "<<name[first_class]<<endl;
						cout<<"\t* Sex  : "<<sex[first_class]<<endl;
						cout<<"\t* Age  : "<<age[first_class]<<endl;
						cout<<"\t* Passport number  : "<<passport[first_class]<<endl;
						cout<<"\t*-------------------------------"<<endl;
						cout<<"\t* Seat number : "<< ++first_class<<endl;
						cout<<"\t*Section: first               " << endl;
						cout<<"\t*Enjoy your flight!             " << endl;
						cout<<"\t*-------------------------------"<<endl;
						cout<<"\t*********************************\n"<<endl;
					
					}

				}
				// code to make reservation class for economy class
				else if (sub_choice==2) {
					system("CLS");
					system("color 06");
					if(economic_class>=100) {
						//ask the user if he/she wants to take reservation in first class
						cout<<"economic class is full. do you want to book first class (y/n)"<<endl;
						cin>>yes_no;
						if(yes_no=='y' || yes_no=='Y') {
							// prompt the user name,sex , age and passport number
							cout<<"\nEnter your name please : ";
							cin.ignore();
							getline(cin, name[first_class]);
							cout<<"Enter your sex (m/f) : ";
							cin>>sex[first_class];
							cout<<"Enter your age : ";
							cin>>age[first_class];
							cout<<"Enter your passport : ";
							cin>>passport[first_class];
							cout<<"\n";
							//display boarding pass according to the user information
							cout<<"\t******* Boarding pass **********"<<endl;
							cout<<"\t* Name : "<<name[first_class]<<endl;
							cout<<"\t* Sex  : "<<sex[first_class]<<endl;
							cout<<"\t* Age  : "<<age[first_class]<<endl;
							cout<<"\t* Passport number  : "<<passport[first_class]<<endl;
							cout<<"\t*-------------------------------"<<endl;
							cout<<"\t* Seat number : "<< ++first_class<<endl;
							cout<<"\t*Section: first               " << endl;
							cout<<"\t*Enjoy your flight!             " << endl;
							cout<<"\t*-------------------------------"<<endl;
							cout<<"\t*********************************\n"<<endl;
						
						} else {
							cout<<"NEXT FLIGHT LEAVES IN 3 HOURS"<<endl;
						}

					} else {

						// prompt the user name,sex , age and passport number
						cout<<"\nEnter your name please : ";
						cin.ignore();
						getline(cin, name[economic_class]);
						cout<<"Enter your sex (m/f) : ";
						cin>>sex[economic_class];
						cout<<"Enter your age : ";
						cin>>age[economic_class];
						cout<<"Enter your passport : ";
						cin>>passport[economic_class];
						cout<<"\n";
						//display boarding pass according to the user information
						cout<<"\t******* Boarding pass **********"<<endl;
						cout<<"\t* Name : "<<name[economic_class]<<endl;
						cout<<"\t* Sex  : "<<sex[economic_class]<<endl;
						cout<<"\t* Age  : "<<age[economic_class]<<endl;
						cout<<"\t* Passport number  : "<<passport[economic_class]<<endl;
						cout<<"\t*-------------------------------"<<endl;
						cout<<"\t* Seat number : "<< ++economic_class<<endl;
						cout<<"\t*Section: economy               " << endl;
						cout<<"\t*Enjoy your flight!             " << endl;
						cout<<"\t*-------------------------------"<<endl;
						cout<<"\t*********************************\n"<<endl;
						
					}
				} else {
					cout<<"Invalid input please enter 1 or 2";
				}
				system("pause");
				system("CLS");
			}
		} else if(main_choice==2) {
			// declaration and initialization variables and strings for passport searching
			system("CLS");
			system("color 06");
			string tobesearched_passport;
			cout<<"please enter the passport "<<endl;
			cin>>tobesearched_passport;
			bool passport_found= false;
			
			//search among all alternative
			for(int i=0 ; i<100 ; i++) {
				if(passport[i]==tobesearched_passport) {
					idx=i;
					passport_found=true;
					break;
				}

			}

			//display if the input passport is found
			if(passport_found) {
				system("CLS");
				system("color 02");
				cout<<endl;
				cout << "\t\nPassport Found!"<<endl<<endl;
				cout<<"\t-------------------------------------------"<<endl;
				cout << "\tName:  " << name[idx]<< endl;
				cout << "\tSex:   " << sex[idx]<< endl;
				cout << "\tAge:   " << age[idx]<< endl;
				cout << "\tPassport number:   " << passport[idx]<< endl;
				cout << "\tSeatNo:" << idx+1<<endl;
				cout << "\tSection: Economy" << endl;
				cout<<"\t-------------------------------------------"<<endl;
			} else {
				// display the output prompt with red color if passport is not found
				system("CLS");
				system("color 04");
				cout<<"\n\t*************************************************************"<<endl;
				cout <<"\tPassport Not Found !"<<endl;
				cout<<"\t*************************************************************\n"<<endl;
			}
			system("pause");
			system("CLS");
		}
//  to display all list of passengers
		else if(main_choice==3) {

			system("CLS");
			system("color 09");
		
			for(int i = 0; i < 100; i++) {
				idx=i;
				if(name[i].size() != 0){
					cout<<"\n";
					cout<<"\t******* Boarding pass **********"<<endl;
					cout<<"\t* Name : "<<name[idx]<<endl;
					cout<<"\t* Sex  : "<<sex[idx]<<endl;
					cout<<"\t* Age  : "<<age[idx]<<endl;
					cout<<"\t* Passport number  : "<<passport[idx]<<endl;
					cout<<"\t*-------------------------------"<<endl;
					cout<<"\t* Seat number : "<< ++idx<<endl;
					if(i < 30)
						cout<<"\t*Section: first               " << endl;
					else
						cout<<"\t*Section: Economy               " << endl;
					cout<<"\t*Enjoy your flight!             " << endl;
					cout<<"\t*-------------------------------"<<endl;
					cout<<"\t*********************************\n"<<endl;
				}
				
		}
		
				cout<<"\n-------------------------------------------------"<<endl;
				system("pause");
				system("CLS");
		}
// to exit the program
		else if(main_choice==4) {
			return 0;
		} else {
			cout<<"Invalid input. please try again"<<endl;
			system("pause");
			system("CLS");
		}
	} while(true);

	return 0;
}

