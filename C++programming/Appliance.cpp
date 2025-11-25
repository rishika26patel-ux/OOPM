//Q=write a c++ programm to demonstrate dynamic polymorphism and dynamic dispatch.
#include<iostream>
using namespace std;

class Appliance{
    public:
     virtual void start()
    {
        cout<<"generic Appliance\n";
    }
};

class Toaster:public Appliance{
    public:
    void start(){
        cout<<"Toaster coils heating up\n";
    }
};

class Oven:public Appliance{
    public:
    void start(){
        cout<<"oven preheating\n";
    }
};

void runAppliance(Applinace *ptr){
    ptr->start();
}

int main(){
    Appliance *t = new Toaster;
    Appliance *o = new oven;
    runAppliance(t);
    runAppliance(o);
    return 0;
}




class applicnce {
    public:
    applince(){
        cout<<"appliance created\n";
    }
    ~applinace(){
        cout<<"appliance destroyed\n";
    }
};

class toaster {
    public:
    toaster(){
        cout<<"toaster created\n";
    }
    ~toaster(){
        cout<<"toaster destroyed\n";
    }
};


class oven {
    public:
    oven(){
        cout<<"oven created\n";
    }
    ~oven(){
        cout<<"oven destroyed\n";
    }
};

int main(){
    appliance obj;
}