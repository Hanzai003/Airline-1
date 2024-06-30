#include<iostream>
#include <fstream>
using namespace std;
class AirMess{
	string startup,drinks,meal;
	public:
		AirMess(){
			startup="salat";
			drinks="coke";
			meal="beef";
		}
	
	void showingMenu(){
			cout<<"\nwell come we have following menu for u:";
			cout<<"\n startup:"<<startup;
	    	cout<<"\nmeal:"<<meal;
			cout<<"\ndrinks:"<<drinks;
		}
		
	void setstartup(string s){
		startup=s;
	}
	void setdrinks(string d){
		
		drinks=d;
	}
	void setmeal(string m)
	{
		meal=m;
		
	}
	string getsatrtup(){
		return startup;
	}
	string getdrink(){
		
		return drinks;	}
	string getmeal(){
		 return meal;
	}
};
class FlightCategory{
	string business;
	string economic;
	public:
		void setbs(string b){
			business=b;
		}
		void seteco(string eco){
			economic=eco;
		}
		string getbs(){
			return business;
		}
		string geteco(){
			return economic;
		}
};
class Aeroplane{
	string name;
	int NOS;
	int Model;
	AirMess *ptr;
	FlightCategory *fptr;
	
	public:
		Aeroplane(string name="",int NOS=0,int Model=0)
		{
			this->name=name;
			this->Model=Model;
			this->NOS=NOS;
			ptr=new AirMess;
			fptr=new FlightCategory;
		}
		~Aeroplane(){
			delete ptr;
			delete fptr;
		}
		void setbcategor(int option){
			if(option==1)
			fptr->setbs("busi");
			else
			fptr->seteco("eco");
		}
		
		string getbcategor(){
			 fptr->getbs();
			 fptr->geteco();
		}
		
		void showmenu(){
			ptr->showingMenu();
		}
		void setmenu(string dr,string meal,string start){
			ptr->setdrinks(dr);
			ptr->setmeal(meal);
			ptr->setstartup(start);
			
		}
		void setname(string name){
			this->name=name;
		}					
		void setmodel(int  Model){
			this->Model=Model;
		}
		void setNos(int NOS){
			this->NOS=NOS;
		}
		string getname(){
			return name;
		}					
		int getmodel(){
			return Model;
		}
		int getNos(){
			return NOS;
		}
		
};


