#include <iostream>
using namespace std;


void greetings(string name)
{
    cout << "Hello " << name << endl;
}

void greetings(int num1, int num2, int num3)
{
    cout << num1 << " " << num2 << " " << num3 << endl;
}

void fullName(string firstName)
{
    firstName = "vv";
}

int main()
{
    string name = "Ville" ;
    greetings(name);
    greetings(50, 60, 100);
    greetings(name);
    return 0;
}