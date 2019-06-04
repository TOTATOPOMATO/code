#ifndef DELIBERMAN_H
#define DELIBERMAN_H

#include<iostream>
#include<string>
using namespace std;

class DeliverMan{
	private:
		int passwd;
		int account;
		
		int deliverNumber;
		string deliverName;
		int deliverPhone; 
	public:
		DeliverMan(); 
		void setAccount(int);
		void setPasswd(int);
		int getAccount();
		int getPasswd();
		
		int getDeliverNumber();
		string getDeliverName();
		int getDeliverPhone();
		void setDeliverNumber(int);
		void setDeliverName(string);
		void setDeliverPhone(int);
}; 



#endif
