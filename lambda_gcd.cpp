#include <iostream>
#include <functional>

auto main() -> int
{
  const std::size_t m = 1220, n=516;
  const std::function<std::size_t(std::size_t,std::size_t)> gcd =
  [&gcd](std::size_t m, std::size_t n) -> std::size_t {
    if ( n == 0 ) { return m; }
    if ( m == 0 ) { return n; }
    if ( n < 0 ) return 1;
    const std::size_t r = (m % n);
    return gcd( n,r );
  };
  std::cout << gcd(m, n);
}