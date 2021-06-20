#include <iostream>
using namespace std;
template <class T>
class Calculator
{
private:
T num1, num2;

public:
Calculator(T n1, T n2)
{
num1 = n1;
num2 = n2;
}
void add();
void divide();
void displayResult()
{
cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;

cout << "Subtraction is: " << subtract() << endl;
cout << "Product is: " << multiply() << endl;
// cout << "Division is: " << divide() << endl;
}



T subtract()
{ return num1 - num2; }

T multiply()
{ return num1 * num2; }

// T divide() { return num1 / num2; }
};
template <class T>
void Calculator <T> :: add()
{
cout << "Addition is:" << num1 + num2<<endl;
}
template <class T>
void Calculator <T> :: divide()
{
cout << "Quotient is:" << num1 / num2<<endl;
}
int main()
{
Calculator<int> intCalc(2, 1);//calculator c(5,4);
Calculator<float> floatCalc(2.4, 1.2);
intCalc.add();
cout << "Int results:" << endl;
intCalc.displayResult();

cout << endl << "Float results:" << endl;
floatCalc.displayResult();

return 0;
}
