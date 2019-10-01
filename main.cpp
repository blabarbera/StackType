//Instructions: Two stacks of the same type are the same if they have the same number of 
//elementsand their elements at the corresponding positions are the same.
//Overload the relational operator == for the class stackType that returns true 
//if two stacks of the same type are the same; it returns false otherwise.
//Also, write the definition of the function template to overload this operator.
//Write a program to test the various overloaded operators and functions of class stackType.

#include <iostream>
#include "myStack.h"
#include <cstdlib>

using namespace std;

int main()
{
	int num;
	int count = 0;
	bool check = true;

	stackType<int> myStack(50);
	stackType<int> yourStack(50);

	myStack.initializeStack();
	yourStack.initializeStack();

	cout << "Enter a list of numbers ending in -999: " << endl; //-999 denotes the end of the list and forces the loop to exit

	while (check) //while loop to get user inputs and add them to stack
	{
		cin >> num;
		cin.clear();

		if (num != -999)
			myStack.push(num);
		else
			check = false;
	}

	//While loop to generate random numbers and add them to the stack.
	//USE FOR TESTING
	//while (count <= 20) 
	//{
	//	num = (rand());
	//	myStack.push(num);
	//	count++;
	//}

	//myStack.fillStack();

	yourStack = myStack;

	cout << "The elements of myStack: ";

	//While loop to print stack
	while (!myStack.isEmptyStack())
	{
		cout << myStack.top() << " "; //prints the top stack element
		myStack.pop(); //removes the top stack element 
	}
	cout << endl;

	cout << "The elements of yourStack: ";

	while (!yourStack.isEmptyStack())
	{
		cout << yourStack.top() << " ";
		yourStack.pop();
	}

	cout << endl;

	if (myStack == yourStack)
		cout << "They Match";
	else
		"No matchy.";

	return 0;
}