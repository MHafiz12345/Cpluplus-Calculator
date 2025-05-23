#include "Trigonometry.h"
#include "History.h"
#include <string>
#include <cmath>
#include <iostream>
#define PI 3.141592654

using namespace std;

void Trigonometry::start(history_list& history)
{
    do {
        // Display menu options
        cout << "Press 1 for Sin" << endl;
        cout << "Press 2 for Cos" << endl;
        cout << "Press 3 for Tan" << endl;
        cout << "Select a Function (or press 0 to exit): ";
        cin >> selected;

        switch (selected)
        {
        case '1':
            calculateSine(history);
            cout << "\n";
            break;

        case '2':
            calculateCosine(history);
            cout << "\n";
            break;

        case '3':
            calculateTangent(history);
            cout << "\n";
            break;

        case '0':
            return;
            cout << "\n";
            break;

        default:
            cout << "Invalid input" << endl;
        }
    } while (selected != '0');
}

void Trigonometry::calculateSine(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    // Calculate sine value and display the result
    result = sin(x * PI / 180.0);
    cout << "Sin(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Sin(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}

void Trigonometry::calculateCosine(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    // Calculate cosine value and display the result
    result = cos(x * PI / 180.0);
    cout << "Cos(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Cos(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}

void Trigonometry::calculateTangent(history_list& history)
{
    double x, result;
    cout << "Enter number (in degrees):";
    cin >> x;

    // Calculate tangent value and display the result
    result = tan(x * PI / 180.0);
    cout << "Tan(" << x << ") = " << result << endl;

    //to store the result in the calculator's history
    string output = "Tan(" + to_string(x) + ") = " + to_string(result);
    history.add_result(output);
}




