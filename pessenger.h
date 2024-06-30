#include<iostream>
#include<cstring>
#include <fstream>
#include "Admin.h"
using namespace std;
class Ticket{
	int ticket;
	double price;
	public:
		void setticket(int  tic){
			ticket=tic;
		}
		void setprice(double p){
			price=p;
		}
		int getticket(){
			return ticket;
		}
		double getprice(){
			return price;
		}
	
};
class pessenger{
  protected:
  Person *Pptr;
  int email;
  string pncode;
  Ticket *Tptr; //aggregation
  public:
  pessenger(){
  }
  void setptr(Person *p){
  	Pptr=p;
  }
  void settptr(Ticket *tpr){
  	Tptr=tpr;
  }
  int getticket(){
  	return Tptr->getticket();
  }
  double getprice(){
  	Tptr->getprice();
  }
  void setemail(int email){
  	this->email=email;
  }
  void setcode(string code){
  	pncode=code;
  }
  int getemail(){
  	return email;
  }
  string getcode(){
  	return pncode;
  }
  
};
class FeedBack{
	string Pfeedback;
	public:
		
		void setfeedback(string fb = "feed"){
			Pfeedback=fb;
		}
		string getfeedback(){
			return Pfeedback;
		}
				
};
class BookingFlight:public pessenger{
	string departure;
	string destination;
	
	public:
		
		void setdetail(string departure,string destination){
		
			this->departure=departure;
			this->destination=destination;
			
		}
		void showdetail(ofstream &write){
		   Pptr->showdetail(write);
  	       write<<"\nticekt:"<<Tptr->getticket();
  	       write<<"\nprice:"<<Tptr->getprice();
  	       write<<"\nemial:"<<email;
  	       write<<"\npin code:"<<pncode;
		   write<<"\ndeparture time:"<<departure;
		   write<<"\ndestination:"<<destination;		
		}
		
	};
