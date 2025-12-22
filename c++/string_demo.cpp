#include<iostream>
#include<string> 
using namespace std;
int main(){
    //declaration & intilization
    string s1;
    string s2;
   // cout<<s.size();
    //cout<<s.length();
    //cout<<s.capacity();
    //s.reserve(100);  //Re-allocation
   // cout<<s.capacity();   
    //string.s1="rishi";
    //cout<<s.size();
    //string s1.(s);
    //cout<<s1;
    //string s2(10,'a');
    //cout<<s2;
    //s1="rishika";
    //s2="rishi";
    //cout<<(s1<s2);//lexicograph comparison

   // s1="rishika";
    //s2="rishi";
    //cout<<s1.compare(s2);
    //cout<<s1.find("a");
    //cout<<s1.find_last_of("l");   
    s1="mathematics";
    if(s1.find("x")!=string::npos){
        cout<<"found";
     } else{
        cout<<"not found";
     }
    cout<<string::npos; //Global variable constant
}
//c string=char name[50];
//name="rishika";
//name={r,i,s,h,i,k,a};

//In c++ string is a special class that is created to make string handling easily.The memomry ehwre the character of the string is save is a char* buffer which is dynamicaly alocated. to optimize the memory the size of this buffer is expanded on the bases of need.A c++string when intitialized cntian 15 memory location at the beginning. if a biger string is save into this buffer the memory is re-alocated to a bigger a size.
