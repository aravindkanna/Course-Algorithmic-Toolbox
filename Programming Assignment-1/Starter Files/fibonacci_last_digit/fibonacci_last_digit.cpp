#include <iostream>

int get_fibonacci_last_digit(int n) {
	//write your code here
	int a =0, b=1, c;
	if(n<=1)
		return n;
	for(int i=2;i<=n;i++){
		c = (a+b)%10;
		a = b;
		b = c;
	}
	return c;
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}
