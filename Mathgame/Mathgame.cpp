// Mathgame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <sstream>

using namespace std;

void calculator();
void show_history();
void choice();
void operation();
void add();
void sub();
void mul();
void div();

std::vector<std::string> history;

int main()
{
    int x;
    cout << "\t\t\t\tWhat do you want to do?\n\n";
    cout << "\t\t\t\t[1] Standard calculator\n";
    cout << "\t\t\t\t[2] History\n";
    cout << "\t\t\t\t[3] Exit\n\n\n\n";
    cout << "\t\t\t\tChoice: ";
    cin >> x;

    switch (x)
    {
    case 1:
        calculator();
        break;
    case 2:
        show_history();
        break;
    case 3:
        cout << "\n\n\nThank you for using my calculator!";
        exit(4);
        break;

    default:
        cout << "Enter a correct choice";
        main();
    }

}
void operation() {
    int x;
    char back;

    do {
        system("CLS");
        cout << "\t\t\t\tWhat do you want to play?\n\n";
        cout << "\t\t\t\t[1] addition\n";
        cout << "\t\t\t\t[2] subtraction\n";
        cout << "\t\t\t\t[3] multiplication\n";
        cout << "\t\t\t\t[4] division\n\n";
        cout << "\t\t\t\tChoice: ";
        cin >> x;

        switch (x) {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;

        default:
            cout << "Enter a correct choice";
            main();
        }

        cout << "\nContinue[Y/N]: ";
        cin >> back;
        cout << endl << endl;

        if (back != 'Y' && back != 'y' && back != 'N' && back != 'n') {
            cout << "Please enter a correct choice" << endl;
            operation();
        }
        else if (back == 'N' || back == 'n') {
            system("pause");
            system("CLS");
            main();
        }
    } while (back == 'y' || back == 'Y');

    cout << "Thank you";
    system("pause");
    system("CLS");
}


void add() {
    //std::ostringstream caclulation_stream;
    int x, y, ans, z = 0;
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        x = rand() % 11;
        y = rand() % 11;
        cout << "\n\n " << x << " + " << y << " = ";
        cin >> ans;
        sum = x + y;
        if (ans == sum) {
            cout << " the answer is correct!" << endl;

            z++;
        }
        else {
            cout << "wrong answer,the correct answer is  "<< sum << endl;
        }
        std::ostringstream calculation_stream;
        calculation_stream << x << " + " << y << " = " << sum;
        history.push_back(calculation_stream.str());

    }

}
void sub() {
    int x, y, ans, z = 0;
    int diff = 0;
    for (int i = 0; i <= 5; i++)
    {
        x = rand() % 11;
        y = rand() % 11;
        cout << "\n\n " << x << " - " << y << " = ";
        cin >> ans;
        diff = x - y;
        if (ans == diff) {
            cout << " the answer is correct!" << endl;
            z++;
        }
        else {
            cout << "wrong answer,the correct answer is  " << diff <<endl;
        }
        std::ostringstream calculation_stream;
        calculation_stream << x << " - " << y << " = " << diff;
        history.push_back(calculation_stream.str());

    }

}
void mul() {
    int x, y, ans, z = 0;
    int prod = 0;
    for (int i = 0; i <= 5; i++)
    {
        x = rand() % 11;
        y = rand() % 11;
        cout << "\n\n " << x << " * " << y << " = ";
        cin >> ans;
        prod = x * y;
        if (ans == prod) {
            cout << " the answer is correct!" << endl;
            z++;
        }
        else {
            cout << "wrong answer,the correct answer is " << prod <<endl;
        }
        std::ostringstream calculation_stream;
        calculation_stream << x << " * " << y << " = " << prod;
        history.push_back(calculation_stream.str());


    }

}
void div() {
    double x, y, ans, z = 0;
    double quo = 0;
    for (double i = 0; i <= 5; i++)
    {
        x = rand() % 11;
        y = rand() % 11;
        for (double x = 1; x <= 100; x++)

            if (y == 0) {
                cout << "undefined";
            }
            else {
                cout << "\n\n " << x << " / " << y << " = ";
                cin >> ans;
                quo = x / y;
            }
        if (ans == quo) {
            cout << " the answer is correct!" << endl;
            z++;
        }
        else {
            cout << "wrong answer,the correct answer is " << quo <<endl;
        }

        std::ostringstream calculation_stream;
        calculation_stream << x << " + " << y << " = " << quo;
        history.push_back(calculation_stream.str());

    }

}
void calculator()
{
    operation();
}


void choice() {
    char c;
    cout << "Do you want to continue? [Y/y or N/n]" << endl;
    cin >> c;

    if (c == 'Y' || c == 'y') {
        calculator();
        return;
    }
    else if (c == 'N' || c == 'n')
    {
        system("pause");
        system("cls");
        main();
        return;
    }
    else {
        cout << "Please enter a correct choice\n";
        choice();
    }
}


void show_history() {
    for (const auto& entry : history) {
        std::cout << entry << '\n';
    }
}