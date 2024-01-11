#include <iostream>
using namespace std;

// 定義類別
class MyClass {
    public:
        // 類別物件
        int myNum;
        string myString;
        
        // 類別方法
        void myMethod() {
            cout << "Hello World!" << endl;
        }
        void myMethod2();
};

// 外部定義類別的方法
void MyClass::myMethod2() {
    cout << "myMethod2" << endl;
}

// 類別資料結構範例
class Car {
    public:
        string brand;
        string model;
        int year;
        // 類別的資料結構
        Car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};
/*
也可以使用外部設定資料結構
Car::Car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}
*/

// 存取說明
class NumClass {
    // public - 可以從班級外部存取會員
    // private - 無法從班級外部存取（或查看）成員
    // protected - 成員不能從類別外部訪問，但是可以在繼承類別中存取。稍後您將了解有關繼承的更多資訊。
};

/*
封裝:
封裝的含義是確保「敏感」資料對使用者隱藏。
為了實現這一點，您必須將類別變數/屬性聲明為private（不能從類別外部存取）。
如果希望其他人讀取或修改私有成員的值，可以提供公用的get和 set方法。
*/
class Employee {
    private:
        // Private attribute
        int salary;

    public:
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        // Getter
        int getSalary() {
            return salary;
        }
};

/*
繼承
*/
class Parent {
    public:
        string parentVar;
        Parent() {
            parentVar = "parentVar";
        }
        void parentMethod() {
            cout << "parent method" << endl;
        }
};

class Child: public Parent {
    public:
        string childVar;
        Child() {
            childVar = "childVar";
        }
};

// 多層級繼承
class Child2: public Child {
};

class OtherParent {
    public:
        void otherParentMethod() {
            cout << "other parent method" << endl;
        }
};

// 多重繼承
class OtherCild: public Parent, public OtherParent {
};

// 繼承訪問
class Access {
    protected:
        int salary;
};

class Programmer: public Access {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

/*
多態性
多態性意味著“多種形式”，當我們有許多透過繼承相互關聯的類別時，就會發生多態性。
*/
class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound" << endl;
        }
};
class Pig: public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee" << endl;
        }
};
class Dog: public Animal {
    public:
        void animalSound() {
            cout << "The dog says: bow bow" << endl;
        }
};

int main() {
    MyClass myObj; // 創建MyClass物件
    myObj.myNum = 24;
    myObj.myString = "Some text";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    myObj.myMethod();
    myObj.myMethod2();

    Car carObj("BMW", "X5", 1999);
    cout << carObj.brand << " " << carObj.model << " " << carObj.year << endl;

    Employee empObj;
    empObj.setSalary(50000);
    cout << empObj.getSalary() << endl;
    // cout << empObj.salary << endl; <= 因為salar屬性為private，所以不能直接取用

    Child childObj;
    childObj.parentMethod();
    cout << childObj.childVar << endl;
    Child2 child2Obj;
    child2Obj.parentMethod();

    // 多重繼承
    OtherCild otherClid;
    otherClid.parentMethod();
    otherClid.otherParentMethod();

    // 繼承訪問
    Programmer p;
    p.setSalary(501);
    p.bonus = 15000;
    cout << "Salary: " << p.getSalary() << endl;
    cout << "Bonus: " << p.bonus << endl;

    // 多態性
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;
}