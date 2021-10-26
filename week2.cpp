//Namespace:
//recall in Java we have "package cst8219"..., the name of the directory that your file's in
//in cpp you write the namespace as anything you want
    //namespace cst8219 {
    // your classes here
    //}

#include "Vehicle.h"

// namespace Week2 {
//cpp class called MyFirstClass
//in C++ you don't have to give every variable an access specifier: public, protected, private,
//instead, everything that comes after an access specifier uses that level of access.
//    class MyFirstClass {
//    private: //everything below is private until another access specifier comes into play
//        int age; //becomes public
//        char *firstName, *lastName; //becomes public
//        //constructors like variables and functions are private by default until they face an access specifier
//        // that changes that for them
//    public: //everything below is public until another access specifier comes into play
//
//        //MyFirstClass() { // cpp constructor for the class is MyFirstClass(), just like in Java:
//        //you need to manually initialize your variables in cpp, else they dont work properly
//        //  age = 0, firstName = lastName = NULL;
//        //}
//
////        MyFirstClass():MyFirstClass(0, NULL, NULL) { //calls a constructor with a = 0, f = NULL, l = NULL
////
////            int i = 0, i
////            ++;
////        }
////
////        MyFirstClass(int a, char *f, char *l) {
////            age = a;
////            firstName = f;
////            lastName = l;
////        }
//
////        //cpp destructor: you can have as many different constuctors but only one destructor.
////        //never call the destructor directly in main()
////        ~MyFirstClass() {
////            int i = 0;
////            i++;
////        }
////
////        int getAge() {
////            return age;
////        }
////
////        char *getFirstName() {
////            return firstName;
////        }
////
////        char *getLastName() {
////            return lastName;
////        }
////
////    protected: //everything below is protected until another access specifier comes into play
////        //you can have multiple sections that are public: or protected:, convention is private: at top
////        void setFirstName(char *f) {
////            firstName = f;
////        }
////
////        void setLastName(char *l) {
////            lastName = l;
////        }
////    };
//// //Constructor chaining happens with the : symbol
////class First {
////    public:
////        First(): First(0){ //calls Constructor with int
////
////        }
////        First(int i) {
////        }
////};
//
//}
//class MySecondClass{
//};
//
////in a C++ constructor, you should initialize your simple data types (int, double, bool, float) however, your objects
////should be initialized BEFORE the {} of the constructor IF they use the non-default constructor.
//class A {
//    private:
//        string name;
//        int x, y;
//    public:
//        A(char* str): name(str) {
//            x = y = 0;
//        }
//};
//
//if you don't initialize your variables before the constructor body {} then the objects are initialized first
//with the empty constructor, this causes problems.. Why?

//When the compiler allocates memory for A, it needs to know how much memory to reserve. That must be done before the body {}
    //Ex: if we create a class A and use its default constructor...
    // when we initialize in the method body, it deletes any memory allocated in the first allocation, then allocates
    // new memory.

//    //************** Lab 4 *********************//
//    void CreateVehicle(Vehicle &v, int w = 4, int d = 2) {
//        v.setDoors(d);
//        v.setWheels(w);
//    }
    //
int main(int argc, char **argv)
{
    //in cpp, variables and functions are private by default, same with the constructor here
    // so you can't just make an object of MyFirstClass or MySecondClass in main()
//    //calling empty constructors:
//    Week2::MyFirstClass mfc; //public constructor making it accessible in main().
//    Week2::MyFirstClass mfc1 = Week2::MyFirstClass(); //same as calling a constructor minus the MyFirstCLass() declaration
//
//    //Calling a constructor with parameters:
//    Week2::MyFirstClass mfc2(5, NULL, NULL);
//    Week2::MyFirstClass mfc3 = Week2::MyFirstClass(5, NULL, NULL);

    //This is a function declaration:
        //MyFirstClass mfc(); //the function name would be mfc() and it would return an object of the MyFirstClass class.

    //cout << "Hello World!" << endl;

    //************* LAB 2 **************//
    //CST8219::Vehicle myVehicle(4, 2); //calling constructor Vehicle(int, int)
    //cout << "I made a vehicle!" << endl;


    //************* LAB 4 **************//
//
//    Vehicle original;
//    Vehicle copy(original);
//    Vehicle secondCopy(&original);
//    copy.printVehicle();
//    CreateVehicle(copy, 2);
//    copy.printVehicle();
//    CreateVehicle(copy, 2, 3);
//    copy.printVehicle();
//    copy = secondCopy;
//    copy.printVehicle();

    //*********** LAB 5 *************//
    Vehicle original;
    Vehicle copy(original); // copy constructor by reference

    cout << "Original is: " << original << " copy is: " << copy << endl;

    cout << "Increment original: " << original++ << endl;
    cout << "Increment copy:" << ++copy<< endl;

    cout << "Decrement original:" << --original << endl;
    cout << "Decrement copy:" << copy-- << endl;

    // should be true :
    cout << "Compare equality 1: " << (original == copy) << endl;

    //should be false:
    cout << "Compare equality 2: " << (--original == ++copy) << endl;

//should be true:
    cout << "Compare inequality: " << (original != copy) << endl;

    //This should make original = copy, and then return a Vehicle for output:
    cout << "Assignment operator: " << (original = copy) << endl;
    return 0;

}