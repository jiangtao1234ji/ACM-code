#include<iostream>
#include<string>
#include<algorithm>
#include <fstream>

using namespace std;

class zhibiaofenlei
{
	public:
		int yinjian;
		int ruanjian;
		int xinxifuwu;
};

class zhibiao
{
	public:
		int zhichang;
		int chanzhi;
		int liruen;
		int renshu;
		int pingjungongzhi;
};

class chanye
{
	public:
		int tag; //���ɾ��   1 ɾ��     0 δɾ
		int time;
		char area[10];  //����
		char place[10];	// ����
		zhibiaofenlei  Zhibiaofenlei;
		zhibiao  Zhibiao;
		chanye *Next;
		void Input()
		{
			cout<<"\t\t��������ݣ�";
			cin>>time;
			cout<<"\t\t�����������";
			cin>>area;
			cout<<"\t\t����������";
			cin>>place;
		}


};



int main()
{

	return 0;
}

