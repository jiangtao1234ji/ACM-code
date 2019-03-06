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
	string ID;          //���֤
	set<string> tel;    //�ֻ���
	string name;  	//�û���
	string sex;   	//�Ա�
	int age;        	// ����
	string phe;   	//ְҵ
	string place; 	//��ͥסַ
	user *nextuser;
};

class SInfo
{
		user *userListHead;
	public:
		SInfo();
		~SInfo();
		void creat();  					//�����û�
		user *userFindtel(string tel);  //�绰��ѯ
		user *userFindID(string ID);	//���֤��ѯ
		int checktel(string tel, user *p);	//�绰��ѯ
		int checktel(string tel);      //����
		user *userFindname(string name);  //�û�����ѯ
		void telin(string ID);   	// ע���ֻ���
		void telout(string tel);  			// ע���ֻ���
		void userModify(string name);  //�޸��û���Ϣ
		void userDelete(string name);  //ɾ���û���Ϣ
		void userCopy(user *ptemp, user *p);  //�û���Ϣ����
		void usernameSort();    //�û�������
		void userageSort();     //��������
		void userIDSort(); 		//���֤����
		void userinsert(string ID,string tel,string name,string sex,int age,string phe,string plac);		//�����û���Ϣ
		void userRead();  	//���ļ�����ѧ����Ϣ
		void userSave();	//�����û���Ϣ���ļ�
		void userQuit();	//��ȫ�˳�
		void ShowInfo();	//����û���Ϣ

};

//��½����
int Systemdoor()
{
	string username = "jiangtao", password = "111111";
	string name, temp;
	int number = 3;
	while (1)
	{
		cout << "                �û���:";
		cin >> name;
		cout << "                ����:";
		cin >> temp;
		if (name != username || temp != password)
		{
			number--;
			if (number >0)
			{
				cout << "          �û���/��������㻹��" << number << "�λ���" << endl;
			}
			else
				cout << "�û���/�������" << endl, exit(0);

		}
		else
		{
			cout << "********************������ȷ********************" << endl<<endl;
			return 1;
		}
	}

}

void ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "******    	  �� �� Ӫ ҵ ��     ******" << endl;
	cout << "******       0.��ȫ�˳�ϵͳ          ******" << endl;
	cout << "******       1.�ļ���ȡ�û���Ϣ:      ******" << endl;
	cout << "******       2.¼���µ��û���Ϣ      ******" << endl;
	cout << "******       3.�����û���Ϣ     ******" << endl;
	cout << "******       4.��ѯ�û���Ϣ     ******" << endl;
	cout << "******       		4.1.�绰�����ѯ     ******" << endl;
	cout << "******       		4.2.���֤��ѯ     ******" << endl;
	cout << "******       		4.3.�û�����ѯ     ******" << endl;
	cout << "******       5.ע���ֻ���     ******" << endl;
	cout << "******       6.ע���ֻ���     ******" << endl;
	cout << "******       7.�޸��û���Ϣ     ******" << endl;
	cout << "******       8.ɾ���û���Ϣ     ******" << endl;
	cout << "******       9.��������û���Ϣ    ******" << endl;
	cout << "******       		9.1.���û�������      ******" << endl;
	cout << "******       		9.2.�����֤����      ******" << endl;
	cout << "******       		9.3.����������      ******" << endl;
	cout << "\n\t\n\t\t��ѡ��:";
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
	cout<<"�����������û�����:";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		s = new user;
		string tel;
		cout<<"�������û������Ա����䣬���֤���ֻ��ţ�ְҵ�� ��ͥסַ��";
		cin>>s->name>>s->sex>>s->age>>s->ID>>tel>>s->phe>>s->place;
		s->tel.insert(tel);
		s->nextuser=p->nextuser;
		p->nextuser=s;
		p=p->nextuser;
	}
	if(p == NULL)
	{
		cout<<"����ʧ�������´���"<<endl;
		creat();
	}
}

void SInfo::ShowInfo()
{
	user *p;
	for(p = userListHead->nextuser; p != NULL; p=p->nextuser)
	{
		cout << "�û���"<<'\t'<< p->name << endl <<"�Ա�"<<'\t'<< p->sex << endl <<"����"<<'\t'<< p->age << endl <<"���֤"<<'\t' << p->ID << endl <<"�ֻ���"<<'\t';
		for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
			cout<< *it << '\t' ;
		cout<<endl<<"ְҵ"<<'\t' << p->phe << endl <<"��ͥסַ"<<'\t'<< p->place << '\t' << endl;
	}
}

//�绰��ѯ
int SInfo::checktel(string tel, user *p)
{
	for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
		if(*it == tel)
			return 1;
	return 0;
}

//����
int SInfo::checktel(string tel)
{
	user *p;
	for(p = userListHead->nextuser; p != NULL; p=p->nextuser)
		for (set<string>::iterator it = p->tel.begin(); it != p->tel.end(); ++it)
			if(*it == tel)
				return 1;
	return 0;
}

//�绰�����ѯ
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
			cout << "δ�ҵ��û���Ϣ��" << endl;
			return NULL;
		}
		else if(checktel(tel,p))
		{
			return p;
		}
		else
		{
			cout << "δ�ҵ��û���Ϣ��" << endl;
			return NULL;
		}
	}
	else
	{
		cout<<"�ֵ������ɶ=-=";
	}
}

//���֤��ѯ
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
		cout << "δ�ҵ��û���Ϣ��" << endl;
		return NULL;
	}
	else if(p->ID == ID)
	{
		return p;
	}
	else
	{
		cout << "δ�ҵ��û���Ϣ��" << endl;
		return NULL;
	}
}

//�û�����ѯ
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
		cout << "δ�ҵ��û���Ϣ��" << endl;
		return NULL;
	}
	else if(p->name == name)
	{
		return p;
	}
	else
	{
		cout << "δ�ҵ��û���Ϣ��" << endl;
		return NULL;
	}
}

//ʱ��ԭ�� ��Ҫ�޸ĵĻ��ͱ�������еĶ���һ��(�ֻ�����)
void SInfo::userModify(string name)
{
	user *Itemuser = userFindname(name);
	if(Itemuser != NULL)
	{
		cout<<"����������Ҫ�޸ĵ����ݣ�";
		string ID;          //���֤
		string name;  //�û���
		string sex;   //�Ա�
		int age;        // ����
		string phe;   //ְҵ
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
		cout<<"�����������������ֻ��ţ�";
		cin>>tel;
		if(!checktel(tel))
			Itemuser->tel.insert(tel);
		else
		{
			cout<<"���ֻ������Ѵ��ڣ����������룺";
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
		cout<<"ע��ʧ�ܣ����޴˵绰����";
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
	while (p->nextuser && !(p->name == name))   //ѭ����ֹ����Ϊp->nextstu��Ϊ�� ����û���ҵ���Ӧ���û�
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
		cout << "δ�ҵ����û���Ϣ��" << endl;
	}
}

void SInfo::userCopy(user *ptemp, user *p)  //�����û���Ϣ(��p����Ϣ������ptemp��)
{
	if (p == NULL)
	{
		cout << "����Ŀ��Ϊ�գ�" << endl;
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
		//ptemp->nextstu = p->nextstu;   //ֻ����Ϣ����,next���ܿ���������Ϣ��ʧ
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

void SInfo::userRead()    //���ļ���������
{
	user *p;
	p = userListHead;
	ifstream in("StudentList.txt");
	if (!in)
	{
		cout << "û���û���Ϣ������¼���û���Ϣ!" << endl;
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

void SInfo::userSave()   //�����û���Ϣ
{
	user *p;
	p = userListHead->nextuser;
	ofstream out("StudentList.txt");
	if (!out)
	{
		cout << "���ܴ��ļ���" << endl;
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

void SInfo::userQuit()   //�û���Ϣд���ļ�
{
	char choice;
	cout << "�Ƿ񱣴��û���Ϣ:?(Y/N)";
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		userSave();
		cout << "�û���Ϣ�Ѿ�����" << endl;
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
	cout <<"   ******   ��ӭ������ �� Ӫ ҵ ��   ******" << endl;
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
				cout << "�����û���Ϣ��" << endl;
				use.ShowInfo();
				break;
			case 2:
				use.creat();
				use.ShowInfo();
				cout << "��˶������û���Ϣ(Y/N)" << endl;
				use.userSave();
				char check;
				cin>>check;
				if(check == 'Y')
					break;
				else if(check == 'N')
				{
					cout<<"����������"<<endl;
					use.creat();
				}
				else
				{
					cout<<"�ֵܱ������=-="<<endl;
					use.userSave();
					break;
				}
			case 3:
				cout << "����������û���Ϣ��";
				cin>>name>>sex>>age>>ID>>tel>>phe>>place;
				use.userinsert(ID,tel,name,sex,age,phe,place);
				cout << "�����û���Ϣ��..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 4:
				double k;
				cout<<"������Ҫ��ѯ�ķ�ʽ��";
				cin>>k;
				if(k==4.1)
				{
					cout << "������Ҫ�����û��ĵ绰���룺";
					cin >> tel;
					pfind = use.userFindtel(tel);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "�����û���Ϣ��" << " �û��� "<<pfind->name<<" ���� "<<pfind->age<<" �绰���� ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" ���֤ "<<pfind->ID <<" ְҵ " << pfind->phe <<" ��ͥסַ " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
				if(k==4.2)
				{
					cout << "������Ҫ�����û������֤��";
					cin >> ID;
					pfind = use.userFindID(ID);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "�����û���Ϣ��" << " �û��� "<<pfind->name<<" ���� "<<pfind->age<<" �绰���� ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" ���֤ "<<pfind->ID <<" ְҵ " << pfind->phe <<" ��ͥסַ " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
				if(k==4.3)
				{
					cout << "������Ҫ�����û����û�����";
					cin >> name;
					pfind = use.userFindname(name);
					if(pfind == NULL)
					{
						use.userSave();
						break;
					}
					else
					{
						cout << "�����û���Ϣ��" << " �û��� "<<pfind->name<<" ���� "<<pfind->age<<" �绰���� ";
						for (set<string>::iterator it = pfind->tel.begin(); it != pfind->tel.end(); ++it)
							cout<<*it<<" ";
						cout<<" ���֤ "<<pfind->ID <<" ְҵ " << pfind->phe <<" ��ͥסַ " << pfind->place << endl;
						use.userSave();
						break;
					}
				}
			case 5:
				cout<<"��������Ҫע���������֤��";
				cin>>ID;
				use.telin(ID);
				cout << "�����û���Ϣ��..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 6:
				cout<<"��������Ҫע�����룺";
				cin >> tel;
				use.telout(tel);
				cout << "�����û���Ϣ��..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 7:
				cout << "������Ҫ�޸��û����û�����";
				cin >> name;
				use.userModify(name);
				cout << "�޸ĳɹ���" << endl;
				cout << "�����û���Ϣ��..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 8:
				cout << "������Ҫɾ���û����û�����";
				cin >> name;
				use.userDelete(name);
				cout << "�����û���Ϣ��..." << endl;
				use.ShowInfo();
				use.userSave();
				break;
			case 9:	
				double n;
				cout<<"������Ҫѡ�������ʽ��";
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
