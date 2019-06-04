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

struct Manager
{
	string managerName;
	string managerPhone;
};

class Cabinet
{
	static int count;//快递柜的总个数，每次生成一个快递柜自动加1
private:
	string code;
	string place;
	int pickCode;
public:

	Cabinet(string=" ");
	~Cabinet();

	void setCode(int);
	string getCode() const;

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

	void setManagerName(string);
	string getManagerName() const;

	void setManagerPhone(string);
	string getManagerPhone() const;

	void print() const;

	static void setCount(int);
	static void getCount() const;
};

#endif