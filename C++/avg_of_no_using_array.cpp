#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum = 0, avg;

    cout << "Enter the number of data to enter" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter the" << i + 1 << " number :" << endl;
        cin >> num[i];
        sum += num[i]; // Meaining of this sum=sum+num[i]
    }
    avg = sum / n;
    cout << "The avg of " << n << " number is " << avg << endl;
}