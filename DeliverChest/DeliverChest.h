#ifndef DELIVERCHEST_H 
#define DELIVERCHEST_H
#include"Cabinet.h"
class DeliverChest
{	private:
		Deliverman* man;//װ�����еĿ��Ա
		Cabinet cab[300];//���еĹ��� 
		int cabNumber;//�Ѿ��õ��Ĺ���
		 
	public:
		DeliverChest();
			void	load();//���캯���ķ�֮�������������е�����,���ļ����ڶ�ȡ�Ѿ�д�������
		~DeliverChest(); 
		void run();//���к��� 
		bool findPacket(int);//�Ұ��������ݵ����Ұ��� 
		bool takePacket(int);//ȡ��������������ȡ���� 
		bool placePacket();//����� 
		void checkCabinet();//��ѯ���ӵ�ʹ����� 
		bool emptyCabinet();//��չ��ڵİ���
		 
		

}	
#endif
