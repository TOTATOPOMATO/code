#include<iostream>
#include<string>
using namespace std;
#ifndef GOODS_H
#define GOODS_H
class Goods
{	private:
		int direction;//���� 
		string receiverName;
		string phoneNumber;
		int loc;
	public:
		int getloc();
		Goods(int,string,string);
		string phoneNumber();//����phoneNumber 
		
};
#endif
