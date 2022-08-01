#include <iostream>
#include <math.h>
using namespace std;

//ABSTRACT CLASS
class Bill
{
private:
	double fee;
	double units;
	

public:
	// SET  FUNCTION
	void init(double stdfee, double unt)
	{
		fee =stdfee;
		units =unt;
	}
	//GETTERS
	double getFee(){
		return fee;
	}
	double getUnits(){
		return units;
	}
	//PURE VIRTUAL FUNCTION
	virtual void consumption(double fee,double units)=0;
		
};



//WATER CLASS --derived from BILL CLASS
class Water: public Bill
{
public:
	 void consumption(double fee, double units)
	{
		cout<<"Consumption Cost for Water:"<<(fee+(units*100));
		cout<<endl;
		
	}	
};
//ELECTRICITY CLASS
class Electricity: public Bill
{
public:
	void consumption(double fee, double units)
	{
		cout<<"Consumption Cost for Electricity:"<<(fee+(units*3));
		cout<<endl;
		
	}	
};
//MAIN METHOD
int main(int argc, char** argv)
{
	Water object1;   //WATER OBJECT
	Electricity object2;//ELECTRICITY OBJECT
	
	object1.consumption(70,150);
	object2.consumption(250,150);
	
	return 0;
}