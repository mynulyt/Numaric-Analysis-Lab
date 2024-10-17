#include <bits/stdc++.h>
using namespace std;
#define f(x) (3*x - cos(x) - 1)
#define g(x) (cos(x) + 1) / 3

int main()
{
    int i = 0;
    float x0, x1, epsilon = 0.01;
    cin >> x0; // Initial guess input
    do {
        x1 = g(x0); // Calculate the next approximation
        i++;
        x0 = x1; // Update x0 for the next iteration
    } while(fabs(f(x1)) > epsilon); // Continue until the desired precision is achieved
    cout << "Root is " << x1  << endl;

    return 0;
}
