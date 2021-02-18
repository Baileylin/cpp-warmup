// Name:
// Date:

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   for (int num = 1; num <= N; num++) {
	   if (num % X == 0 && num % Y == 0) {
		   cout << "FizzBuzz" << endl;
	   }
	   else if (num % X == 0 && num % Y != 0) {
		   cout << "Fizz" << endl;
	   }
	   else if (num % X != 0 && num % Y == 0) {
		   cout << "Buzz" << endl;
	   }
	   else {
		   cout << num << endl;
	   }
   }
}

