// Witters_LearningC++_Chapter2_PP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
#include <iostream>

int main()
{
	/*
		Problem 1 - Sum of Two Numbers 
		Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total.
	*/

	int p1n1 = 50;
	int p1n2 = 100;
	int p1n3 = p1n1 + p1n2;
	cout << "Problem 1 - Sum of Two Numbers \n" << endl;
	cout << p1n1 << " + " << p1n2 << " = " << p1n3 << endl;

	/*
		Problem 2 - Sales Prediction
		The East Coast sales division of a company generates 58 percent of total sales. Based
		on that percentage, write a program that will predict how much the East Coast division
		will generate if the company has $8.6 million in sales this year
	*/
	double p2n1 = .58;
	double p2n2 = 8600000.0;
	double p2n3 = p2n1 * p2n2;
	cout << "Problem 2 - Sales Prediction \n" << endl;
	cout << p2n1 << " * " << p2n2 << " = " << p2n3 << endl;

	/*
		Problem 3 - Restaurant Bill
		Write a program that computes the tax and tip on a restaurant bill for a patron with
		a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
		be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip
		amount, and total bill on the screen
	*/
	float p3n1 = 88.67f;				//Meal Charge
	float p3n2 = 0.0675f;				//Tax 6.75%
	float p3n3 = .2f;					//Tip 20%
	float p3n4 = p3n1 * p3n2;			//Calculated Tax
	float p3n5 = p3n3 * (p3n1 + p3n4);	//Calculated Tip
	float p3n6 = p3n1 + p3n4 + p3n5;	//Calculated Total
	cout << "Problem 3 - Restaurant Bill \n" << endl;
	cout << "Meal Charge: " << p3n1 << endl;
	cout << "Tax(6.75% of Meal Charge): " << p3n4 << endl;
	cout << "Tip(20% of Meal and Tax): " << p3n5 << endl;
	cout << "Total: " << p3n6 << endl;

	system("PAUSE");
    return 0;
}

