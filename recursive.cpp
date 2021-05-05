#include <iostream>

int gcd(int m, int n)
{
  if ( n == 0 ) { return m; }
  if ( n < 0 )  { return 1; }
  int r = m%n;
  return gcd(n, r);
}

int main()
{
  int m = 1220, n=516;
  std::cout << gcd(m, n) << '\n';
}