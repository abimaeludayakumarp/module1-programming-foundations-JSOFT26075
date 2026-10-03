#include <iostream>
using namespace std;
int main()
{
    int low, high;
    cin >> low >> high;

    for (int n = low; n <= high; n++)
    {
        bool isPrime = (n > 1);

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    return 0;
}