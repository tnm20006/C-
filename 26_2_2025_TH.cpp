#include <bits/stdc++.h>
using namespace std;
class th
{
    vector <int> a;
public:
    th operator+ (th b)
    {
        th t;
        for(int i =0;i < this->a.size();i++)
            t.a.push_back(a[i]);
        for(int i = 0;i < b.a.size();i++)
            if(find(t.a.begin(),t.a.end(),b.a[i])==t.a.end())
                t.a.push_back(b.a[i]);
        sort(t.a.begin(),t.a.end());
        return t;
    }
    friend istream& operator >>(istream& is,th &b);
    friend ostream& operator <<(ostream& os, th b);
    th operator-(th b)
    {
        th t;
        for (int i = 0; i < a.size(); i++)
            if(find(b.a.begin(),b.a.end(),a[i])==b.a.end())
                t.a.push_back(a[i]);
        sort(t.a.begin(),t.a.end());
        return t;
    }
    th operator*(th b)
    {
        th t;
        for(int i = 0;i< a.size();i++)
            if(find(a.begin(),a.end(),b.a[i])!= a.end())
                t.a.push_back(b.a[i]);
        sort(t.a.begin(),t.a.end());
        return t;
    }
};
ostream& operator<<(ostream& os,th b)
{
    cout <<"{ ";
    for(int i = 0; i < b.a.size(); i++)
        cout <<b.a[i]<<" ";
    cout <<"}";
    return os;
}
istream& operator >>(istream& is,th &b)
{

    int x;
    while(1)
    {
        cout <<"Them so khac 0 vao TH: ";
        cin >> x;
        if(x==0)
            break;
        if(find(b.a.begin(),b.a.end(),x)==b.a.end())
            b.a.push_back(x);
        else
            cout <<"\nDa co " << x <<" trong TH." << endl;
    }
    sort(b.a.begin(),b.a.end());
    cout <<"Da nhap xong. " << endl;
    return is;
}
ostream& operator <<(ostream& os, th b);
int main()
{
    th a,b,cong,tru,nhan;
    cin >> a;
    cin >> b;
    cong = a + b;
    tru = a - b;
    nhan = a * b;
    cout <<"Tong 2 TH = " << cong << endl;
    cout <<"Hieu 2 TH = " << tru << endl;
    cout <<"Tich 2 TH = " << nhan <<endl;
    return 0;
}
