#ifndef CABINET_H
#define CABINET_H

#include<string>
using namespace std;


struct Pocket
{
	string receiverName;
	string receiberPhone;
	int direction;
};

class Cabinet
{

private:
	string place;
	int pickCode;
public:

	Cabinet(string=" ");
	~Cabinet();


	void setPlace(string);
	string getPlace() const;

	void setPickCode(int);
	int getPickCode() const;

	void setReceiverName(string);
	string getReceiverName() const;

	void setReceiverPhone(string);
	string getReceiverPhone() const;

	void setDirection(int);
	int getDirection() const;

	void print() const;

	static void setCount(int);
	static void getCount() const;
};

#endif
