#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class car
{
    public:
    string model_name;
    int price;
    float mileage;
    float tank_capacity;
    string fuel_type;
    string transmission;
    int seating;
    char airbags;
    int num_of_car;
void inputdetail()
{
    cout << "enter car name      :";
    cin >> model_name;
    cout << "enter fuel type     :";
    cin >> fuel_type;
    cout << "Enter price         : ";
    cin >> price;
    cout << "enter mileage       :";
    cin >> mileage;
    cout << "enter transmission  :";
    cin >> transmission;
    cout << "enter tank capacity :";
    cin >> tank_capacity;
    cout << "enter seating       :";
    cin >> seating;
    cout << "enter airbags       :";
    cin >> airbags;
    
}

void outputdetain()
{
    cout << " car name       " << model_name << endl;
    cout << " fuel type      " << fuel_type << endl;
    cout << " price          " << price << endl;
    cout << " mileage        " << mileage << endl;
    cout << " transmission   " << transmission << endl;
    cout << " tank capacity  " << tank_capacity << endl;
    cout << " seating        " << seating << endl;
    cout << " airbags        " <<airbags << endl;
}

};

int main()
{
    const int maxcar = 10;
    int n,x,y;
    cout << "enter number of car    :";
    cin >> n;
    car A[maxcar];

    if(n<maxcar)
    {
        for(int i=0;i<n;i++)
        {
            A[i].inputdetail();
        }
        for(int i=0;i<n;i++)
        {
            A[i].outputdetain();
        }
    }
    else
    {
        cout << "please enter valid number";
    }

    


    while(y==1)
    {
        cout << "WELCOME TO TATA MOTORS" << endl;
        cout << "GET CAR DETAIL AS PER REFERENCE" << endl;
        cout << "(1) model name (2) fual type (3) price" << endl;
        cout << "Enter option : ";
        cin >> x ;
    switch (x)
    {
    case 1:
        for(int i=0;i<n;i++)
        {
            cout << A[i].model_name << endl;
        }
        break;
    case 2:
        for(int i=0;i<n;i++)
        {
            cout << A[i].fuel_type << endl;
        }
        break;
    case 3:
        for(int i=0;i<n;i++)
        {
            cout << A[i].price << endl;
        }
        break;
    default:
        cout << "Enter valid case";

        break;
    }

    cout << "Press 1 if you want another details";
    cin >> y;
    }
    
}