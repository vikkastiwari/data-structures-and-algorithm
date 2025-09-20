#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }

struct Person
{
     string name;
     int age;
};

class Car
{
public:
     string brand;
     void honk() { cout << brand << " says Beep!\n"; }
};

enum Color
{
     RED,
     GREEN,
     BLUE
};

union Data
{
     int intVal;
     float floatVal;
};

typedef unsigned int uint;

int main()
{
    int a = 100;          // normal int
    long b = 100000L;     // long int (L suffix optional)
    long long c = 10000000000LL; // long long int (LL suffix optional)

    cout << "Size of int: " << sizeof(a) << " bytes\n";
    cout << "Size of long: " << sizeof(b) << " bytes\n";
    cout << "Size of long long: " << sizeof(c) << " bytes\n";

     // Primitive data type
     int age = 25;
     float pi = 3.14f;
     double price = 99.99;
     char grade = 'A';
     bool isOn = true;
     wchar_t symbol = L'Ω';

     cout << "Age: " << age << "\n";
     cout << "Pi: " << pi << "\n";
     cout << "Price: " << price << "\n";
     cout << "Grade: " << grade << "\n";
     cout << "Is On: " << isOn << "\n";
     wcout << L"Symbol: " << symbol << "\n";

     // Derived data type
     int arr[3] = {1, 2, 3};
     int *ptr = &age; // Pointer to age variable
     int &ref = age;  // & in a declaration means "reference to" (not to be confused with & for address-of).

     cout << "Array[1]: " << arr[1] << "\n";
     cout << "Pointer value: " << *ptr << "\n";
     cout << "Reference: " << ref << "\n";
     cout << "Sum: " << sum(4, 5) << "\n";

     // User-defined	struct, class, enum, typedef/using, union
     Person p1 = {"Alice", 25};
     Car c1;
     c1.brand = "Toyota";
     c1.honk();
     Color myColor = GREEN;
     Data d;
     d.intVal = 42;
     uint distance = 100;

     cout << "Name: " << p1.name << ", Age: " << p1.age << "\n";
     cout << "Color: " << myColor << "\n";
     cout << "Data intVal: " << d.intVal << "\n";
     cout << "Distance: " << distance << "\n";
     return 0;
}
