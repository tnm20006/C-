#include <bits/stdc++.h>
using namespace std;
class phim
{
private:
    char title[100];
    int year;
    char director[100];
public:
    void settitle(char a[])
    {
        cout <<"Nhap ten phim: ";
        cin >> title;
    }
    void setyear(int a)
    {
        cout <<"NHap nam sx: ";
        cin >> year;
    }
    void setdirect(char a[])
    {
        fflush(stdin);
        cout <<"Nhap dao dien: ";
        cin >> director;
    }
    void nhap()
    {
        settitle(title);
        setyear(year);
        setdirect(director);
    }
    void xuat()
    {
        cout <<"-> Ten phim: " << title << endl;
        cout <<"-> Nam phat hanh: " << year << endl;
        cout <<"-> Dao dien: " << director << endl;
    }
    bool comp(phim a, phim b)
    {
        if (a.year == b.year)
            return true;
        return false;
    }
};
int main()
{
    phim a,b,c;
    a.nhap();
    a.xuat();
    b.nhap();
    b.xuat();
    if (c.comp(a,b) == true)
    {
        cout <<"2 bo phim chung nam san xuat";
    }
}
