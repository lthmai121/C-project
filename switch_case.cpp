#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int air_ft_persec = 1100, water_ft_persec = 4900, steel_ft_persec = 16400, min_distance = 0;
    int choice;
    double time, distance;
    enum Medium {air, water, steel};
    cout << "Select a medium\n";
    cout << "Choose one:\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cout << "Enter your choice\n";
    cin >> choice;
    cout << "Enter the number of feet sound wave will travel:\n";
    cin >> distance;
    if (distance < 0)
        cout << "Error, distance must be greater than 0\n";
    else 
        switch (choice)
        {
        case air: time = distance / air_ft_persec;
            cout << "A sound wave traveling through air at\n";
            cout << distance << " feet\n";
            cout << fixed << showpoint << setprecision(4) << time << " seconds\n";
            break;

        case water: time = distance / water_ft_persec;
            cout << "A sound wave traveling through water at\n";
            cout << distance << " feet\n";
            cout << fixed << showpoint << setprecision(4) << time << " seconds\n";
            break;

        case steel: time = distance / steel_ft_persec;
            cout << "A sound wave traveling through steel at\n";
            cout << distance << " feet\n";
            cout << fixed << showpoint << setprecision(4) << time << " seconds\n";
            break;

        default: cout << "The valid choice are 1 through 3\n";
            cout << "Run the program again using these numbers\n";
        }
}


