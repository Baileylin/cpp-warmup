// Name: Yikang Lin
// Date: Februrary 22, 2021

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;
   for (int num = 1; num <= N; num++) {
	   //if the number is divisible by both X and Y, print out FizzBuzz
	   if (num % X == 0 && num % Y == 0) {
		   cout << "FizzBuzz" << endl;
	   }
	   //if the number is only divisible by X, print out Fizz
	   else if (num % X == 0 && num % Y != 0) {
		   cout << "Fizz" << endl;
	   }
	   //if the number is only divisible by Y, print out Buzz
	   else if (num % X != 0 && num % Y == 0) {
		   cout << "Buzz" << endl;
	   }
	   //if the number isn't divisible by X and Y, print out the number itself
	   else {
		   cout << num << endl;
	   }
   }
}

