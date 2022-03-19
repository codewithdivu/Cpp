#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}


/*
As shown in code snippet 2,

We created a pointer “base_class_pointer” of the data type “Baseclass”
Object “obj_base” of the data type “BaseClass” is created.
Object “obj_derived” of the data type “DerivedClass” is created
Pointer “base_class_pointer” of the base class is pointing to the object “obj_derived” of the derived class
The pointer “base_class_pointer” is pointed to the object “obj_derived” of the derived class.
The function “display” is called using the pointer “base_class_pointer” of the base class.

*/