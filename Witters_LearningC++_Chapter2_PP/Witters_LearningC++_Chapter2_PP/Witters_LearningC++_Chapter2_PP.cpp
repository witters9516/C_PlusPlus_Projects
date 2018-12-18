// Witters_LearningC++_Chapter2_PP.cpp : Defines the entry point for the console application.
//Name: Shawn Witter
//Date: 12/18/2018
//Project Use: To Learn C++ Basics.


#include "stdafx.h"

//required for standard C++ Programs. ALWAYS ADD THEM IN FIRST.
using namespace std;
#include <iostream>

int main()
{
	//Method Definition
	void Problem1();
	void Problem2();
	void Problem3();

	//Title output
	cout << "Learning C++ Programming Problems 1-3 \n\n" << endl;
	
	//Problems 1-3 Output
	Problem1();
	Problem2();
	Problem3();

	//Pause and exit value.
	system("PAUSE");
	return 0;
}

void Problem1()
{
	/*
	Problem 1 - Sum of Two Numbers
	Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total.
	*/

	//Variables
	int p1n1 = 50;
	int p1n2 = 100;
	int p1n3 = p1n1 + p1n2;
	//Output
	cout << "Problem 1 - Sum of Two Numbers \n" << endl;
	cout << p1n1 << " + " << p1n2 << " = " << p1n3 << endl;
	cout << endl;
}

void Problem2()
{
	/*
	Problem 2 - Sales Prediction
	The East Coast sales division of a company generates 58 percent of total sales. Based
	on that percentage, write a program that will predict how much the East Coast division
	will generate if the company has $8.6 million in sales this year
	*/
	
	//Variables
	double p2n1 = .58;				//58%
	double p2n2 = 8600000.0;		//Money made in sales this year
	double p2n3 = p2n1 * p2n2;		//Prediction of how much the company will generate.
	//Output
	cout << "Problem 2 - Sales Prediction \n" << endl;
	cout << p2n1 << " * " << p2n2 << " = " << p2n3 << endl;
	cout << endl;
}

void Problem3()
{
	/*
	Problem 3 - Restaurant Bill
	Write a program that computes the tax and tip on a restaurant bill for a patron with
	a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
	be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
	amount, and total bill on the screen
	*/
	
	//Variables
	float p3n1 = 88.67f;				//Meal Charge
	float p3n2 = 0.0675f;				//Tax 6.75%
	float p3n3 = .2f;					//Tip 20%
	float p3n4 = p3n1 * p3n2;			//Calculated Tax
	float p3n5 = p3n3 * (p3n1 + p3n4);	//Calculated Tip
	float p3n6 = p3n1 + p3n4 + p3n5;	//Calculated Total
	//Output
	cout << "Problem 3 - Restaurant Bill \n" << endl;
	cout << "Meal Charge: " << p3n1 << endl;
	cout << "Tax(6.75% of Meal Charge): " << p3n4 << endl;
	cout << "Tip(20% of Meal and Tax): " << p3n5 << endl;
	cout << "Total: " << p3n6 << endl;
	cout << endl;
}

//cout
/*
	The cout (pronounced like "see out") is output method that writes to the console.
	- Similar to "Console.WriteLine(string)" in C#.

	Used like:
		cout << "Hello World";			//prints out "Hello World" to the console.

		OR

		cout << "Hello World" << endl;	//The endl part added to this line tells the program to move to the next line.


	Concatenating using cout:

	EX:
		cout << "Hello there " << "Friend" << endl;
			- This prints "Hello there Friend" and moves the program to the next line.
			- This can also be done with numbers. Note that any math done in between cout's should be put in parenthesis.
			- Numbers can be used using variables instead of hard coded into the cout statement.

		cout << "2+2=" << (2+2) << endl;

		OR

		int answer = 2 + 2;
		
		cout << "2+2=" << answer << endl;

	strings can be used within these statements but that will be discussed in later tutorials.

	note: numbers acts roughly the same as in C# and so do the signs for math(+, -, *, and /) 
		and assignment.(+=, -=, *=, and /=) There are changes when comparing some numbers like floats. 
		See Chapter 3 in book for that.
*/