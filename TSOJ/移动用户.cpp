#include<iostream>
#include<string>
#include<algorithm>
#include<conio.h>
#include<fstream>
#include<set>
#include<cstring>


using namespace std;

struct user
{
	string ID;          //身份证
	set<string> tel;    //手机号
	string name;  	//用户名
	string sex;   	//性别
	int age;        	// 年龄
	string phe;   	//职业
	string place; 	//家庭住址
	user *nextuser;
};

class SInfo
{
		user *userListHead;
	public:
		SInfo();
		~SInfo();
		void creat();  					//新增用户
		user *userFindtel(string tel);  //电话查询
		user *userFindID(string ID);	//身份证查询
		int checktel(string tel, user *p);	//电话查询
		int checktel(string tel);      //重载
		user *userFindname(string name);  //用户名查询
		void telin(string ID);   	// 注册手机号
		void telout(string tel);  			// 注销手机号
		void userModify(string name);  //修改用户信息
		void userDelete(string name);  //删除用户信息
		void userCopy(user *ptemp, user *p);  //用户信息拷贝
		void usernameSort();    //用户名排序
		void userageSort();     //年龄排序
		void userIDSort(); 		//身份证排序
		void userinsert(string ID,string tel,string name,string sex,int age,string phe,string plac);		//插入用户信息
		void userRead();  	//从文件读入学生信息
		void userSave();	//保存用户信息到文件
		void userQuit();	//安全退出
		void ShowInfo();	//输出用户信息

};

//登陆界面
int Systemdoor()
{
	string username = "jiangtao", password = "111111";
	string name, temp;
	int number = 3;
	while (1)
	{
		cout << "                用户名:";
		cin >> name;
		cout << "                密码:";
		cin >> temp;
		if (name != username || temp != password)
		{
			number--;
			if (number >0)
			{
				cout << "          用户名/密码错误你还有" << number << "次机会" << endl;
			}
			else
				cout << "用户名/密码错误" << endl, exit(0);

		}
		else
		{
			cout << "********************密码正确********************" << endl<<endl;
			return 1;
		}
	}

}

void ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "******    	  移 动 营 业 厅     ******" << endl;
	cout << "******       0.安全退出系统          ******" << endl;
	cout << "******       1.文件读取用户信息:      ******" << endl;
	cout << "******       2.录入新的用户信息      ******" << endl;
	cout << "******       3.新增用户信息     ******" << endl;
	cout << "******       4.查询用户信息     ******" << endl;
	cout << "******       		4.1.电话号码查询     ******" << endl;
	cout << "******       		4.2.身份证查询     ******" << endl;
	cout << "******       		4.3.用户名查询     ******" << endl;
	cout << "******       5.注册手机号     ******" << endl;
	cout << "******       6.注销手机号     ******" << endl;
	cout << "******       7.修改用户信息     ******" << endl;
	cout << "******       8.删除用户信息     ******" << endl;
	cout << "******       9.输出现有用户信息    ******" << endl;
	cout << "******       		9.1.按用户名排序      ******" << endl;
	cout << "******       		9.2.按身份证排序      ******" << endl;
	cout << "******       		9.3.按年龄排序      ******" << endl;
	cout << "\n\t\n\t\t请选择:";
}

SInfo::SInfo()
{
	userListHead = new user;
	userListHead->nextuser = NULL;
}

SInfo::~SInfo()
{
	user *p;
	while (userListHead)
	{
		p = userListHead;
		userListHead = userListHead->nextuser;
		delete p;
	}
	userListHead = NULL;
}

void SInfo::creat()
{
	int n;
	user *p, *s;
	p=userListHead;
	cout<<"请输入新增用户人数:";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		s = new user;
		string tel;
		cout<<"请输入用户名，性别，年龄，身份证，手机号，职业， 家庭住址：";
		cin>>s->name>>s->sex>>s->age>>s->ID>>tel>>s->phe>>s->place;
		s->tel.insert(tel);
		s->nextuser=p->nextuser;
		p->nextuser=s;
		p=p->nextuser;
	}
	if(p == NULL)
	{
		cout<<"创建失败请重新创建"<<endl;
		creat();
	}
}

void SInfo::ShowInfo()
{
	user *p;
	for(p = userListHead->nextuser; p != NULL; p=p->nextuser)
	{
		cout << "用户名"<<'\t'<< p->name << endl <<"性别"<<'\t'<< p->sex << endl <<"年龄"<<'\t'<< p->age << endl <<"身份证"<<'\t' << p->ID << endl <<"手机号"<<'\t';
		for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
			cout<< *it << '\t' ;
		cout<<endl<<"职业"<<'\t' << p->phe << endl <<"家庭住址"<<'\t'<< p->place << '\t' << endl;
	}
}

//电话查询
int SInfo::checktel(string tel, user *p)
{
	for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
		if(*it == tel)
			return 1;
	return 0;
}

//重载
int SInfo::checktel(string tel)
{
	user *p;
	for(p = userListHead->nextuser; p != NULL; p=p->nextuser)
		for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
			if(*it == tel)
				return 1;
	return 0;
}

//电话号码查询
user *SInfo::userFindtel(string tel)
{
	user *p;
	p = userListHead->nextuser;
	if(2<tel.size()<14)
	{
		while(p != NULL && !checktel(tel,p))
		{
			p=p->nextuser;
		}
		if(p == NULL)
		{
			cout << "未找到用户信息！" << endl;
			return NULL;
		}
		else if(checktel(tel,p))
		{
			return p;
		}
		else
		{
			cout << "未找到用户信息！" << endl;
			return NULL;
		}
	}
	else
	{
		cout<<"兄弟你想干啥=-=";
	}
}

//身份证查询
user *SInfo::userFindID(string ID)
{
	user *p;
	p = userListHead->nextuser;
	while(p != NULL && !(p->ID == ID))
	{
		p=p->nextuser;
	}
	if(p == NULL)
	{
		cout << "未找到用户信息！" << endl;
		return NULL;
	}
	else if(p->ID == ID)
	{
		return p;
	}
	else
	{
		cout << "未找到用户信息！" << endl;
		return NULL;
	}
}

//用户名查询
user *SInfo::userFindname(string name)
{
	user *p;
	p = userListHead->nextuser;
	while(p != NULL && !(p->name == name))
	{
		p=p->nextuser;
	}
	if(p == NULL)
	{
		cout << "未找到用户信息！" << endl;
		return NULL;
	}
	else if(p->name == name)
	{
		return p;
	}
	else
	{
		cout << "未找到用户信息！" << endl;
		return NULL;
	}
}

//时间原因 想要修改的话就必须把所有的都改一边(手机除外)
void SInfo::userModify(string name)
{
	user *Itemuser = userFindname(name);
	if(Itemuser != NULL)
	{
		cout<<"请输入你想要修改的数据：";
		string ID;          //身份证
		string name;  //用户名
		string sex;   //性别
		int age;        // 年龄
		string phe;   //职业
		string place;
		cin>>name>>sex>>age>>ID>>phe>>place;
		Itemuser->name = name;
		Itemuser->sex = sex;
		Itemuser->age = age;
		Itemuser->ID = ID;
		Itemuser->phe = phe;
		Itemuser->place = place;
	}
}

void SInfo::telin(string ID)
{
	user *Itemuser = userFindID(ID);
	if(Itemuser != NULL)
	{
		string tel;
		cout<<"请输入你想新增的手机号：";
		cin>>tel;
		if(!checktel(tel))
			Itemuser->tel.insert(tel);
		else
		{
			cout<<"此手机号码已存在，请重新输入：";
			telin(ID);
		}
	}
}

void SInfo::telout(string tel)
{
	user *Itemuser = userFindtel(tel);
	if(Itemuser != NULL)
	{
		for (set<string>::iterator it = Itemuser->tel.begin(); it != Itemuser->tel.end(); ++it)
		{
			if(*it == tel)
			{
				Itemuser->tel.erase(it++);
				break;
			}
		}

	}
	else
		cout<<"注销失败，查无此电话号码";
}

void SInfo::userDelete(string name)
{
	user *Itemuser = userFindname(name);
	if(Itemuser != NULL)
	{
		for (set<string>::iterator it = Itemuser->tel.begin(); it != Itemuser->tel.end(); ++it)
			telout(*it);
	}
	user *p, *ptemp;
	p = userListHead;
	ptemp = p;
	while (p->nextuser && !(p->name == name))   //循环终止条件为p->nextstu不为空 而且没有找到相应的用户
	{
		ptemp = p;
		p = p->nextuser;
	}
	if (p != NULL)
	{
		ptemp->nextuser = p->nextuser;
		delete p;
	}
	else
	{
		cout << "未找到该用户信息！" << endl;
	}
}

void SInfo::userCopy(user *ptemp, user *p)  //拷贝用户信息(将p的信息拷贝到ptemp中)
{
	if (p == NULL)
	{
		cout << "拷贝目标为空！" << endl;
	}
	else
	{
		set<string>::iterator it2 = p->tel.begin();
		ptemp->ID = p->ID;
		for (set<string>::iterator it1 = ptemp->tel.begin(); it1 != ptemp->tel.end(),it2 != p->tel.end(); ++it1, ++it2)
			ptemp->tel = p->tel;
		ptemp->name = p->name;
		ptemp->sex = p->sex;
		ptemp->age = p->age;
		ptemp->phe = p->phe;
		ptemp->place = p->place;
		//ptemp->nextstu = p->nextstu;   //只是信息拷贝,next不能拷贝否则信息丢失
	}
}

void SInfo::usernameSort()
{
	for (user *p = userListHead->nextuser; p != NULL; p = p->nextuser)
	{
		for (user *q = userListHead->nextuser; q != NULL; q = q->nextuser)
		{
			if (p->name > q->name)
			{
				user *ptemp = new user;
				userCopy(ptemp, p);
				userCopy(p, q);
				userCopy(q, ptemp);
			}
		}
	}
}

void SInfo::userIDSort()
{
	for (user *p = userListHead->nextuser; p != NULL; p = p->nextuser)
	{
		for (user *q = userListHead->nextuser; q != NULL; q = q->nextuser)
		{
			if (p->ID > q->ID)
			{
				user *ptemp = new user;
				userCopy(ptemp, p);
				userCopy(p, q);
				userCopy(q, ptemp);
			}
		}
	}
}

void SInfo::userageSort()
{
	for (user *p = userListHead->nextuser; p != NULL; p = p->nextuser)
	{
		for (user *q = userListHead->nextuser; q != NULL; q = q->nextuser)
			if (p->age > q->age)
			{
				user *ptemp = new user;
				userCopy(ptemp, p);
				userCopy(p, q);
				userCopy(q, ptemp);
			}
	}
}

void SInfo::userinsert(string ID,string tel,string name,string sex,int age,string phe,string place)
{
	user *s,*p;
	s = new user;
	s->ID = ID;
	s->tel.insert(tel);
	s->name = name;
	s->sex = sex;
	s->age = age;
	s->phe = phe;
	s->place = place;
	p = userListHead;
	s->nextuser = p->nextuser;
	p->nextuser = s;
}

void SInfo::userRead()    //从文件读入数据
{
	user *p;
	p = userListHead;
	ifstream in("StudentList.txt");
	if (!in)
	{
		cout << "没有用户信息，请先录入用户信息!" << endl;
		return;
	}
	while (!in.eof())
	{
		string ID;
		string tel;
		string name;
		string sex;
		int age;
		string phe;
		string place;
		in >>name>>sex>>age>>ID>>tel>>phe>>place;
		userinsert(ID,tel,name,sex,age,phe,place);
	}
}

void SInfo::userSave()   //保存用户信息
{
	user *p;
	p = userListHead->nextuser;
	ofstream out("StudentList.txt");
	if (!out)
	{
		cout << "不能打开文件！" << endl;
		return;
	}
	while (p != NULL)
	{
		out << p->name << '\t' << p->sex << '\t' << p->age << '\t' << p->ID << '\t' ;
		for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
			out<< *it << '\t' ;
		out<< p->phe << '\t' << p->place << endl;
		p = p->nextuser;
	}
}

void SInfo::userQuit()   //用户信息写入文件
{
	char choice;
	cout << "是否保存用户信息:?(Y/N)";
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		userSave();
		cout << "用户信息已经保存" << endl;
	}
}

int main()
{
	string ID;
	string tel;
	string name;
	string sex;
	int age;
	string phe;
	string place;
	Systemdoor();
	int x = 100, pnum,pmath,peng,pyuwen;
	user *pfind;
	SInfo use;
	cout <<"   ******************************************" << endl;
	cout <<"   ******************************************" << endl;
	cout <<"   ******                              ******" << endl;
	cout <<"   ******   欢迎进入移 动 营 业 厅   ******" << endl;
	cout <<"   ******                              ******" << endl;
	cout <<"   ******************************************" << endl;
	cout <<"   ******************************************" << endl;
	while (x != 0)
	{
		system("pause");
		system("cls");
		ShowMenu();
		cin >> x;
		switch (x)
		{
			case 0:
				use.userSave();
				use.userQuit();
				break;
			case 1:
				use.userRead(); 
				cout << "读入用户信息表：" << endl;
				use.ShowInfo();
				break;
			case 2:
				use.creat();
				use.ShowInfo();
				cout << "请核对输入用户信息(Y/N)" << endl;
				use.userSave();
				char check;
				cin>>check;
				if(check == 'Y')
					break;
				else if(check == 'N')
				{
					cout<<"请重新输入"<<endl;
					use.creat();
				}
				else
				{
					cout<<"兄弟别搞事情=-="<<endl;
					use.userSave();
					break;
				}
			case 3:
				cout << "请输入添加用户信息：";
				cin>>name>>sex>>age>>ID>>tel>>phe>>place;
				use.userinsert(ID,tel,name,sex,age,phe,place);
				cout << "更新用户信息表..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 4:
				double k;
				cout<<"请输入要查询的方式：";
				cin>>k;
				if(k==4.1)
				{
					cout << "请输入要查找用户的电话号码：";
					cin >> tel;
					pfind = use.userFindtel(tel);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "查找用户信息：" << " 用户名 "<<pfind->name<<" 年龄 "<<pfind->age<<" 电话号码 ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" 身份证 "<<pfind->ID <<" 职业 " << pfind->phe <<" 家庭住址 " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
				if(k==4.2)
				{
					cout << "请输入要查找用户的身份证：";
					cin >> ID;
					pfind = use.userFindID(ID);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "查找用户信息：" << " 用户名 "<<pfind->name<<" 年龄 "<<pfind->age<<" 电话号码 ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" 身份证 "<<pfind->ID <<" 职业 " << pfind->phe <<" 家庭住址 " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
				if(k==4.3)
				{
					cout << "请输入要查找用户的用户名：";
					cin >> name;
					pfind = use.userFindname(name);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "查找用户信息：" << " 用户名 "<<pfind->name<<" 年龄 "<<pfind->age<<" 电话号码 ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" 身份证 "<<pfind->ID <<" 职业 " << pfind->phe <<" 家庭住址 " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
			case 5:
				cout<<"请输入你要注册号码的身份证：";
				cin>>ID;
				use.telin(ID);
				cout << "更新用户信息表..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 6:
				cout<<"请输入你要注销号码：";
				cin >> tel;
				use.telout(tel);
				cout << "更新用户信息表..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 7:
				cout << "请输入要修改用户的用户名：";
				cin >> name;
				use.userModify(name);
				cout << "修改成功！" << endl;
				cout << "更新用户信息表..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 8:
				cout << "请输入要删除用户的用户名：";
				cin >> name;
				use.userDelete(name);
				cout << "更新用户信息表..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 9:	
				double n;
				cout<<"请输入要选择的排序方式：";
				cin>>n;
				if(n == 9.1)
				{
					use.usernameSort();
					use.ShowInfo();
					use.userSave();
				}
				else if(n == 9.2)
				{
					use.userIDSort();
					use.ShowInfo();
					use.userSave();
				}
				else if(n == 9.3)
				{
					use.userageSort();
					use.ShowInfo();
					use.userSave();
				}
				break;
		}
	}

	system("pause");
	return 0;
}
