//run time polymorphism
#include<iostream>
using namespace std;
class animal{
public:
int speak(){
  cout<<"speaking"<<endl;
}
};

class dog : public animal{
public:
int speak(){
  //if this function is not here then the the previous inherited function will be implemented and then the ouput og obj.speak will be "speaking"
cout<<"barking"<<endl;
}
};
int main(){
dog obj;
obj.speak(); //puput barking
return 0;
}
