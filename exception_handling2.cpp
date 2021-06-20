#include<iostream>
#include <string>
using namespace std;
 
    int main ()
    {
        int num;
        string str_bad = "wrong number used";
        cout << "Input 1 or 2: ";
        cin >> num;
        try
        {
            if ( num == 1 )
            {
                throw 5;
            }
            if ( num == 2 )
            {
                throw 1.1f;
            }
            if ( num != 1 || num != 2 )
            {
                throw str_bad;
            }
        }
 
        catch (int a)
        {
            cout << "An exception occurred!" << endl;
            cout << "Exception number is: " << a << endl;
        }
        catch (float b)
        {
            cout << "An exception occurred!" << endl;
            cout << "Exception number is: " << b << endl;
        }
        catch (...)
        {
            cout << "A default exception occurred!" << endl;
            cout << "Why? : " << str_bad << endl;
        }
        return 0;
    }
