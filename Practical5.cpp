#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class circle
{
    public :
        int active_circle,total_circle;
        int radius;
        float area ;

        
        circle()
        {
            radius=1;
            area=3.14*radius*radius;
        }
        circle(int r)
        {
            radius=r;
            area=3.14*radius*radius;
            cout << area;
        }
        circle(circle &x)
        {
            cout << "area = " << x.area << endl;
        }

};

int main()
{
    
    circle o1;
    
    circle o2(100);
    circle o3(o1);

    return 0;
}