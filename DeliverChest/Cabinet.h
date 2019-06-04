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

class Cabinet//�䳲 
{
	
private:
	int mark;//��� 
	Box box[10][10]; 
	int pickCode[10][10];
	Deliverman* man;//װ�����еĿ��Ա

public:

	Cabinet(int);//���ļ�����ȡ 
	~Cabinet();//�ļ���д�� 
	void checkCab(); 
	bool place();
		bool setmassage();
	bool take();
	void run();
};

#endif
