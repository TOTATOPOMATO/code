#ifndef SYST_H 
#define SYST_H
#include"Cabinet.h"
class Syst
{	private:
		Deliverman* man;//装载所有的快递员
		Cabinet cab[10];//所有的柜子 
		int boxNumber;
		int cabNumber;
		 
	public:
		DeliverChest();
		~DeliverChest(); 
		void run();//运行函数 1存包裹2 
			bool find();//

}	
#endif	

