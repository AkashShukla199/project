#include<iostream>
#include<conio.h>
#include <string.h>
#include<fstream>
#include<process.h>
using namespace std;
	int vehicle,count=0,total_amt=0,car,bike,truck,bus,c=0,amount=0,pa;
void first(){
	fstream file;
	file.open("1.txt",ios::in);
	file>>bike;
	file.close();
	file.open("2.txt",ios::in);
	file>>car;
	file.close();
	file.open("3.txt",ios::in);
	file>>bus;
	file.close();
	file.open("4.txt",ios::in);
	file>>truck;
	file.close();
}
class  toll
{

	public:
		void Edit_rate(){
			system("cls");
			fstream file;
			cout<<"Enter the category of Vehicle: ";
			char temp[100];
			cin>>temp;
			if(strcmp(temp,"bike")==0){
				cout<<"Enter new Basic Fare for Bike: ";
				cin>>bike;
				file.open("1.txt",ios::out);
				file<<bike;
				file.close();
			}
			else if(strcmp(temp,"car")==0){
				cout<<"Enter new Basic Fare for Car: ";
				cin>>car;
				file.open("2.txt",ios::out);
				file<<car;
				file.close();
			}
			else if(strcmp(temp,"bus")==0){
				cout<<"Enter new Basic Fare for Bus: ";
				cin>>bus;
				file.open("3.txt",ios::out);
				file<<bus;
				file.close();
			}
			else if(strcmp(temp,"truck")==0){
				cout<<"Enter new Basic Fare for Truck: ";
				cin>>truck;
				file.open("4.txt",ios::out);
				file<<truck;
				file.close();
			}
			else{
				cout<<"Wrong Choice: ";
				getch();
				Edit_rate();
			}
		}
		void paid_car ()
		{ count ++;
			int side;
			cout<<"Enter  2  for  pass  of  both side  and 1  for pass of only one side"<<endl;
					bool bad = false;

	do{

		cin >> side;

		bad = cin.fail();
		if (bad){
			cout << "Error " << endl;
			cout<<"Try again"<<endl;}
		cin.clear();
		cin.ignore(10, '\n');
	} while(bad);
		
			if(side==1){
				cout<<"For one side a car should pay "<<car<<endl;
			total_amt=+car;
			cout<<"Amount to be paid  "<<total_amt<<endl;
				cout<<"Your vehicle number is:  "<<count<<endl;
			}
			else if (side==2){
				cout<<"For 2 side a car should pay"  <<(2*(car-200))<<endl;
			total_amt=total_amt+2*(car-200);
				cout<<"Amount to be paid  "<<total_amt<<endl;
					cout<<"Your vehicle number is:   "<<count<<endl;
					
			}
			else{
				cout<<"Wrong Input"<<endl;
			}
		}
		void paid_bike()
		{
			count++;
			int side;
			cout<<"Enter  2  for  pass  of  both side  and 1  for pass of only one side"<<endl;
					bool bad = false;

	do{

		cin >> side;

		bad = cin.fail();
		if (bad){
			cout << "Error " << endl;
			cout<<"Try again"<<endl;}
		cin.clear();
		cin.ignore(10, '\n');
	} while(bad);
		
			if (side==1){
				cout<<"For one side a bike should pay   "<<bike<<endl;
			total_amt=+bike;
			cout<<"Amount to be paid   "<<total_amt<<endl;
				cout<<"Your vehicle number is:   "<<count<<endl;
		}
			else if(side==2){
				cout<<"For 2 side a bike  should pay  "<<(2*(bike-200))<<endl;
			total_amt=total_amt+2*(bike-200);
				cout<<"Amount to be paid  "<<total_amt<<endl;
					cout<<"Your vehicle number is:  "<<count<<endl;
			}
			else{
				cout<<""<<endl;
			}
		}
		void paid_truck()
		{
			count++;
				int side;
			cout<<"Enter  2  for  pass  of  both side  and 1  for pass of only one side"<<endl;
					bool bad = false;

	do{

		cin >> side;

		bad = cin.fail();
		if (bad)
			cout << "Error " << endl;
			cout<<"Try again"<<endl;
		cin.clear();
		cin.ignore(10, '\n');
	} while(bad);
		
			if(side==1){
				cout<<"For one side a truck should pay"<<truck<<endl;
			total_amt=+truck;
			cout<<"Amount to be paid   "<<total_amt<<endl;
				cout<<"Your vehicle number is:    "<<count<<endl;
		}
			else if(side==2){
				cout<<"For two side a truck should pay  "<<(2*(truck-200))<<endl;
			total_amt=total_amt+2*(truck-200);
				cout<<"Amount to be paid  "<<total_amt<<endl;
					cout<<"Your vehicle number is:  "<<count<<endl;
			}
			else{
				cout<<"Wrong Input"<<endl;
			}
		}
		void paid_bus()
		{
			count++;
				int side;
			cout<<"Enter  2  for  pass  of  both side  and 1  for pass of only one side"<<endl;
				bool bad = false;

	do{

		cin >> side;

		bad = cin.fail();
		if (bad){
			cout << "Error " << endl;
				cout<<"Try again"<<endl;}
		cin.clear();
		cin.ignore(10, '\n');
	} while(bad);
		
			if(side==1){
				cout<<"For one side a bus should pay   "<<bus<<endl;
			total_amt=+bus;
			cout<<"Amount to be paid  "<<total_amt<<endl;
			cout<<"Your vehicle number is:  "<<count<<endl;
			}
			if(side==2){
				cout<<"For two side a bus  should pay   "<<(2*(bus-200))<<endl;
			total_amt=total_amt+2*(bus-400);
			cout<<"Amount to be paid  "<<total_amt<<endl;
				cout<<"Your vehicle number is:  "<<count<<endl;
					}
					else{
				cout<<"Wrong Input"<<endl;
			}
		}
		void notpaid()
		{ c++;
			count ++;
			cout<<" Number of the vehicle which donot pay "<<count<<endl;
		}
		void display()
		{
			cout<<"Totalnumber of vehicle passed   "<<count<<endl;
			cout<<"Total number of vehicle which do not pay  "<<c<<endl;
			cout<<" Total Amount "<<total_amt<<endl;
			fstream file;
			file.open("Toll Report.txt",ios::out|ios::app);
			file<<"Total Amount: "<<total_amt;
			file.close();
		}
		void file( int wheeler )
		{ int amount,wheel=wheeler,side;
	         cout<<"Pass for 2 side or 1 side"<<endl;
	         cin>>side;
			fstream obj1("Toll Report.txt",ios::app);
			obj1<<"Your bill :"<<endl;
	obj1<<"Wheeler"<<"\t\t\t"<<"Number of vehicle "<<"\t\t\t\t"<<"Amount to be paid"<<endl;
		if(wheeler==2){
			if(side==1){
		amount=bike;
		obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t"<<amount<<endl;}
		if(side==2)
		{
			amount=2*(bike-200);
				obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t"<<amount<<endl;
		}
		}
		else if(wheeler==4){
			if(side==1){
		amount=car;	
			obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t"<<amount<<endl;}
			else if(side==2){
				amount=2*(car-200);
					obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t"<<amount<<endl;
			}
		}
		else if(wheeler==6){
			if(side==1){
		amount=bus;	
			obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t"<<amount<<endl;}
			if(side==2){
				amount=2*(bus-200);
					obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t"<<amount<<endl;
			}
		}
        else if(wheeler==10){
        	if(side==1){
	amount=truck;
		obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t\t"<<amount<<endl;	}	
   else if(side==2){
   	amount=2*(truck-200);
   	obj1<<wheel<<"\t\t\t\t\t"<<count<<"\t\t\t\t\t\t\t\t"<<amount<<endl;
   }
	}
	else if(wheeler==0){
		obj1<<"vehicle have the pass"<<endl;
		obj1<<" Monothly Pass number is :"<<pa;
	}
        obj1.close();
		}
	
	void  pass()
	{ 
		
		cout<<"CHECKED You can go now"<<endl;
		
	}
};
 int main()
{ 
first();
main:
	system("cls");
	system("color 3F");
	toll obj;
	int wheeler;
	int n;	char ch;
	have:
		system("cls");
		cout<<"Vehicle     Wheeler"<<endl;
		cout<<"For Bike -> 2"<<endl;
		cout<<"For Car  -> 4"<<endl;
		cout<<"For Bus  -> 6"<<endl;
		cout<<"For Truck-> 10"<<endl;
		cout<<"RATE OF BIKE IS:"<<bike<<endl;
		cout<<"RATE OF CAR IS :"<<car<<endl;
		cout<<"RATE OF BUS  IS:"<<bus<<endl;
		cout<<"RATE OF TRUCK  IS:"<<truck<<endl;
	cout<<"Enter 0 if the vehicle DONOT  PAY"<<endl;
	cout<<"Enter 1 if the vehicle PAY"<<endl;
	cout<<"ENTER 2 for Changing Basic Fare"<<endl;
	bool bad = false;

	do{
		cout << "Enter number: ";
		cin >> n;

		bad = cin.fail();
		if (bad)
			cout << "Error message" << endl;
		cin.clear();
		cin.ignore(10, '\n');
	} while(bad);
	
	if(n==0)
	{
		cout<<"Vehicle DONOT PAY"<<endl;
		obj.notpaid();
		
		goto have;
	}
	else if(n==2){
		obj.Edit_rate();
		goto main;
	}
	else if (n==1)
	{
		cout<<"Enter the wheeler you want to PAY   OR  ";
		cout<<"Enter 9 if driver HAVE PASS "<<endl;
		cin>>wheeler;
		
		do
		{
	switch(wheeler)
	{
		case 4:
			cout<<"The vehicle should pay the charge of CAR"<<endl;
			obj.paid_car();
			obj.file(4);
			break;
			case 2:
			cout<<"The vehicle should pay the charge of BIKE "<<endl;
			obj.paid_bike();
			obj.file(2);
			break;
			case 6:
				cout<<"The vehicle should pay the charge of BUS"<<endl;
			obj.paid_bus();
				obj.file(6);
				break;
				case 10:
					cout<<"The vehicle should pay the charge of  TRUCK"<<endl;
					obj.paid_truck();
					obj.file(10);
					break;
					case 9:
						cout<<"Your pass is only valid for ONE MONTH "<<endl;
						obj.pass();
						break;
					default:
						cout<<"INVALID INPUT"<<endl;
						getch();
						goto have;
						break;
	}
	again:
	cout<<"Enter Y or y to continue and n or N to exit the program"<<endl;
	 cin>>ch;
	 
	  if (ch=='Y'||ch=='y')
	 {
	 	system("cls");
	goto have;
	}
	else if(ch=='N'||ch=='n')
	{
		obj.display();	
		exit(0);
	}
	else{
		cout<<"Invalid Input"<<endl;
		goto again;
	}
	}while(n==1||n==0||n==2);
	}
	else{
		cout<<"Invalid Input"<<endl;
		getch();
		goto have;
	}
cout<<"\t\t\t\t\t\t\tThankyou for visiting "<<endl;
cout<<"\t\t\t\t\t\t\t HAVE SAFE DRIVE"<<endl;
		return(0);
}
