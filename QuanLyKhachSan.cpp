#include "QuanLyKhachSan.h"

QuanLyKhachSan::QuanLyKhachSan()
{
	this->sl = 0;
}

QuanLyKhachSan::QuanLyKhachSan(int sl)
{
	this->sl = sl;
}

void QuanLyKhachSan::ThemPhong(ThuePhong tp)
{
	this->DS.push_back(tp);
	sl++;
}

long long QuanLyKhachSan::TongTien()
{
	long long kq = 0;
	for (ThuePhong x : DS)
	{
		kq += x.GiaPhong();
	}
	return kq;
}
