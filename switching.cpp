#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    switch (number)
    {
        case 1:
            cout << "I am one" << endl;
            break;

        case 2:
            cout << "I am two" << endl;
            break;
        
        default:
            cout << "I am not one or two" << endl;

        some();
    }
}

int some()
{
    int input;
    cout << "Enter the number of the day" << endl;
    cin >> input;
    if (input == 1)
    {
        cout << "Monday" << endl;
    }
    else if (input == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (input == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (input == 4)
    {
        cout << "Thursday" << endl;
    }
    else if (input == 5)
    {
        cout << "Friday" << endl;
    }
    else if (input == 6)
    {
        cout << "Satuday" << endl;
    }
    else if (input == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "The number is not week day" << endl;
    }
    yam();
}


int yam()
{
    int day;
    cout << "Enter the number of the day" << endl;
    cin >> day;
    switch (day) 
    {
      case 1:
        cout << "Monday" << endl;
        break;
      case 2:
        cout << "Tuesday" << endl;
        break;
      case 3:
        cout << "Wednesday" << endl;
        break;
      case 4:
        cout << "Thursday" << endl;
        break;
      case 5:
        cout << "Friday" << endl;
        break;
      case 6:
        cout << "Saturday" << endl;
        break;
      case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "The number is not week day" << endl;
    }
    numbers();
}

int numbers()
{
    float number;
    float sum;
    cout << "Enter number:" << endl;
    cin >> number;
    for(short i = 0; i <= number; i++)
    {
       sum = sum+i;
    }
    cout << "Sum = " << sum << endl;
}