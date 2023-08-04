#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    // Defining 'age' integer.
    int age;
    char choice;



    cout << "Hello there! Please state your age before continuing: ";
    cin >> age;
    cout << "Can you confirm that you are: " << age << "? (Y/N / Yes/No) ";
    cin >> choice;

    if (!(choice != 'Yes' && choice != 'Y' && choice != 'yes' && choice != 'y'))
    {
        cout << "Great! Thank you.";
        Sleep(5000);
            terminate;
    }
    if (!(choice != 'No' && choice != 'N' && choice != 'no' && choice != 'n'))
    {
        cout << "Please wait while the program restarts and enter your correct age.";
        Sleep(6000);
        terminate;
    }

    else {
        cout << "\n Invalid Answer.\n";
        cout << " Please Try Again";
        Sleep(5000);
        terminate;
    }
    
}