#include <iostream.h>
class SP
{
 private:
  int pt;
  int pa;
 public:
 SP(int pt=0,int pa=0)
 {
  this->pt=pt;
  this->pa=pa;
 }
 ~SP()
 {
 }
 void xuat()
 { 
  if(this->pa>0)
  {
   
   cout<<this->pt<<" + "<<this->pa<<"*j";
  }
  else{
   
   cout<<this->pt<<" - "<<abs(this->pa)<<"*j";
  }
 }
 SP tong(SP p)
 {
  SP tong;
  tong.pt=this->pt+p.pt;
  tong.pa=this->pa+p.pa;
  return tong;
 }
};
int main()
{
 SP SP1(3,4);
 SP SP2(6,7);
 SP SP3(2,3);
  SP tong2;
  SP tong3; 
 //tong2 = SP1.tong(SP2); 
 //tong3= tong2.tong(SP3);
 tong3=SP1.tong(SP2.tong(SP3));
 cout<<"Tong 3 so phuc la: "; 
 tong3.xuat();
  cout<<endl;
    return 0;
}