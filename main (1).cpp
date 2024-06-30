#include<iostream>
//#include"Admin.h"
#include"pessenger.h"
#include"Aeroplan.h"
#include <stdlib.h>
#include <string>
#include <cctype>
#include<bits/stdc++.h>
#include <vector>
#include <fstream>

using namespace std;

bool comparator(string a,string b)
{
    return a<b;
}


int main(){
	char ch;
	ofstream write("AirlineData.txt");
	if (!write) 
	{
        cout << "Error opening file." << endl;
        return 0;
    }
	do
	{
	    
	system("COLOR 79");
    cout<<"\n";
    	cout<<"\t\t ================================================\n";
	cout<<"\t\t |       DARBASH INTERNATIONAL AIRLINES         |\n";
	cout<<"\t\t ================================================\n\n\n";

	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t1. Admin    \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t2. Passenger     \t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\t|\t3. EXIT \t\t\t\t|\n";
	cout<<"\t\t-------------------------------------------------\n\n";
	Person person[10];
	Ticket ticket[3];
	Aeroplane airmes,aircate[3];
	BookingFlight psnger[3];
	Flights flight[4];
	FeedBack feed[3];
	int email,option,id,choice,j=0,check,fno,flag=0,flag1=0, loop=0,flag3=0,flag4=0,i=0,idcheck=0,checkpasword=0,user,book,cat;//i is for admin checking
	string name, DOB,pasword,pncode,date,day,time,plan,fbd,destination,departure,start,drinks,meal;
	long int no;
	while(1){
	idher:
	cout<<"\nEnter Your Option :";
	cin>>option;
	if(option==1){
		cout<<"\npress 1 for sign in  \n 2 for sign up : ";
		cin>>choice;
		if(choice==1){
			cout<<"\nenter your id : ";
			cin>>id;
			cin.ignore();
			if(id==flight[0].getid()){
			start:	
			cout<<"\nEnter your password : ";
			getline(cin,pasword);
			if(pasword==flight[0].getpasword()){
				do
				{
					cout<<"\nWelcome!!!";
			 cout<<"\n 1 for flights setup : \n 2-for feedback check : \n 3-for Flight update \n 4-for Flight postponed";
			 cout<<"\n 5- To set menu : \n 6- see detail of Passengers : ";
			 cin>>check;
			 cin.ignore();
			if(check==1){
				flag1++;
				cout<<"\nEnter the details for flight ";
			 for(int i=1;i<=3;i++){
				cout<<"\nenter the plane or flight no : ";
				getline(cin,plan);
				cin.ignore();
				cout<<"\nenter the date : ";
				getline(cin,date);
				cin.ignore();
				cout<<"\nenter the day : ";
				getline(cin,day);
				cout<<"\nenter the time :";
				getline(cin,time);
				flight[i].setDate(date);
				flight[i].setDay(day);
				flight[i].setTime(time);
				flight[i].setPlan(plan); }
				
				}
			else if(check==2){
		    for(int i=0;i<flag;i++){
		    	if(flag<=0)
				{
				cout<<"\n No feedback is entered yet!!! ";
				break;}
		    	cout<<"\nFeedbacks : "<<feed[i].getfeedback();
			}
			}
			else if(check==3){
				cin.ignore();
				if(flag1==0){
					cout<<"\n Records are not entered yet!!";
				}
				else 
				{
				cout<<"\nEnter the flight No. to update : ";
				cin>>fno;
				cout<<"\nEnter the details for flight to be updated : ";
				cin.ignore();
				cout<<"\nEnter the plane or flight no : ";
				getline(cin,plan);
				cout<<"\nEnter the date : ";
				getline(cin,date);
				cout<<"\nenter the day : ";
				getline(cin,day);
				cin.ignore();
				cout<<"\nenter the time : ";
				getline(cin,time);
				flight[fno].setDate(date);
				flight[fno].setDay(day);
				flight[fno].setTime(time);
				flight[fno].setPlan(plan);				
				cout<<"\n Flight updated successfully!!";
				cout<<endl<<flight[fno].getDate();
				cout<<endl<<flight[fno].getDaY();
				cout<<endl<<flight[fno].getPlan();
				cout<<endl<<flight[fno].getTime();}
			}
			else if(check==4){
				if(flag1==0){
					cout<<"\nNo record is entered yet!";
				}
				else {
				cout<<"\nenter the flight No. to postpond : ";
				cin.ignore();
				cin>>fno;	
				cout<<"\nenter the plane or flight no : ";
				getline(cin,plan);
				cout<<"\nenter the date : ";
				getline(cin,date);
				cout<<"\nenter the day : ";
				getline(cin,day);
				cout<<"\nenter the time : ";
				getline(cin,time);
				flight[fno].setDate(date);
				flight[fno].setDay(day);
				flight[fno].setTime(time);
				flight[fno].setPlan(plan);				
				cout<<"\n Flight postponed successfully!!";
				cout<<endl<<flight[fno].getDate();
				cout<<endl<<flight[fno].getDaY();
				cout<<endl<<flight[fno].getPlan();
				cout<<endl<<flight[fno].getTime();}}
				
				else if(check==5){
					cin.ignore();
					cout<<"\nEnter the Menu for Airline : ";
					cout<<"\nEnter the startups Food : ";
					getline(cin,start);
					cout<<"\nEnter the drinks : ";
					getline(cin,drinks);
					cout<<"\nEnter the meal : ";
					getline(cin,meal);
					cin.ignore();
					airmes.setmenu(drinks,meal,start);
					cout<<"\nmenu is setup successfully!";
				}
				else if (check==6)
				{
				//	sort(psnger,psnger+3,comparator);

					for(int j=0;j<3;j++)
					{
						psnger[j].showdetail(write);
						cout<<endl;
					 } 
				}
			
		      	else{
		     	    cout<<"\n Record not found \n Enter the valid record : ";
		     	    
					}
					cout<<"\nDo u make to more changes and see something(y/n) : ";
					cin>>ch;
				}while(ch!='n');
			 	
			}
			
			else
			{
			cout<<"\nInvalid password:";
			j++;
			if(j<3){
				goto start;
			}
			cout<<"\nYour Account is blocked!";
			//to increment it after every fake pasword entery;
			}
	
			
				}else cout<<"\nEntered Id not found!!";
				}
		
		else if(choice==2){
		if(flag3<1){
			
			cout<<"\nEnter your name : ";
			cin.ignore();
			getline(cin,name);
			cout<<"\nenter your no : ";
			cin>>no;
			cin.ignore();
			cout<<"\nenter your dob : ";
			getline(cin,DOB);
			cout<<"\nenter your id : ";
			cin>>id;
			cin.ignore();
			cout<<"\nenter your password : ";
			getline(cin,pasword);
			person[0].setname(name);
			person[0].setage(no);
			person[0].setDOB(DOB);
			flight[0].setid(id);
			flight[0].setpasword(pasword);
			flight[0].setptr(&person[0]);
			cout<<"\nyour account is created successfully!";
			flag3++;
		}
		else 
		{
			cout<<"\nAccount is already registered!!";
			begin:
			cout<<"\nEnter old admin password to create new account : ";
			cin.ignore();
			getline(cin,pasword);
			if(pasword==flight[0].getpasword())
			{
				cout<<"\nenter your name :";
			    cin.ignore();
			    getline(cin,name);
			    cout<<"\nenter your no : ";
			    cin>>no;
			    cin.ignore();
		     	cout<<"\nenter your dob : ";
		     	getline(cin,DOB);
		    	cout<<"\nenter your id : ";
		    	cin>>id;
		    	cin.ignore();
			    cout<<"\nenter your password : ";
			    getline(cin,pasword);
			    person[0].setname(name);
		     	person[0].setage(no);
		    	person[0].setDOB(DOB);
		    	flight[0].setid(id);
		    	flight[0].setpasword(pasword);
		    	flight[0].setptr(&person[0]);
		    	cout<<"\nAccount is recreated successfully!";
		}
		else
		{
			if(flag4<3)
			{	
				cout<<"\ninvalid password!";
				flag4++;
				goto begin;
			}
		else
		{
			cout<<"\nMany wrong attempts!!";
			cout<<"\nyou cannot create new account!!";}}
		}}
}
	else if(option==2){
		
		cout<<"\npress 1 for sign in  ";
		cout<<"\npress 2 for sign up : ";
		cin>>user;
		if(user==1){
			for(int j=0;j<=i;j++){ 
				here:
				cout<<"\nEnter your id : ";
				cin.ignore();
				cin>>email;
			
				if(email==psnger[j].getemail()){
					chkpasd:
					cout<<"\nEnter your password : ";
					cin.ignore();
					getline(cin,pasword);
					
					if(pasword==psnger[j].getcode()){
						do
						{
							cout<<"\nWelcome back sir!!";
						cout<<"\nDo you want to book ticket sir! : ";
						cout<<"\nPress 1 for YES and 2 for NO :";
						cin>>book;
					cin.ignore();
						if(book==1){
							cout<<"\nEnter your departure : ";
							getline(cin,departure);
							cout<<"\nEnter your destination : ";
							getline(cin,destination);
							cout<<"\nenter your choice for flights : ";
							cout<<"\n1 for business  \n2 for economy : ";
							cin>>cat;
							aircate[j].setbcategor(cat);
							psnger[j].setdetail(departure,destination);
							ticket[j].setticket(j+1);
							ticket[j].setprice(1200);
							psnger[j].settptr(&ticket[j]);
							cout<<"\nyour tickets have been booked!";
							cin.ignore();
							cout<<"\nEnter your feedback or remarks If you have ANY!! : ";
		                	getline(cin,fbd);
		                	feed[j].setfeedback(fbd);
		                	flag++;	
		                	cout<<"\ndo you want to view your record\n press 1 - for YES :  \n 2 - for NO : ";
		                	cin>>book;
		                	
							if(book==1){
		                	psnger[j].showdetail(write);
		                	//break;
							}
				      	}
					    else
					    {
					    	cout<<"\nThanks for visiting us sir!";
					    	break;
						}
							cout<<"Do u book another Ticket(y/n) : ";
							cin>>ch;	
						}while (ch!='n');
			             goto idher;
			        }
				
						else
				      		if(checkpasword<=3){
				      			cout<<"\nInvalid password!";
				      			checkpasword++;
				      			goto chkpasd;
							}
				      else 
				      cout<<"\nOOPS! you can't enter any more!";
				      //break;
			          }
		             else if(idcheck<=3){
			         cout<<"\nAccount doesn't exist!!";
		          	 idcheck++;
		         	 goto here;}
		          	else
		         	cout<<"\nyou have exceed your limits of entering Id!!";
		        	
				}
                   	}   
	               
				    else{
	             	while(i<5){
	            	cout<<"\nenter your name : ";
	            	cin.ignore();
	              	getline(cin,name);
	             	//cin.ignore();
	            	cout<<"\nenter your no : ";
		           cin>>no;
		           cin.ignore();
	              	cout<<"\nenter your DOB : ";
	              	cin.ignore();
	             	getline(cin,DOB);
	              	cout<<"\nenter your id : ";
	             	cin>>email;
	             	while(email==psnger[j].getemail())
	             	{
	             		cout<<"\nID already Exists...Enter your id again : ";
	             		cin>>email;
					}
	             	
	             	cin.ignore();
	              	cout<<"\nenter your code : ";
	               	getline(cin,pncode);
	             	person[i+1].setname(name);
	             	person[i+1].setage(no);
	              	person[i+1].setDOB(DOB);
	               	psnger[i].setemail(email);
	               	psnger[i].setcode(pncode);
	             	psnger[i].setptr(&person[i+1]);
	               	cout<<"\nyour account is created successfully!!";
	            	i++;
		           break;
	              	}
	              	}
                 	}
	              else if(option==3){
	              break;
	               	}
               	else
                   	cout<<"\n please enter a valid input ";
	
                  }
        
		cout<<"Do you want to continue (y/n) : ";
		cin>>ch;	
	}while(ch!='n');    
	cout<<"\nThanks For Visiting our site!" ; 
	write.close();
	return 0;
} 

