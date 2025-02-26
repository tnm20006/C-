#include <bits/stdc++.h>
using namespace std;

class TH
{
    vector <int> a;
public:
    friend istream &operator>>(istream &is, TH &b)
    {
        int n,x;
        cout << "\n -Nhap so luong phan tu: ";
        is>>n;
        cout << "\n -Nhap cac phan tu: ";

        for(int i=0; i<n; i++)
        {
            is>>x;

            b.a.push_back(x);
        }
        return is;
    }
    friend ostream &operator<<(ostream &os, TH b)
    {

        os << "\n -Day so: ";
        for(int i=0; i< b.a.size(); i++)
        {
            os<< b.a[i]<< " ";
        }
        return os;
    }
    TH operator+(const TH &b)
    {
        TH c;
        TH d;
        for(int i=0; i< a.size(); i++)
        {
            c.a.push_back(a[i]);
        }
        for(int j=0; j<b.a.size(); j++)
        {
            c.a.push_back(b.a[j]);
        }
        for(int i=0;i<c.a.size();i++)
        {
            for(int j=i+1;j<c.a.size();j++)
            {
                if(c.a[i]==c.a[j])
                {
                    c.a.erase(c.a.begin()+ j);
                    j--;
                }
            }
        }
        return c;
    }
    TH operator-(const TH &b)
    {
        TH c;
        for(int i=0; i< a.size(); i++)
        {
            c.a.push_back(a[i]);
        }
        for(int i=0; i< c.a.size();i++)
        {
            for(int j=0; j<b.a.size();j++)
            {
                if(c.a[i]==b.a[j])
                {
                    c.a.erase(c.a.begin()+i);
                    i--;
                    break;
                }
            }

        }
        return c;

    }
    TH operator*(const TH &b)
    {
        TH c;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.a.size(); j++)
            {
                if (a[i] == b.a[j])
                {
                    bool found = false;
                    for (int k = 0; k < c.a.size(); k++)
                    {
                        if (c.a[k] == a[i])
                        {
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        c.a.push_back(a[i]);
                    }
                    break;
                }
            }
        }
        return c;
    }


};
int main()
{
    TH a,b,giao,tong,hieu1,hieu2;
    cout << "\n 1. Nhap vao cac tap hop: ";
    cin>>a;
    cin>>b;
    cout << "\n 2. Tap hop vua nhap: ";
    cout << a;
    cout <<b;
    giao=a*b;
    cout << "\n 3. Giao cua hai tap hop: ";
    cout <<giao;
    cout << "\n 4. Tong cua hai tap hop: ";
    tong=a+b;
    cout << tong;
    cout << "\n 5. Hieu cua hai tap hop";
    hieu1=a-b;
    cout << hieu1;
    hieu2=b-a;
    cout << hieu2;
}
