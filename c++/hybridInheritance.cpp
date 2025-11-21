#include<iostream>
using namespace std;
class car{
    public:
    string fueltype;
    void start(){
        cout<<"car started";
    }
    void stop(){
        cout<<"car stopped";
    }
};
class familycar:public car{
};
class sportscar:public car{

};
class SUV:public familycar,public sportscar{

};