#include <iostream>

auto gcd(std::size_t m, std::size_t n) -> std::size_t//  gcd(1220, 516)
{
  if ( n == 0 ) { return m; }
  //
  std::size_t r = 0;
  while ( n > 0 ) {
    r = ( m % n );  // 1220 % 516 -> 188
    m = n;          // `m` takes `n`s value so: m -> 516
    n = r;          // `n` takes `results` value and so: n -> 188
  }
  return m;
}

auto main() ->int
{
  std::cout << "- enter two non-zero integers: ";
  std::size_t a=1220, b=516;
  std::cin >> a >> b;
  std::cout << gcd( a, b ) << '\n';
}
