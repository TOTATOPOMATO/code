#ifndef DELIBERMAN_H
#define DELIBERMAN_H

#include<iostream>
using namespace std;

class DeliverMan{
	private:
		int passwd;
		int account;
	public:
		DeliverMan(); 
		void setAccount();
		void setPasswd();
		int getAccount();
		int getPasswd();
}; 



#endif
