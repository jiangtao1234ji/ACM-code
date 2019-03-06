#include<stdio.h>
#include<cstdio>  
#include<cstring>  
#include<iostream>  
#include<queue>  
#include<vector>  
#include<cmath>  
#include<algorithm>  
#include<malloc.h>
#include <stdbool.h>
#include<stdlib.h>  
#include <string.h> 


#define m 101
#define n 100
#define height 70
#define maxwidth 48
#define minwidth 17
#define width 32
#define yidth 21
#define stopy 21
#define maxn 640
#define min(x,y)  ( x<y?x:y )
#define max(x,y)  ( x>y?x:y )

float alltime = 10;
float dt = 0.2;
float to = 0;
float dmin = 0.5;
float k = 0.32;
float r2 = 0.04;
int num = 640;
float W[maxn][maxn];
int lx[maxn], ly[maxn];
int left[maxn];
bool s[maxn], t[maxn];
int arr[m][n] = { 0 };
int stoppoint[width][yidth][height];

struct point {
	float x;
	float y;
	float z;
	
};
struct speed {
	float vx;
	float vy;
	float vz;
};

void startup()
{
    //int stoppoint[width][yidth][height];
	for (int i = minwidth; i <maxwidth ; i++)
	{
		for (int j = (-(stopy-1)/2); j <=((stopy-1)/2); j++)
		{   if (j!=0)
		   {
			stoppoint[i][j][0] = 9;//9?????;
		   }

		}
	}

}//????????

int zuobiao()
{
	const char* iallfp = "1.txt";
	//printf(s);
	FILE*fp;
	int i, j, k;
	fopen_s(&fp, "1.txt", "r");
	if (NULL == fp)
	{
		printf("failed to open dos.txt\n");
		return 1;
	}
	//int arr[m][n] = { 0 };
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fscanf_s(fp, "%d", &(arr[i][j]));
		}
		fscanf_s(fp, "\n");
	}
	fclose(fp);
	printf("\n");
	return 0;
}//???????????arr


void xinputinfo(struct point info[]) //xgroup???????
{
	int k = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 1)
			{
				//printf("%d   %d\n", i, j);
				info[k].x = j;
				info[k].y = 0;
				info[k].z = 70-i;
				//info[k].num1 = k;
				k++;
			}
		}
	}
}
void yinputinfo(struct point info[])//ygroup???????
{
	int k = 0;
	for (int i = minwidth; i < maxwidth; i++)
	{
		for (int j = (-(stopy - 1) / 2); j <=((stopy - 1) / 2); j++)
		{
			if (stoppoint[i][j][0] == 9)//9?????;
			{
				int a = i;
				int b = j;
				info[k].x = a;
				info[k].y = b;
				info[k].z = 0;
				//info[k].num1 = k;
				k++;
			}
		}
	}
}
void sinputinfo(struct speed info[])//speed01???????
{
	for (int i = 0; i < num; i++)
	{
		info[i].vx = 0;
		info[i].vy = 0;
		info[i].vz = 0;
	}
}





bool match(int i)   //????
{
	s[i] = true;
	for (int j = 0; j < num; j++)
	{
		if ((lx[i] + ly[j]) == W[i][j] && !t[j])
		{
			t[j] = true;
			if (!left[j] || match(left[j]))
			{
				left[j] = i;
				return true;
			}
		}
	}
	return false;
} 

void update()   //?????
{
	int a = (1 << 30);
	for (int i = 0; i < num; i++)
	{
		if (s[i])
		{
			for (int j = 0; j < num; j++)
			{
				if (!t[j])
				{
					a = min(a, (lx[i] + ly[j] - W[i][j]));

				}
			}

		}
	}
	for (int i = 0; i < num; i++)
	{
		if (s[i])
			lx[i] -= a;
		if (t[i])
			ly[i] += a;
	}
}

void fixpoint(struct point xgroup[], struct point ygroup[]) //?????????????
{
	for (int i = 0; i < maxn; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			W[i][j] = static_cast<int>(-sqrt((xgroup[i].x - ygroup[j].x)*(xgroup[i].x - ygroup[j].x) + (xgroup[i].y - ygroup[j].y)*(xgroup[i].y - ygroup[j].y)+ (xgroup[i].z - ygroup[j].z)*(xgroup[i].z - ygroup[j].z)));
		}
	}

	for (int i = 0; i < num; i++)
	{
		left[i] = lx[i] = ly[i] = 0;
		for (int j = 0; j < num; j++)
		{
			lx[i] = min(lx[i], W[i][j]);
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (;;)
		{
			for (int j = 0; j < num; j++)
			{
				s[j] = t[j] = 0;
			}
			if (match(i))
			{
				break;
			}
			else
			{
				update();
			}
		}

	}
	//for (int i = 0; i < n; i++)
		//printf("%d  %d\n", left[i], i);



}

void speedz(struct speed speed01[], struct point xgroup[],struct point ygroup[])//??speedz
{
	for (int i = 0; i < maxn; i++)
	{
		speed01[i].vz = (xgroup[i].z - ygroup[i].z) / alltime;
		
	}
}

void speednow(struct speed speed01[], struct point xgroup[], struct point ygroup[])//??????
{
	for (int i = 0; i < maxn; i++)
	{
		speed01[i].vx = (xgroup[i].x - ygroup[i].x) / (alltime - to*dt);
		speed01[i].vy = (xgroup[i].y - ygroup[i].y) / (alltime - to*dt);
		
	}
	to += 1;
}

void movefly(struct speed speed01[], struct point ygroup[])//??????
{
	for (int i = 0; i < maxn; i++)
	{
		ygroup[i].x += ((speed01[i].vx)*dt);
		ygroup[i].y += ((speed01[i].vy)*dt);
		ygroup[i].z += ((speed01[i].vz)*dt);
		//	printf("%f~", ygroup[i].x);
	}
	
}

void xiuzheng(struct speed speed01[], struct point xgroup[], struct point ygroup[])//??????,????
{
	for (int i = 0; i < maxn; i++)
	{
		for (int j = i + 1; j < maxn; j++)
		{
			float d2 = pow((ygroup[i].x - ygroup[j].x), 2) + pow((ygroup[i].y - ygroup[j].y), 2);
			float d = sqrt(d2);
			//printf("%f  %d %d\n ", d, i, j);

			if (d < dmin&&abs(ygroup[i].z-ygroup[j].z)<=0.3)
			{
				float vchoose1 = k*sqrt(pow((speed01[i].vx), 2) + pow((speed01[i].vy), 2));
				float vchoose2 = k*sqrt(pow((speed01[j].vx), 2) + pow((speed01[j].vy), 2));
				//printf("%f  %d %d\n ", speed01[i].vx,i,j );

				float dir[3];

				dir[0] = ((ygroup[i].x - ygroup[j].x) / d);
				dir[1] = ((ygroup[i].y - ygroup[j].y) / d);
				dir[2] = 0;

				speed01[i].vx += (vchoose1*dir[0] / (d - r2));
				speed01[i].vy += (vchoose1*dir[1] / (d - r2));

				speed01[j].vx -= (vchoose2*dir[0] / (d - r2));
				speed01[j].vy -= (vchoose2*dir[1] / (d - r2));

			}
		}
	}
}

//void change()
//{
//	int arr2[m][n];
//	for(int i=0;i<m;i++)
//		for (int j = 0; j < n; j++)
//		{
//			arr2[m][n]=arr[][]
//		}
//}

int main()
{
	//bool match();
	//void update();
	startup();
	zuobiao();
	//makestruct();
	struct point *xgroup = (struct point *)malloc(sizeof(struct point) * num);
	xinputinfo(xgroup);
	struct point *ygroup = (struct point *)malloc(sizeof(struct point) * num);
	yinputinfo(ygroup);
	struct speed *speed01 = (struct speed *)malloc(sizeof(struct speed) * num);
	sinputinfo(speed01);

	xinputinfo(xgroup);
	yinputinfo(ygroup);
	sinputinfo(speed01);
	fixpoint(xgroup, ygroup);
	speedz(speed01, xgroup, ygroup);
	/*for (int i = 0; i < 620; i++)
	{
		int  a = i;

		printf("?? %d ??[%.1f   %.1f   %.1f]  ???? %d ??[%.1f   %.1f   %.1f]  \n", left[a], xgroup[left[a]].x, xgroup[left[a]].y, xgroup[left[a]].z, a, ygroup[a].x, ygroup[a].y, ygroup[a].z);
	}*/

	
	for (int i = 0; i <50; i++)
	{
		for (int a = 0; a < maxn; a += 64)
		{
			int k = a;
			printf("%d???%.1f??? %.1f %.1f %.1f \n",k,to*dt, ygroup[k].x, ygroup[k].y, ygroup[k].z);
		}
		
		int k = 60;
		printf("%d???%.1f??? %.1f %.1f %.1f \n", k, to*dt, ygroup[k].x, ygroup[k].y, ygroup[k].z);
		xiuzheng(speed01, xgroup, ygroup);
		speednow(speed01, xgroup, ygroup);
		movefly(speed01, ygroup);
		
	}
	/*for (int i = 0; i < maxn; i++)
	{
	int  a = i;

	printf(" %d ?????[%f   %.1f   %.1f]  \n",  a, ygroup[a].x, ygroup[a].y, ygroup[a].z);
	}*/
}


