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
//int main(){
  //  SUV s1;
    //s1.fueltype="petrol";
    //s1.start;s1.stop();
//}

int main(){
    SUV s1;
    s1.familycar::fueltype="petrol";
}











 Q1 how to resolve the AMBIGUTY that accurs in hybrid inheritance

 whenever a class inheritice from two or more than two classes it gets the behaviour of all those classes ,also it get the behaviour of the parents of its parents classes.
 due to this, this child class may have multiple copies of the attributes and the behaviour
 of its grand parent class.by accesing these copies c++ gets confused as to which copy from which parent is being called 

 this issue can be solved using anyone of the following methods
 
 1. clarrifying the copy using scope:: resolution operator in front of the variable and the method name.

 2. in herichal inheritance the two or more classs which are inheriting from a single base class should inherit vertually . this results to create a single copy in the class that inherits from multiple classes.