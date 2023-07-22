#include<iostream.h>
using namespace std;
class HCN
{
	private:
	float d,r;
	public:
	void nhap();
	void in(); 
	float chuvi()
	{
		return 2*(d=r); 
	}
	float dientich()
	{
		return d*r; 
	} 
};
void HCN::nhap()
{
	cout<<"Nhap chieu dai:";cin>>d;
	cout<<"Nhap chieu rong:";cin>>r;	 
} 
void HCN::in()
{
	cout<<"("<<d<<","<<r<<")";
} 
int main()
{
	HCN h;
		cout<<"Nhap tong tin cho hinh chu nhat=>"<<endl;
		h.nhap();
		cout<<"chu vi hinh chu nhat la:"<<h.chuvi()<<endl;
		cout<<"Dien tich hinh chu nhat la:"<<h.dientich()<<endl;
		return 0; 
} 
	