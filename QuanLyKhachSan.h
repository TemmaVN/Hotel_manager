#ifndef QUANLIKHACHSAN_H
#define QUANLIKHACHSAN_H
#include"ThuePhong.h"

class QuanLyKhachSan
{
private:
	vector<ThuePhong> DS;
	int sl;
public:
	QuanLyKhachSan();
	QuanLyKhachSan(int sl);
	void ThemPhong(ThuePhong tp);
	long long TongTien();
};

#endif // !QUANLIKHACHSAN



