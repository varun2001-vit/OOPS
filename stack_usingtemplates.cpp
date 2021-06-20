#include <iostream>
#include <string>
using namespace std;

        template <class T>
        class Stack
        {public:
                int top;
                T st[100];
        
        public:
                Stack()
                {
                	top=-1;
				}
                void push(T i);
                T pop();
                void display()
                {
                	for(int i=top;i>0;i--)
                	cout<<st[i]<<"-->";
                	
                	
				}
       
        };

        

        template <class T>
        void Stack<T>::push(T i)
        {
                st[++top] = i;
        }

        template <class T>
        T Stack<T>::pop()
        {
                return st[top--];
        }

        int main ()
        {
                Stack<int> int_stack;
                Stack<string> str_stack;
                int_stack.push(67);
                int_stack.push(73);
                str_stack.push("Hello");
                str_stack.push("Codezclub");
                cout<<"integer stack"<<endl;
                int_stack.display();
                cout<<endl;
                cout<<"char stack"<<endl;
                str_stack.display();
                cout<<endl;
                cout<<" *****"<<endl;
                cout << int_stack.pop() << endl;
                cout << str_stack.pop() << endl;
                cout << str_stack.pop() << endl;
                return 0;
        }
