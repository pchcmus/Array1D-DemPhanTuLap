/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void nhapMang(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
}

void xuatMang(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}



int demLapLai(int a[], int n)
{
    int kq = 0;
    bool check;
    bool check2;
    for(int i=0; i<n; i++)
    {
        check = 0;
        check2 = 0;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] == a[i])
            {
                check = 1;
            }
        }
        
        if(check == 0)
        {
            for(int k=0; k<i; k++)
            {
                if(a[k] == a[i])
                {
                    check2 = 1;
                    kq++;
                }
            }
            
            if(check2)
                kq++;
        }
    }
    return kq;
}

int main()
{
    int a[100];
    int n;
    cin >> n;
    nhapMang(a, n);
    cout << demLapLai(a, n);
    //xuatMang(a, n);
    
    
}
