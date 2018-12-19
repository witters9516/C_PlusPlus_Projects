// Witters_LearningC++_Chapter4_PP.cpp : Defines the entry point for the console application.
//Name: Shawn Witter
//Date: 12/18/2018
//Purpose: To Learn C++

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	//Method Definitions
	void Problem1();
	void Problem2();
	void Problem3();
	void Problem4();
	void Problem5();
	
	//Output
	cout << "Learning C++ Chapter 4 - Problems 1-5\n" << endl;
	
	//Problems
	//Problem1();
	//Problem2();
	//Problem3();
	//Problem4();
	//Problem5();

	system("PAUSE");
    return 0;
}

void Problem1()
{
	/*
		1. Minimum/Maximum - Write a program that asks the user to enter two numbers. The program
		should use the conditional operator to determine which number is the smaller and which is 
		the larger.
	*/

	//Variables
	int first;
	int second;
	int minimum;
	int maximum;

	//Output
	//Prompt First Answer
	cout << "Problem 1 - Minimum/Maximum:\n" << endl;
	cout << "Enter the first integer:\t";
	cin >> first;
	
	//Set both to the first number
	minimum = first;
	maximum = first;
	
	//Prompt Second integer
	cout << "Enter the second integer:\t";
	cin >> second;
	
	//Conditional operators to determine answer.
	if (second < minimum)
		minimum = second;
	else if (second > minimum)
		maximum = second;
	else
		cout << "Both numbers are the same." << endl;
	//Final Answer
	cout << "Minimum:\t" << minimum << endl;
	cout << "Maximum:\t" << maximum << endl;
	cout << endl;
}

void Problem2()
{
	/*
		2. Roman Numeral Converter - Write a program that asks the user to enter a number within 
		the range of 1 through 10. Use a switch statement to display the Roman numeral version of
		that number. Input Validation: Do not accept a number less than 1 or greater than 10.
	*/

	//Variables
	int number;	//number between 1 and 10
	
	//Output
	cout << "Program 2 - Roman Numeral Converter" << endl;

	//Prompt a number between 1 and 10.
	cout << "Enter an integer between 1 and 10:\t";
	cin >> number;

	//Switch to test the number inputed. anything not in the range gets the default case.
	switch (number)
	{
		case 1:
			cout << "Roman Numeral: I" << endl;
			break;
		case 2:
			cout << "Roman Numeral: II" << endl;
			break;
		case 3:
			cout << "Roman Numeral: III" << endl;
			break;
		case 4:
			cout << "Roman Numeral: IV" << endl;
			break;
		case 5:
			cout << "Roman Numeral: V" << endl;
			break;
		case 6:
			cout << "Roman Numeral: VI" << endl;
			break;
		case 7:
			cout << "Roman Numeral: VII" << endl;
			break;
		case 8:
			cout << "Roman Numeral: VIII" << endl;
			break;
		case 9:
			cout << "Roman Numeral: IX" << endl;
			break;
		case 10:
			cout << "Roman Numeral: X" << endl;
			break;
		default:
			cout << "It must be a number between 1 and 10! Please try again." << endl;
			break;
	}
}

void Problem3()
{
	/*
		3. Magic Dates - The date June 10, 1960 is special because when we write it in the following
		format, the month times the day equals the year.
	
		6/10/60
	
		Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year.
		The program should then determine whether the month times the day is equal to the year. If so, it 
		should display a message saying the date is magic. Otherwise it should display a message saying the
		date is not magic.
	*/

	//Variables
	int month = 0;
	int day = 0;
	int year = 0;

	//Output
	cout << "Problem 3 - Magic Dates" << endl;
	//Prompt to enter Month
	cout << "Enter the Month as a number(Between 1 and 12):\t";
	cin >> month;

	//Check if it'll be an error and let the user know.
	if (month < 1 || month > 12)
		cout << "Error: This number is not within the needed range. The result will be a not magic year." << endl;

	//Prompt to enter Day
	cout << "Enter the Day as a number(Between 1 and 31):\t";
	cin >> day;
	
	//Check if it'll be an error and let the user know.
	if (day < 1 || day > 31)
		cout << "Error: This number is not within the needed range. The result will be a not magic year." << endl;

	//Prompt to enter Year
	cout << "Enter the Year as a two-digit number(Between 1 and 99):\t";
	cin >> year;
	
	//Check if it'll be an error and let the user know.
	if (year < 1 || year > 99)
		cout << "Error: This number is not within the needed range. The result will be a not magic year." << endl;

	//Print out year
	cout << month << "/" << day << "/" << year << endl;

	//Check for magic year and tell the user.
	if ((year / day) == month)
		cout << "This is a magic year!" << endl;
	else
		cout << "This is not a magic year!" << endl;

}

void Problem4()
{
	/*
		4. Areas of Rectangles - The area of a rectangle is the rectangle’s length times its width. Write a
		program that asks for the length and width of two rectangles. The program should tell the user which
		rectangle has the greater area, or if the areas are the same.
	*/

	//Variables
	int rect1Length;
	int rect1Width;
	int rect2Length;
	int rect2Width;
	int rect1Area;
	int rect2Area;

	//Output
	cout << "Problem 4 - Area of Rectangles\n" << endl;

	//Prompted for length of Rectangle 1
	cout << "Enter the length of the first rectangle(integer):\t";
	cin >> rect1Length;
	
	//Prompted for width of Rectangle 1
	cout << "Enter the width of the first rectangle(integer):\t";
	cin >> rect1Width;
	
	//Prompted for length of Rectangle 2
	cout << "Enter the length of the second rectangle(integer):\t";
	cin >> rect2Length;
	
	//Prompted for width of Rectangle 2
	cout << "Enter the width of the second rectangle(integer):\t";
	cin >> rect2Width;

	//Calculate the area of both rectangles.
	rect1Area = rect1Length * rect1Width;
	rect2Area = rect2Length * rect2Width;

	//Print out both areas to user
	cout << "Rectangle 1 Area:\t" << rect1Area << endl;
	cout << "Rectangle 2 Area:\t" << rect2Area << endl;

	//Check to see which rectangle is bigger or if they are the same.
	if (rect1Area > rect2Area)
		cout << "The First rectangle has a greater area than the Second rectangle." << endl;
	else if(rect1Area < rect2Area)
		cout << "The Second rectangle has a greater area than the First rectangle." << endl;
	else
		cout << "Both Rectangles have the same area." << endl;
}

void Problem5()
{
	/*
		5. Body Mass Index - Write a program that calculates and displays a person’s body mass index (BMI). 
		The BMI is often used to determine whether a person with a sedentary lifestyle is overweight or 
		underweight for his or her height. A person’s BMI is calculated with the following formula:
	
		BMI = weight x 703 / height^2
	
		where weight is measured in pounds and height is measured in inches. The program should display a 
		message indicating whether the person has optimal weight, is underweight, or is overweight. A 
		sedentary person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25. 
		If the BMI is less than 18.5, the person is considered to be underweight. If the BMI value is 
		greater than 25, the person is considered to be overweight.
	*/

	//Variables
	int weight;
	int height;
	float BMI;
	
	//Output
	cout << "Problem 5 - Body Mass Index\n" << endl;

	//Prompt for user's weight
	cout << "Enter your weight rounded to the nearest pound.(Integer):\t";
	cin >> weight;

	//Prompt for user's height
	cout << "Enter your height in inches rounded to the nearest inch(Integer):\t";
	cin >> height;

	//Calculate BMI
	BMI = static_cast<float>(weight) * (703 / (pow(static_cast<float>(height), 2.0f)));

	//Display BMI
	cout << "BMI:\t" << BMI << endl;

	//Determine optimal, underweight, or overweight
	if (BMI >= 18.5 && BMI <= 25)
		cout << "You are your optimal weight!" << endl;
	else if (BMI < 18.5)
		cout << "You are considered to be underweight" << endl;
	else
		cout << "You are considered to be overweight" << endl;
}

//The ? Operator
/*
	The conditional operator - "?"

	ex: 

		X < 20 ? Y = 10 : Y = 5;

	This operator is similar to a simple if/else statement. In fact, heres that version of the statement

	ex:
		if(X < 20)
			Y = 10;
		else
			Y = 5;
*/
//Menus
/*
	Menus are fairly easy to create. All you would need is:
	- Printed out statements(numbered or lettered) to tell the user what they want to do.
	- A variable to contain the answer(A char could do in this case.)
	- A Switch statement to contain how the program picks its options. (You could use ifs but it could get long)
	EX:

		char a = '0';

		cout << "Welcome to the Math Simulator\n" << endl;
		cout << "1. Option One" << endl;
		cout << "2. Option Two" << endl;
		cout << "3. Option Three" << endl;
		cout << "4. Quit the program" << endl;
		cout << "Please enter in a number that corresponds with the options:\t";
		cin >> a;

		switch(a)
		{
			case 1:
				...
				break;
			case 2:
				...
				break;
			case 3:
				...
				break;
			case 4:
				...
				break;
			default:
				cout << "You have entered an invalid choice. Please try again." << endl;
		}

		***To better use this idea, use it with a while loop that utilizes a bool variable 
		that will tell it to quit or not and keep the program running.
*/
//The ! operator
/*
	The ! operator is an excellent way to flip a value so to speak.
	It is read as "NOT" and is used along side the "&&" and "||" operators in if statements.
	Since if statements return true or false based on what is inside the if, the not will make that 
	expression the opposite. True would become false as false would become true.
*/
//Integer flags
/*
	Integer flags are integers that signify true or false. In C++, 0 = false while anything else reads as true.
	EX:
		int x = 0;
		int y = 1;

		if (x)	//reads as false
			cout << "false";

		if (y)	//reads as true
			cout << "true";
*/
//Comparing Floating point numbers and the round off error
/*
	Comparing some floating point(floats and doubles) can have some small issues. If they are very close 
	but not quite the same, the program might round the number to the point to where they will be seen 
	of the same. 
*/