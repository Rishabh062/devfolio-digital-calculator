#include <iostream>
using namespace std;
bool isPalindrome(int number) {
   int temp = number;
   int rev = 0;
   while(number > 0){
      rev = 10 * rev + number % 10; //take the last digit, and attach with the rev number /= 10;
   }
   if(rev == temp)
      return true;
   return false;
}
int main() {
   int n = 12321;
   if(isPalindrome(n)){
      cout << n << " is palindrome number";
   } else {
      cout << n << " is not a palindrome number";
   }
}
