#include<iostream>
using namespace std;
class Display{
    public:
    int i, j;
    void patternDisplay(int row){
        i=row;
    }
    void patternDisplay2(int col){
        j=col;
    }
    
    for(i=1;i<=3;i++){
        for(j=3;j<=9;j-=3){
            cout<<j<<"\t";
        }
        cout<<endl;
        return 0;
    }
};
    int main(){
        Display d;
        
    }
