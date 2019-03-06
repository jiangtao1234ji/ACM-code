 #include <iostream>  
#include <math.h>  
  
  
  
  
using namespace std;  
void change(double x);  
  
  
void change(double x)  
{  
    double n = 0;                                            //x???????  
    int i = 0;                                          //n???x*2?????  
    int j = 0;  
    int a[8];  
    for (int i = 0; i < 8; i++)  
    {  
        a[i] = 0;  
    }  
    if (x<0) {  
        x = -x;  
        j = 1;  
    }  
    while (i<8)  
    {  
        int k;  
        n = x * 8;  
        k =floor(n);  
        a[i] = k;  
        x = n - k;  
        i = i + 1;  
          
    }  
    if (j == 1)  
    {  
        cout << "-.";  
    }  
    else  
    {  
        cout << "+.";  
    }  
    for (int k = 0; k < 8;)  
    {  
        for (int l = 0; l < 4; l++)  
        {  
            cout << a[k];  
            k++;  
        }  
        if (k != 8)  
        {  
            cout << " ";  
        }  
    }  
  
  
}  
  
  
  
  
int main()  
{  
    double n;  
    while (cin >> n)                          //??????????????  
    {  
        change(n);  
        cout << '\n';  
    }  
    return 0;  
}  
