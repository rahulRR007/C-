#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    int age;
    string company;

public:
    Employee(string n, int a, int i, string c) : name(n), age(a), id(i), company(c) {}

    Employee() : name("Unknown"), age(0), id(0), company("Unknown") {}

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    int getId() {return id;}
    string getCompany() {return company;}
};

class Google : public Employee {
public:
    int dob;  
    string address;

public:
    Google() : Employee(), dob(0), address("Unknown") {}

    Google(string n, int a, int i, string c, int d, string addr)
    : Employee(n, a, i, c), dob(d), address(addr) {}

    int getDob() {
        return dob;
    }

    string getAddress() {
        return address;
    }
};

class Stack {
private:
    Google* arr;     
    int top;         
    int size;    

public:
    Stack(int size) {
        this->size = size;
        arr = new Google[size];
        top = -1;
    }

    ~Stack() {
        delete[] arr; // Free allocated memory
    }

    void push(Google g) {
        if (top >= size - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = g;
        cout << "Pushed: " << g.getName() << endl;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << "Popped: " << arr[top].getName() << endl;
        top--; 
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack contents:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << "Name: " << arr[i].getName() << ", Age: " << arr[i].getAge() << ", ID: " << arr[i].getId() << ", Company: " << arr[i].getCompany() << ", DOB: " << arr[i].getDob() << ", Address: " << arr[i].getAddress() << endl;
        }
    }
};

int main() {
    Stack stack(5);

    
    Google g1("rahul", 30, 101, "Google", 1990, "123 Vandikare St, City");
    Google g2("Rahul", 28, 102, "Google", 1992, "456 WOriyue St, City");
    Google g3("RaHuL", 35, 103, "Google", 1987, "789 Kara st, City");

   
    stack.push(g1);
    stack.push(g2);
    stack.push(g3);

    
    stack.display();

  
    stack.pop();

  
    stack.display();

    return 0;
}
