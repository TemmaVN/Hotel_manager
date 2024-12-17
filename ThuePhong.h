#ifndef THUEPHONG_H
#define THUEPHONG_H
#include"Library.h"
#include"KhachThue.h"

class ThuePhong:public KhachThue
{
protected:
	int SNThue;
	char LoaiPhong;
public:
	ThuePhong();
	ThuePhong(string HoTen, int Tuoi, string CCCD, int SNThue, char LoaiPhong);
	void SetSNThue(int SNThue);
	void SetLoaiPhong(char LoaiPhong);
	int GetSNT();
	char GetLP();
	void XuatTTPhong();
	long long GiaPhong();
};

#endif // !THUEPHONG_H



