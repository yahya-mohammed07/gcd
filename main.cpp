#include <iostream>

int gcd(int m, int n) //  gcd(1220, 516)
{
  if ( n == 0 ) { return m; }
  //
  int r = 0;
  while ( n > 0 ) {
    r = ( m % n );  // 1220 % 516 -> 188
    m = n;          // `m` takes `n`s value so: m -> 516
    n = r;          // `n` takes `results` value and so: n -> 188
  }
  return m;
}

int main()
{
  //std::cout << "- enter two non-zero integers: ";
  int a=1220, b=516;
  //std::cin >> a >> b;
  for (int i = 0; i < 100'000; ++i) {
    std::cout << gcd( a, b ) << '\n';
  }
}
