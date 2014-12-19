//first one
#include <iostream.h>
void main()
{
	cout <<"Hello, World!" << endl;
	return 0;
}

//second one
#include <iostream>
void main()
{
	cout << "Hello, World!" << endl;
}

//third one
#include <iostream>
void main()
{
	cout << "Hello, World!" << endl;
}

//fourth one
#include <iostream>
void main()
{
	cout << "Hello, World!" << endl;
}

#include <iostream>
void main()
{
	float num1;
	float num2;
	char op1;
	float ans;
	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter another number: ";
	cin >> num2;
	cout << "Press A to add the two numbers.";
	<< endl;
	<< "Press S to substract the two number.";
	<< endl;
    << "Press M to Multiply the two numbers."
    << endl;
    << "Press D to Divide the two numbers."
    << endl;
    cin >> op;
    if (op == 65)
    {
    	ans = num1 + num2;
    }
    if (op == 83)
    {
    	ans = num1 - num2;
    }
    if (op == 77)
    {
    	ans = num1 * num2;
    }
    if (op == 68)
    {
    	ans = num1 / num2;
    }
cout << "The asnwer is " << ans << endl;
}
