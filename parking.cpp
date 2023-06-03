#include <iostream>
using namespace std;
int main()
{
    cout << "\t\t P a r k i n g " << endl;
    int enter;
    int car = 0;
    int bus = 0;
    int bicycle = 0;
    while (true)
    {

        cout << " Press 1 to enter a Car" << endl;
        cout << " Press 2 to enter Bus" << endl;
        cout << " Press 3 to enter bicycle" << endl;
        cout << " Press 4 to show parking record" << endl;
        cout << " Press 5 to delete record" << endl;
        cout << " Press 6 to exit" << endl;
        cout << "Please enter your options : " << endl;
        cin >> enter;
        if (enter == 1)
        {
            car++;
            system("cls");
            cout << "Car is parked" << endl;
        }
        else if (enter == 2)
        {
            bus++;
            system("cls");
            cout << "Bus is parked" << endl;
        }
        else if (enter == 3)
        {
            bicycle++;
            system("cls");
            cout << "Bicycle is parked" << endl;
        }
        else if (enter == 4)
        {
            cout << " Car = " << car << " Bus = " << bus << " Bicycle = " << bicycle << endl;
        }
        else if (enter == 5)
        {
            car = 0;
            bus = 0;
            bicycle = 0;
            system("cls");
            cout << "Records are successfully deleted!!!" << endl;
        }
        else if (enter == 6)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid option" << endl;
        }
    }
    return 0;
}