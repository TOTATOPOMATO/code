#ifndef CABINET_H
#define CABINET_H

#include<string>
using namespace std;


struct Package
{	string sendName;
	string receiverName;
	string receiberPhone;
	int direction;
};

struct Box
{	package* pac=0;
	bool isfull; 
};

class Cabinet//蜂巢 
{
	
private:
	int mark;//编号 
	Box box[10][10]; 
	int pickCode[10][10];
	Deliverman* man;//装载所有的快递员

public:

	Cabinet(int);//从文件流读取 
	~Cabinet();//文件流写入 
	void checkCab(); 
	bool place();
		bool setmassage();
	bool take();
	void run();
};

#endif
