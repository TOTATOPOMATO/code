#ifndef DELIVERCHEST_H 
#define DELIVERCHEST_H
#include"Cabinet.h"
class DeliverChest
{	private:
		Deliverman* man;//装载所有的快递员
		Cabinet cab[300];//所有的柜子 
		int cabNumber;//已经用掉的柜子
		 
	public:
		DeliverChest();
			void	load();//构造函数的分之函数。载入所有的数据,从文件夹内读取已经写入的数据
		~DeliverChest(); 
		void run();//运行函数 
		bool findPacket(int);//找包裹，根据单号找包裹 
		bool takePacket(int);//取包裹，根据密码取包裹 
		bool placePacket();//存包裹 
		void checkCabinet();//查询柜子的使用情况 
		bool emptyCabinet();//清空过期的包裹
		 
		

}	
#endif
