#include<iostream>
#include <fstream>
using namespace std;
class Person{
	string name , DOB, no;
	public:

	void setname(string name){
		this->name=name;
	}
	void setage(int no){
		this->no=no;
	}
	void setDOB(string DOB){
		this->DOB=DOB;
	}
	string getname(){
		return name;
	}
	string getDOB(){
		return DOB;
	}
	string getno(){
		return no;
	}
	void showdetail(ofstream& write){
		write<<"\nName:"<<name;
		write<<"\no:"<<no;
		write<<"\nDOB:"<<DOB;

	}
	
};
class Admin{
	int id;
	string pasword;
	Person *Pptr;
	public:
	virtual void showdetail()=0;
	Admin(){
	}
	Admin(int id,string pasword,Person *p){
		this->id=id;
		this->pasword=pasword;
		Pptr=p;
	}
	
	void setid(int id){
		this->id=id;
	}
	void setptr(Person *p){
		Pptr=p;
	}
	void setpasword(string pasword){
		this->pasword=pasword;
	}
	int  getid(){
		return id;
	}
	string getpasword(){
		return pasword;
	}
	
	void showdetails(ofstream &write){
		Pptr->showdetail(write);
		write<<"\nID:"<<id;
		write<<"\nPasword:"<<pasword;
	
	}
};

class Flights:public Admin{
	string Date,Day,Time,Plan;
	public:
		Flights():Admin(){
			
		}
		Flights(int n,string pa,Person *p):Admin(n,pa,p){	
		}
		
		void setDate(string Date){
			
			this->Date=Date;
		}
		void setDay(string Day){
			this->Day=Day;
		}
		void setTime(string Time){
			this->Time=Time;
		}
		void setPlan(string Plan){
			this->Plan=Plan;
		}
		string getDate(){
			return Date;
		}
		string getDaY(){
				return Day;
		}
		string getTime(){
				return Time;
		}
		string getPlan(){
      	return Date;
			}
		void showdetail(){}	

};
class UpdateFlights:public Flights{
	public:
		UpdateFlights():Flights(){
		}
};
class PostpondFlights:public Flights{
	public:
		PostpondFlights():Flights(){
		}
};
