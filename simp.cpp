#include<iostream>
using namespace std;
int main(){
    string name,regno;
    int mk1,mk2,mk3,mk4,mk5,mk6;
    char grade;
    int avg;

    cout<<"Enter your Name: "<<endl;
    cin>>name;
    cout<<"Enter your Registration Number: "<<endl;
    cin>>regno;

     cout<<name <<"\t";
     cout<<regno <<endl;

    cout<<"Entering Student Marks\t"<<endl;
    cout<<"ACSC 333:\t"<<"COSC 333:\t"<<"ACSC 374:\t"<<"ACSC 328:\t"<<"COSC 341:\t"<<"ACSC 352:\t"<<endl;

    cin>>mk1 >>mk2 >>mk3 >>mk4 >>mk5 >>mk6;
     avg=((mk1+mk2+mk3+mk4+mk5+mk6)/6);
     if(avg<0 ||avg>100){
        cout<<"Invalid score";
        return 0;
     }
     switch (avg/10)
     {
     case 10:
     case 9:
     case 8:
     case 7:
     grade ='A';
     cout<<"EXCELLENT"<<endl;
     break;
     case 6:
     grade='B';
     cout<<"VERY GOOD"<<endl;
     break;
     case 5:
     grade='C';
     cout<<"GOOD ATTEMPT" <<endl;
        break;
    case 4:
    grade='D';
    cout<<"PASS"<<endl;
    break;     
     default:
     grade='F';
     cout<<"FAIL" <<endl;
        break;
     }
    
     cout<<"Your Average Mark is: "<<avg <<" and your score grade "<<grade;
     
}