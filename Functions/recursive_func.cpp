#include <iostream>
using namespace std;

int factorial(int n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main()
{
  int number = 5;
  cout << "Factorial of " << number << " is: " << factorial(number) << endl;
  return 0;
}
