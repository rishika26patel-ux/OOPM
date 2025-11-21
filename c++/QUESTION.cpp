//Q1=given a class rectangle with attributes length and breadth with methods to calculate the area of parameters of the resctangle.also demostrate the use of these method in a sample program,//in the above question crate a cubiod class which shout be the derived class of rectangle,the cubiod clas should have only one member that is height 
//also write a function to find a volume of the cubiod note that because of inhertance length nad braedth is already avilable to the cubiod class .what are the change need to be done in rectangle class for this new task,

#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    rectangle(){
    length=1,breadth=1;
    cout<<"default rectangle\n"<<endl;
    }
    rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;

    }
    int area(){
        return length*breadth;
    }
    int parameter(){
        return 2*(length+breadth);
    }
    void display(){
        cout<<"area:"<<area()<<"parameter:"<<parameter()<<endl;
    }
};
//new task
class cuboid:public rectangle{
  protected:
  int height;
  public:
  cuboid(){
    height=1;
  }
  cuboid(int length,int breadth,int height):rectangle(length,breadth){
    this->height=height;
  }
  int volume(){
    return length*breadth*height;
  }
  //function overriding
  void display(){
    cout<<"volume:"<<volume();
  }
};
int main(){
    cuboid a(20,10,5);
    a.display();
}
//int main(){
  //  rectangle r(20,10);
    //r.display();
//}