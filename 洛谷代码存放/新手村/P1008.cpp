#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	for(int i=100; i<= 999; ++i)
	{
		int h = i, h1, h2, h3;
		h1 = h%10;
		h/=10;
		h2 = h%10;
		h/=10;
		h3 = h%10;
		h/=10;
		if(h1 != 0 && h2 != 0 && h3 != 0 && h1 != h2 && h2 != h3 && h1 != h3)
		{
			for(int j=100; j<= 999; ++j)
			{
				int l = j, l1, l2, l3;
				l1 = l%10;
				l/=10;
				l2 = l%10;
				l/=10;
				l3 = l%10;
				l/=10;
				if(l1 != 0 && l2 != 0 && l3 != 0 && l1 != l2 && l2 != l3 && l1 != l3)
				{
					for(int k=100; k<= 999; ++k)
					{
						if(k == 3*i && j == 2*i)
						{
							int r = k, r1, r2, r3;
							r1 = r%10;
							r/=10;
							r2 = r%10;
							r/=10;
							r3 = r%10;
							r/=10;
							if(r1 != 0 && r2 != 0 && r3 != 0 && r1 != r2 && r2 != r3 && r1 != r3)
								if(h1!=l1&&h1!=l2&&h1!=l3&&h2!=l1&&h2!=l2&&h2!=l3&&h3!=l1&&h3!=l2&&h3!=l3
								        &&h1!=r1&&h1!=r2&&h1!=r3&&h2!=r1&&h2!=r2&&h2!=r3&&h3!=r1&&h3!=r2&&h3!=r3
								        &&r1!=l1&&r1!=l2&&r1!=l3&&r2!=l1&&r2!=l2&&r2!=l3&&r3!=l1&&r3!=l2&&r3!=l3)
									cout<<i<<" "<<j<<" "<<k<<endl;

						}
					}
				}
			}
		}
	}
	return 0;
}

