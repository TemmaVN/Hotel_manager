#ifndef KHACHTHUE_H
#define KHACHTHUE_H
#include"Library.h"

class KhachThue
{
protected:
	string HoTen;
	int Tuoi;
	string CCCD;
public:
	KhachThue();
	KhachThue(string HoTen, int Tuoi, string CCCD);
	void SetHoten(string HoTen);
	void SetTuoi(int Tuoi);
	void SetCCCD(string CCCD);
	string GetTen();
	int GetTuoi();
	string GetCCCD();
	void XuatKhach();
};


#endif // !KHACHTHUE_H



