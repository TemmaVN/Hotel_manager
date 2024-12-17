#include "KhachThue.h"

KhachThue::KhachThue()
{
	this->CCCD = "";
	this->HoTen = "";
	this->Tuoi = 0;
}

KhachThue::KhachThue(string HoTen, int Tuoi, string CCCD)
{
	this->CCCD = CCCD;
	this->HoTen = HoTen;
	this->Tuoi = Tuoi;
}

void KhachThue::SetHoten(string HoTen)
{
	this->HoTen = HoTen;
}

void KhachThue::SetTuoi(int Tuoi)
{
	this->Tuoi = Tuoi;
}

void KhachThue::SetCCCD(string CCCD)
{
	this->CCCD = CCCD;
}

string KhachThue::GetTen()
{
	return this->HoTen;
}

int KhachThue::GetTuoi()
{
	return this->Tuoi;
}

string KhachThue::GetCCCD()
{
	return this->CCCD;
}

void KhachThue::XuatKhach()
{
	cout << "Cac thong tin cua khach hang la : " << endl;
	cout << "Ho ten la : " << this->HoTen << endl;
	cout << this->Tuoi << " Tuoi " << endl;
	cout << "CCCD la : " << this->CCCD << endl;
}
