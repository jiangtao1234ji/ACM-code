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
		int tag; //标记删除   1 删除     0 未删
		int time;
		char area[10];  //地区
		char place[10];	// 区域
		zhibiaofenlei  Zhibiaofenlei;
		zhibiao  Zhibiao;
		chanye *Next;
		void Input()
		{
			cout<<"\t\t请输入年份：";
			cin>>time;
			cout<<"\t\t请输入地区：";
			cin>>area;
			cout<<"\t\t请输入区域：";
			cin>>place;
		}


};



int main()
{

	return 0;
}

