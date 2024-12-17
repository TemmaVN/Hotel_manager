#ifndef HOADON_H
#define HOADON_H
#include"Library.h"
#include"ThuePhong.h"

class HoaDon:public ThuePhong
{
protected:
	string MaHoaDon;
	string NgayHoaDon;
public:
	HoaDon();
	HoaDon(string HoTen, int Tuoi, string CCCD, int SNThue, char LoaiPhong, string MaHoaDon, string NgayHoaDon);
	void SetMHD(string MaHoaDon);
	void SetNHD(string NgayHoaDon);
	string GetMHD();
	string GetNHD();
	void XuatTTHoaDon();
};

#endif // !HOADON_H


