#include <iostream>
#include <string>
using namespace std;
struct emp
{
    string name;
    string qual;
    int id;
    long long int contact;
    float exp;
};
int main()
{
    
    char again;
    int user_input_id, n;
    int check_id = 0;

    cout << "Enter The Number of Employee : ";
    cin >> n;

    struct emp a[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter ID of Employee(In 4 Digits) : " << i + 1 << " : ";
    label1:
        cin >> a[i].id;
        cin.ignore();
        if (a[i].id > 9999 || a[i].id < 1000)
        {
            cout << "\nInvalid Id. Please enter a valid Id : \n";
            goto label1;
        }
        cout << "Enter Name of Employee : " << i + 1 << " : ";
        getline(cin, a[i].name);
        cout << "Enter Qualification of Employee : " << i + 1 << " : ";
        getline(cin, a[i].qual);
        cout << "Enter Experience of Employee in years : " << i + 1 << " : ";
        cin >> a[i].exp;
        cout << "Enter Contact Number of Employee : " << i + 1 << " : ";
    label2:
        cin >> a[i].contact;
        if (a[i].contact < 1000000000 || a[i].contact > 9999999999)
        {
            cout << "\nInvalid Contact Number. Please enter a valid Contact Number : \n";
            goto label2;
        }
    }

    do
    {
        cout << endl
             << "Enter an Employee ID : ";
        cin >> user_input_id;

        for (int i = 0; i < n; i++)
        {
            if (user_input_id == a[i].id)
            {
                cout << "---------------------------------" << endl
                     << "Employee Name  : " << a[i].name << endl
                     << "Qualification  : " << a[i].qual << endl
                     << "Experience     : " << a[i].exp << " years" << endl
                     << "Contact Number : " << a[i].contact << endl
                     << "---------------------------------" << endl;
                break;
            }
            else
                check_id++;
        }

        if (check_id == n)
            cout << "Invalid ID." << endl;

        cout << "Enter Y to get details of Another employee, N to Exit : ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    cout << endl
         << endl
         << "23CS057_Aryan_Patel";
}
