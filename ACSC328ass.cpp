#include <iostream>
#include <math.h>
#define PIE 3.142

using namespace std;

class Circular
{
private:
	double radius, height;
	
	
public:
	//getters
	double getRadius(){
		return radius;
	}
	double getHeight(){
		return height;
	}
	
	//Setter function
	void set(double r, double h)
	{
		radius=r;
		height=h;	

	}	
	// VOLUME FUNCTION
	void volume(double r,double h);	
	
};

//THE CYLINDER CLASS
class Cylinder: public Circular
{	
public:
	//OVERRIDEN METHOD
	void volume(double r,double h){
		cout<<"Cylinder Volume:"<<(PIE*pow(r,2)*h);
		cout<<endl;
	}	
};

//THE CONE CLASS
class Cone: public Circular
{
public:
	//OVERRIDEN METHOD
	void volume(double r,double h){
		cout<<"Cone Volume:"<<(PIE*pow(r,2)*h)*1/3;
		cout<<endl;
	}
	
};
//MAIN METHOD
int main(int argc, char** argv)
{
	Cylinder object1;// CYLINDER OBJECT
	Cone object2;    //CONE OBJECT
	
	
	object1.volume(14,10); //CALL CYLINDER'S VOLUME FUNCTION 
	object2.volume(14,5); //CALL CONE'S VOLUME FUNCTION
	return 0;
}