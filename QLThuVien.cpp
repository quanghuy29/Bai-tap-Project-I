#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class SinhVien
{
private:
    string name, Class;
    int age;

public:
    SinhVien(string name, int age, string Class)
    {
        this->name = name;
        this->age = age;
        this->Class = Class;
    }
    SinhVien()
    {
        this->name = "";
        this->age = 0;
        this->Class = "";
    }
    ~SinhVien()
    {
        this->name = "";
        this->age = 0;
        this->Class = "";
    }
    void set()
    {
        cin.ignore();
        cout << "Nhap Ten Sinh Vien: ";
        getline(cin, this->name);

        cout << "Nhap Tuoi: ";
        cin >> this->age;

        cin.ignore();
        cout << "Nhap Lop: ";
        getline(cin, this->Class);
    }
    void get()
    {
        cout << "Ho ten sinh vien: " << this->name << endl;
        cout << "Tuoi: " << this->age << endl;
        cout << "Lop: " << this->Class << endl;
    }
};

class PhieuMuon
{
private:
    int idPhieu, borrowDate, returnDate, idSach;
    SinhVien sinhVien;

public:
    PhieuMuon(int idPhieu, int borrowDate, int returnDate, int idSach, SinhVien sv)
    {
        this->idPhieu = idPhieu;
        this->borrowDate = borrowDate;
        this->returnDate = returnDate;
        this->idSach = idSach;
        this->sinhVien = sv;
    }
    PhieuMuon()
    {
        this->idPhieu = 0;
        this->borrowDate = 0;
        this->returnDate = 0;
        this->idSach = 0;
        this->sinhVien = SinhVien();
    }
    ~PhieuMuon()
    {
        this->idPhieu = 0;
        this->borrowDate = 0;
        this->returnDate = 0;
        this->idSach = 0;
        this->sinhVien = SinhVien();
    }
    void set()
    {
        cout << "Nhap phieu muon: ";
        cin >> this->idPhieu;
        cout << "Nhap ngay muon: ";
        cin >> this->borrowDate;
        cout << "Nhap ngay tra: ";
        cin >> this->returnDate;
        cout << "Nhap ma sach: ";
        cin >> this->idSach;

        sinhVien.set();
    }
    void get()
    {
        cout << "Ma phieu muon: " << this->idPhieu << endl;
        cout << "Ngay muon: " << this->borrowDate << endl;
        cout << "Ngay tra: " << this->returnDate << endl;
        cout << "Ma sach: " << this->idSach << endl;
        this->sinhVien.get();
        cout << "\n";
    }
    int getIdPhieu()
    {
        return this->idPhieu;
    }
};

class QLPhieuMuon
{
private:
    PhieuMuon pm[100];

public:
    void themPhieuMuon()
    {
        for (int i = 0; i < 100; i++)
        {
            if (pm[i].getIdPhieu() == 0)
            {
                pm[i].set();
                return;
            }
        }
        cout << "Full!\n";
    }
    void xoaPhieuMuon(int idPhieu)
    {
        for (int i = 0; i < 100; i++)
        {
            if (pm[i].getIdPhieu() == idPhieu)
            {
                pm[i].~PhieuMuon();
                break;
            }
        }
        cout << "Not found!\n";
    }
    void xemPhieu()
    {
        for (int i = 0; i < 100; i++)
        {
            if (pm[i].getIdPhieu() != 0)
            {
                cout << "-------\n";
                pm[i].get();
            }
        }
    }
};

int main()
{
    cout << "Bui Quang Huy 20183764\n";
    QLPhieuMuon qlpm = QLPhieuMuon();
    int funcNum;   
    while (1)
    {
        cout << "\n----1: them phieu----2: xoa phieu-----3: xem cac phieu muon----4: Thoat---\n";
        cout << "Nhap chuc nang: ";
        cin >> funcNum;
        if (funcNum == 1)
            qlpm.themPhieuMuon();
        else if (funcNum == 2)
        {
            int id;
            cout << "Nhap id phieu muon xoa: ";
            cin >> id;
            qlpm.xoaPhieuMuon(id);
        }
        else if (funcNum == 3)
            qlpm.xemPhieu();
        else if (funcNum == 4)
            break;
        else
            cout << "Nhap khong hop le!\n";
    }
}
