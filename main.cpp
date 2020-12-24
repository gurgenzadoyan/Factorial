#include <iostream>

int factorial(int n){
    return n * factorial(n - 1);
}

int main(){
  int n;
  std::cout << "Plase enter the number";
  std::cin >> n;
  if (n>0){
  std::cout << "Factorial of " << n << " is " << factorial(n);
  } esle {
    std::cout << "Wrong number";
  }
  return 0;
}
