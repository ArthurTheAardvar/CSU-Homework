#include <iostream>
using namespace std; 


void probe() {

	double input;
	double input2;
	double divide;

	cout << "A couple of numbers, if you please: " << endl;
	cin >> input;
	cin >> input2;

	divide = input / input2;

	if (input == 0 or input2 == 0)
		cout << "you cant divide by that" << endl;

	else
		cout << "division of "<< input << " and " << input2 << " is " << divide << endl;

	if (input < input2)
		cout << "in order: " << input << " " << input2 << endl;
	else
		cout << "in order: " << input2 << " " << input << endl;

	if (input == 13 or input2 == 13)
		cout << "bad luck, unfortunate ngl" << endl;

 // initializes new variables to equal the old ones since they wont go through the equation below since they are doubles (include decimals.
	int input3 = input;
	int input4 = input2;

 //double dont work with this 
 //also all of this checks if the numbers are odd
	if (input3 % 2 == 1 and input4 % 2 == 1)
		cout << "Odd: " << input << " " << input2 << endl;
	else if (input3 % 2 == 1)
		cout << "Odd: " << input << endl;
	else if (input4 % 2 == 1)
		cout << "Odd: " << input2 << endl;
}



int main() {
	while (1)
		probe();


}

