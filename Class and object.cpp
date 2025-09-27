#include<iostream>
#include<string>
using namespace std;
class Car
{
  int carno;
 string name;
public:
void setCar(int carno, string name)
{
  this->carno= carno;
  this->name= name;
}
void getCar()
{
  cout<<"Car no "<<carno;
  cout<<"\nCar name"<<name;
}

};
int main()
{
  Car mycar;
  mycar.setCar(101,"Tata_Nexon");
  mycar.getCar();
  return 0;
}
