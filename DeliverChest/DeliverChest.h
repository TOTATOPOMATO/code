#ifndef SYST_H 
#define SYST_H
#include"Cabinet.h"
class Syst
{	private:
		Deliverman* man;//װ�����еĿ��Ա
		Cabinet cab[10];//���еĹ��� 
		int boxNumber;
		int cabNumber;
		 
	public:
		DeliverChest();
		~DeliverChest(); 
		void run();//���к��� 1�����2 
			bool find();//

}	
#endif	

