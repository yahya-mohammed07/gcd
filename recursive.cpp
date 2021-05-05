#include <iostream>

auto gcd(int m, int n) -> std::size_t
{
  if ( n == 0 ) { return m; }
  if ( n < 0 )  { return 1; }
  std::size_t r = m%n;
  return gcd(n, r);
}

int main()
{
  std::size_t m = 1220, n=516;
  std::cout << gcd(m, n) << '\n';
}
