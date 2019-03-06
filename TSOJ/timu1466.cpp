#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int L=110;
string mul(string a,string b)
{
	string s;
	int na[L],nb[L],nc[L],La=a.size(),Lb=b.size();
	fill(na,na+L,0);
	fill(nb,nb+L,0);
	fill(nc,nc+L,0);
	for(int i=La-1; i>=0; i--) na[La-i]=a[i]-'0';
	for(int i=Lb-1; i>=0; i--) nb[Lb-i]=b[i]-'0';
	for(int i=1; i<=La; i++)
		for(int j=1; j<=Lb; j++)
			nc[i+j-1]+=na[i]*nb[j];
	for(int i=1; i<=La+Lb; i++)
		nc[i+1]+=nc[i]/10,nc[i]%=10;
	if(nc[La+Lb]) s+=nc[La+Lb]+'0';
	for(int i=La+Lb-1; i>=1; i--)
		s+=nc[i]+'0';
	return s;
}

int main()
{
	int n;
	int p;
	string R;
	string ans;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>R>>p;
			ans=mul(R,R);
			for(int i=1; i<p; ++i)
				ans=mul(ans,R);
			cout<<ans<<endl;
		}
	}
	return 0;
}
