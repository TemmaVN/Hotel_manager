#include "HoaDon.h"

HoaDon::HoaDon()
{
	this->MaHoaDon = "";
	this->NgayHoaDon = "";
}

HoaDon::HoaDon(string HoTen, int Tuoi, string CCCD, int SNThue, char LoaiPhong, string MaHoaDon, string NgayHoaDon) :ThuePhong(HoTen, Tuoi, CCCD, SNThue, LoaiPhong)
{
	this->MaHoaDon = MaHoaDon;
	this->NgayHoaDon = NgayHoaDon;
}

void HoaDon::SetMHD(string MaHoaDon)
{
	this->MaHoaDon = MaHoaDon;
}

void HoaDon::SetNHD(string NgayHoaDon)
{
	this->NgayHoaDon = NgayHoaDon;
}

string HoaDon::GetNHD()
{
	return this->NgayHoaDon;
}

string HoaDon::GetMHD()
{
	return this->MaHoaDon;
}

void HoaDon::XuatTTHoaDon()
{
	cout << "Cac thong tin cua hoa don la : " << endl;
	cout << "Ma hoa don la : " << this->MaHoaDon << endl;
	cout << "Ngay hoa don la : " << this->NgayHoaDon << endl;
	XuatTTPhong();
	cout << "Tong gia tien phai tra la " << ThuePhong::GiaPhong();
}
