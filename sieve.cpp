#include <iostream>
#include <vector>
using namespace std;

void Sieve(int n)
{
    vector<bool> prime(n + 1, true);
    cout << "Prime Numbers untill " << n << endl;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            cout << p << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    Sieve(n);
    return 0;
}