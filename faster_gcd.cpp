#include <iostream>

constexpr auto gcd(std::size_t m, std::size_t n) -> std::size_t
{
  if ( m == n ) { return m; }
  if ( n == 0 ) { return m; }
  if ( m == 0 ) { return n; }
  //
  if ( m & 1 ) { // m is odd
    if ( !(n & 1) )   { return gcd(m, n/2); } // n is even
    if ( m > n )      { return gcd((m-n)/2, n); }
    else              { return gcd((m-n)/2, m); }
  } else { // m is even
    if ( n & 1 )      { return gcd(m/2, n); } // n is odd
    else { return     2 * gcd(m/2, n/2);}     // both even
  }
}

auto main() -> int
{
  std::size_t m=64, n=14;
  for (int i = 0; i < 100'000; ++i ) {
    std::cout << gcd( m, n ) << '\n';
  }
}
