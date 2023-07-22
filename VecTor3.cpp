#include<iostream>
using namespace std;
class VecTor3
{
private:
	int a, b, c;
public:
	VecTor3(int a = 0, int b = 0, int c = 0)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	~VecTor3()
	{
	}
	void Nhap();
	void In();
	VecTor3 tong2(VecTor3 v);
};
void VecTor3::Nhap()
{
	cout << "Hay nhap thong tin vector:" << endl;
	cout << "Nhap toa do a:" << endl;
	cin >> a;
	cout << "Nhap toa do b:" << endl;
	cin >> b;
	cout << "Nhap toa do c:" << endl;
	cin >> c;
}
void VecTor3::In()
{
	cout << "(" << a << "," << b << "," << c << ")" << endl;
}
VecTor3 VecTor3::tong2(VecTor3 v)
{
	VecTor3 tong;
	tong.a = this->a + v.a;
	tong.b = this->b + v.b;
	tong.c = this->c + v.c;
	return tong;
}
int main()
{
	VecTor3 h, v3;
	VecTor3 v1(1, 3, 5);
	VecTor3 v2(3, 6, 7);
	v3 = v1.tong2(v2);
	h.Nhap();
	cout << "Vector vua nhap co toa do la:" << endl;
	h.In();
	cout << endl << endl;
	cout << "Hai vector duoc tao ham main  la:" << endl;
	cout << "Vector1->";
	v1.In();
	cout << "Vector2->";
	v2.In();
	cout << "Tong 2 vector la:";
	v3.In();
	return 0;
}
