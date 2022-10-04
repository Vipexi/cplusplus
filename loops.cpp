#include <iostream>
using namespace std;

int main()
{
    int numbers[3] = {6,7,8};

    for (int i = 0; i < sizeof(numbers) / sizeof(i); i++)
    {
        cout << numbers[i] << endl;
    }
}