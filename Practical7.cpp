#include<iostream>
using namespace std;

class abc
{
    int ima,real;

    public:

    abc()
    {
        cout << "please enter  real num." << endl;
        cin  >> real;
        cout << "please enter  imaginary num." << endl;
        cin  >> ima;

    }
    abc(int x, int y)
    {
        real = x;
        ima = y;
    }

    void output ()
    {
        cout << real << "+" << ima << " i" << endl;
    }

    abc operator + (abc &z)
    {
        abc a(0,0);
        a.real  = real + z.real;
        a.ima  = ima + z.ima;
        return a;
    }
    abc operator - (abc &z)
    {
        abc a(0,0);
        a.real  = real - z.real;
        a.ima  = ima - z.ima;
        return a;
    }
    abc operator * (abc &z)
    {
        abc a(0,0);
        a.real  = real * z.real;
        a.ima  = ima * z.ima;
        return a;
    }
    abc operator / (abc &z)
    {
        abc a(0,0);
        a.real  = real / z.real;
        a.ima  = ima / z.ima;
        return a;
    }
    abc operator % (abc &z)
    {
        abc a(0,0);
        a.real  = real % z.real;
        a.ima  = ima % z.ima;
        return a;
    }
    abc operator ! ()
    {
        abc a(0,0);
        a.real  = - real;
        a.ima = - ima;
        return a;
    }



};
int main()
{
    abc o1,o2,o3(0,0); 
    int option;

    while (true){   
        cout << "--------------------------------------------------------------" << endl;
        cout << "Choose an operation :" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] Negation" << endl;
        cout << "Your option :" <<endl;
        cin >> option;
        switch (option)
        {
        case 1 :
            o3 = o1 + o2;
            o3.output();
            break;
        case 2 :
            o3 = o1 - o2;
            o3.output();
            break;
         case 3 :
            o3 = o1 * o2;
            o3.output();
            break;
         case 4 :
            o3 = o1 / o2;
            o3.output();
            break;
         case 5 :
            o3 = !o2;
            o3.output();
            
            o3 = !o1;
            o3.output();
            break;
         

        }
    }
    return 0;

}