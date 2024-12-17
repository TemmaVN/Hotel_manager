#include "ThuePhong.h"

ThuePhong::ThuePhong()
{
	this->LoaiPhong = '.';
	this->SNThue = 0;
}

ThuePhong::ThuePhong(string HoTen, int Tuoi, string CCCD, int SNThue, char LoaiPhong):KhachThue(HoTen, Tuoi, CCCD)
{
	this->LoaiPhong = LoaiPhong;
	this->SNThue = SNThue;
}

char ThuePhong::GetLP()
{
	return this->LoaiPhong;
}

int ThuePhong::GetSNT()
{
	return this->SNThue;
}

void ThuePhong::SetLoaiPhong(char LoaiPhong)
{
	this->LoaiPhong = LoaiPhong;
}

void ThuePhong::SetSNThue(int SNThue)
{
	this->SNThue = SNThue;
}

void ThuePhong::XuatTTPhong()
{
	cout << "Thong tin Thue phong la : " << endl;
	XuatKhach();
	cout << "Loai phong la : " << this->LoaiPhong << endl;
	cout << "So ngay thue la : " << this->SNThue << endl;
}

long long ThuePhong::GiaPhong()
{
	if (this->LoaiPhong == 'A') return this->SNThue * 500;
	else if (this->LoaiPhong == 'B') return this->SNThue * 300;
	else if (this->LoaiPhong == 'C') return this->SNThue * 100;
	else return -1;
}