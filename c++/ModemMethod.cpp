#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    static int count;
    student(sring n):name(n){
        count++;
        cout<<"student created:"<<cout<<endl;
    }
};
int student::cout=0;
int main(){
    student s1("rishika");
    student s2("jaya");
    student s3("neha");
}