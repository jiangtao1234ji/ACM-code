#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;

struct stu {
	char name[20], student_id[20], yuan_xi[20], class_num[20], fudaoyuan[20], home[20], tel[20];
	float sco;
};
vector<stu> v;
bool cmp1 (stu x, stu y) {
	return strcmp(x.student_id,y.student_id) == 1;
}
bool cmp2 (stu x, stu y) {
	return strcmp(x.student_id,y.student_id) == -1;
}
bool cmp3 (stu x, stu y) {
	return x.sco > y.sco;
}
bool cmp4 (stu x, stu y) {
	return x.sco < y.sco;
}
void out(stu a) {
	printf("ѧ�ţ�%-10s ",a.student_id);
	printf("������%-8s ",a.name);
	printf("Ժϵ��%-12s ",a.yuan_xi);
	printf("�༶��%-8s ",a.class_num);
	printf("����Ա:%-8s ",a.fudaoyuan);
	printf("������%-8s ",a.home);
	printf("�绰��%-11s ",a.tel);
	printf("��Ȩ�ɼ���%.1f\n",a.sco);
}
void get() {
	FILE *fp;
	struct stu a;
	fp = fopen("student.dat","r");
	while(fread(&a,sizeof(struct stu),1,fp) == 1) {
		v.push_back(a);
	}
	fclose(fp);
}
void save() {
	FILE *fp;
	struct stu a;
	int size = sizeof(stu);
	fp = fopen("student.dat","w");
	fclose(fp);
	fp = fopen("student.dat","a+");
	for(stu i : v) {
		fwrite(&i,sizeof(struct stu),1,fp);
	}
	fclose(fp);
}
void add_student() {

	stu a;
	cout << "\t\t\t\t\t���� ѧ�� Ժϵ �༶ ����Ա ���� �绰 ��Ȩ�ɼ� \n";
	cout << "\t\t\t\t\tѧ�ź�����Ϊ��������಻�������#����\n";

	cout << "����������\n";
	scanf("%s",a.name);

	cout << "����ѧ�ţ�\n";
	scanf("%s",a.student_id);

	cout << "����Ժϵ��\n";
	scanf("%s",a.yuan_xi);

	cout << "����༶��\n";
	scanf("%s",a.class_num);

	cout << "���븨��Ա��\n";
	scanf("%s",a.fudaoyuan);

	cout << "���뻧�������磺�����Ͼ�)��\n";
	scanf("%s",a.home);

	cout << "����绰��\n";
	scanf("%s",a.tel);

	cout << "�����Ȩ�ɼ�������һλС������\n";
	cin >> a.sco;

	v.push_back(a);
}
void delete_student() {
	string s;
	cout  << "������ѧ�ţ�\n";
	cin >> s;
	for(int i = 0; i < v.size(); i++) {
		if(s == v[i].student_id) {
			out(v[i]);
			cout << "ȷ��ɾ����y,��ɾ����n:\n";
			char c;
			cin >> c;
			if(c == 'y') {
				v.erase(v.begin() + i);
				cout << "��ɾ��\n";
				return ;
			}
		}
	}
	cout << "���޴���\n";
}
void modify_student() {
	char s[20], news[20];
	float newsco;
	cout  << "������ѧ�ţ�\n";
	scanf("%s",s);
	for(int i = 0; i < v.size(); i++) {
		if(strcmp(s,v[i].student_id) == 0 ) {
			stu a = v[i];
			out(v[i]);
			char c;
			cout << "�޸�����y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "������������:\n";
				scanf("%s",news);
				strcpy(a.name, news);
			}
			cout << "�޸�ѧ��y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "��������ѧ��:\n";
				scanf("%s",news);
				strcpy(a.name, news);
			}
			cout << "�޸�Ժϵy/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "��������Ժϵ:\n";
				scanf("%s",news);
				strcpy(a.yuan_xi , news);
			}
			cout << "�޸İ༶y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "�������°༶:\n";
				scanf("%s",news);
				strcpy(a.class_num, news);
			}

			cout << "�޸ĸ���Աy/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "�������¸���Ա:\n";
				scanf("%s",news);
				strcpy(a.fudaoyuan, news);
			}

			cout << "�޸Ļ���y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "�������»���:\n";
				scanf("%s",news);
				strcpy(a.home , news);
			}
			cout << "�޸ĵ绰y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "�������µ绰:\n";
				scanf("%s",news);
				strcpy(a.tel , news);
			}
			cout << "�޸ļ�Ȩ�ɼ�y/n?:\n";
			cin >> c;
			if(c == 'y') {
				cout << "�������¼�Ȩ�ɼ�:\n";
				cin >> newsco;
				a.sco = newsco;
			}
			v[i] = a;
			return ;
		}
	}
	cout << "���޴���\n";
}
void query_student() {
	char s[20];
	cout << "����������ѧ�ţ�\n";
	scanf("%s",s);
	int flag = 0;
	for(int i = 0; i < v.size(); i++) {
		if(strcmp(s, v[i].student_id) == 0 || strcmp(s, v[i].name) == 0) {
			out(v[i]);
			flag = 1;
		}
	}
	if(flag == 0) cout << "���޴���\n";
}
void sort_out_student() {
	int n;
	cout << "\t\t\t\t\t\t\t1.��ѧ�Ž�������\n";
	cout << "\t\t\t\t\t\t\t2.��ѧ����������\n";
	cout << "\t\t\t\t\t\t\t3.����Ȩ�ɼ���������\n";
	cout << "\t\t\t\t\t\t\t4.����Ȩ�ɼ���������\n";
	cout << "���������1-4\n";
	cin >> n;
	if(n == 1) sort(v.begin(), v.end(), cmp1);
	if(n == 2) sort(v.begin(), v.end(), cmp2);
	if(n == 3) sort(v.begin(), v.end(), cmp3);
	if(n == 4) sort(v.begin(), v.end(), cmp4);

	if(v.size() == 0) {
		cout << "���ݿ����޼�¼\n";
		return ;
	}
	for(int i = 0; i < v.size(); i++ ) {
		out(v[i]);
		cout << endl;
	}
}
void ruin_all () {
	cout << "ȷ�����ϵͳ���ݣ��˲������ɳ���\n";
	cout << "ȷ�ϣ�y/n?\n";
	char c;
	cin >> c;
	if(c == 'y') {
		vector<stu> a;
		v = a;
		cout << "ϵͳ���������\n";
	}
}
int main() {
	get();
	int choice = 9;
	while(choice != 7) {
		system("pause");
		system("cls");
		cout << "\t\t\t\t\t\t********ѧ����Ϣ����ϵͳ********\n";
		cout << "\t\t\t\t\t\t\t1.����ѧ����Ϣ\n";
		cout << "\t\t\t\t\t\t\t2.ɾ��ѧ����Ϣ\n";
		cout << "\t\t\t\t\t\t\t3.�޸�ѧ����Ϣ\n";
		cout << "\t\t\t\t\t\t\t4.��ѯѧ����Ϣ\n";
		cout << "\t\t\t\t\t\t\t5.�������ѧ����Ϣ\n";
		cout << "\t\t\t\t\t\t\t6.���ϵͳ����\n";
		cout << "\t\t\t\t\t\t\t7.���沢�˳�\n";
		cout << "���������1-7:\n";
		string is_correct_in;
		cin >> is_correct_in;
		cout << endl;
		if(is_correct_in.size() == 1)	choice =is_correct_in[0] - '0';
		else							choice = 8;
		if(choice < 1 || choice > 7)
			cout << "�Բ������������Ų���1-7�У��������룺\n";
		if(choice == 1) add_student();
		if(choice == 2) delete_student();
		if(choice == 3) modify_student();
		if(choice == 4) query_student();
		if(choice == 5) sort_out_student();
		if(choice == 6)	ruin_all();
		save();
	}
	return 0;
}
