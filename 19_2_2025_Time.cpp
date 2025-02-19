#include <bits/stdc++.h>
using namespace std;
class bai2
{
private:
    int gio, phut, giay;
public:
    void nhap()
    {
        do
        {
            cout << "Nhap gio: ";
            cin >> gio;
        }
        while (gio < 0 || gio >24);
        if (gio == 24)
            gio =0;
        do
        {
            cout << "Nhap phut: ";
            cin >> phut;
        }
        while (phut <0);
        do
        {
            cout << "Nhap giay: ";
            cin >> giay;
        }
        while (giay <0);
    }
    void xuat()
    {
        if (giay >= 60)
        {
            int temp = giay/60;
            phut = phut +temp;
            giay = giay -60*temp;
        }

        if (phut >= 60)
        {
            int temp = phut/60;
            gio = gio + temp;
            phut = phut - 60*temp;
        }
        if (gio >= 24)
        {
            if (gio==24)
            {
                gio = 0;
            }
            int temp = gio/24;
            gio = gio - temp*24;

        }
        cout << gio <<" gio " << phut <<" phut " << giay <<" giay" << endl;
    }
    bai2 operator+(bai2 a)
    {
        bai2 kq;
        kq.gio = gio + a.gio;
        kq.phut = phut +a.phut;
        kq.giay = giay+a.giay;
        if (kq.giay >= 60)
        {
            int temp = kq.giay/60;
            kq.phut = kq.phut + temp;
            kq.giay = kq.giay -60*temp;
        }

        if (kq.phut >= 60)
        {
            int temp = kq.phut/60;
            kq.gio = kq.gio + temp;
            kq.phut = kq.phut - 60*temp;
        }
        if (kq.gio >= 24)
        {
            if (kq.gio==24)
            {
                kq.gio = 0;
            }
            int temp = kq.gio/24;
            kq.gio = kq.gio - temp*24;
        }
        return kq;
    }
    bai2 operator-(bai2 a)
    {
        bai2 kq;
        kq.gio = gio - a.gio;
        kq.phut = phut -a.phut;
        kq.giay = giay-a.giay;
        if (kq.giay >= 60)
        {
            int temp = kq.giay/60;
            kq.phut += temp;
            kq.giay = kq.giay -60*temp;
        }

        if (kq.phut >= 60)
        {
            int temp = kq.phut/60;
            kq.gio = kq.gio + temp;
            kq.phut = kq.phut - 60*temp;
        }
        if (kq.gio >= 24)
        {
            if (kq.gio==24)
            {
                kq.gio = 0;
            }
            int temp = kq.gio/24;
            kq.gio = kq.gio - temp*24;
        }
        kq.gio=abs(kq.gio);
        kq.phut =abs(kq.phut);
        kq.giay=abs(kq.giay);
        return kq;
    }
    int soSanh(bai2 a, bai2 b)
    {
        int kq1 = a.gio*60*60 + a.phut*60+a.giay;
        int kq2 = b.gio*60*60 + b.phut*60+b.giay;
        if (kq1 > kq2)
            return 1;
        else if (kq1 < kq2)
            return -1;
        else
            return 0;
    }

};

int main()
{
    bai2 a, b, c, d, e;
    a.nhap();
    a.xuat();
    b.nhap();
    c = a+b;
    c.xuat();
    d = a-b;
    d.xuat();
    int kq = e.soSanh(a,b);
    cout << "-> KQ sau khi so sanh: " << kq;
    return 0;
}
