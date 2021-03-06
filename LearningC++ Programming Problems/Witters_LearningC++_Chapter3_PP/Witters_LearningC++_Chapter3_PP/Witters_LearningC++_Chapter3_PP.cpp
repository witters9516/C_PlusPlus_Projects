// Witters_LearningC++_Chapter3_PP.cpp : Defines the entry point for the console application.
//Name: Shawn Witter
//Date: 12/18/2018
//Project Use: To Learn C++ Basics.

#include "stdafx.h"


#include <iostream>
using namespace std;

#include <iomanip>	//Required for setw() method

#include <string>	//needed for working with strings

#include <cstdlib>	//Required for rand() and srand() methods
#include <ctime>	//Required for the time method

int main()
{
	//Method Definitions
	void Problem1();
	void Problem2();
	void Problem3();
	void Problem4();
	void Problem5();
	void Test();

	//Problems 1-5 in Chapter 3's Problem Section
	cout << "Learning C++ Chapter 3:" << endl;
	cout << "Problems 1-5 " << endl;
	cout << endl;
	
	//Problems to display.
	Problem1();	//Problem 1 Method
	Problem2();	//Problem 2 Method
	Problem3();	//Problem 3 Method
	Problem4();	//Problem 4 Method
	Problem5();	//Problem 5 Method
	Test();

	system("PAUSE");
    return 0;
}

void Problem1()
{
	/*
		1. Miles per Gallon
		Write a program that calculates a car’s gas mileage. The program should ask the user
		to enter the number of gallons of gas the car can hold and the number of miles it can
		be driven on a full tank. It should then display the number of miles that may be driven
		per gallon of gas.	
	*/
	int gallons;
	int fullmiles;
	float mpg;
	
	cout << "\nProblem 1 - Miles Per Gallon\n" << endl;
	cout << "How many gallons of gas can the tank hold(Enter an integer): \t";
	cin >> gallons;
	cout << "How many miles can be driven on a full tank of gas(Enter an integer): \t";
	cin >> fullmiles;
	mpg = fullmiles / gallons;
	cout << "If you can drive " << fullmiles << " miles on a full tank of gas and there are " <<
		gallons << " gallons of gas in a full tank, you are getting roughly " << mpg << 
		" miles per gallon." << endl;
	cout << endl;
}

void Problem2()
{
	/*
		2. Stadium Seating
		There are three seating categories at a stadium. For a softball game, Class A seats cost
		$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
		many tickets for each class of seats were sold, then displays the amount of income generated 
		from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places
		of precision, and be sure the decimal point is always displayed.
	*/
	float seatACost = 15.00f;
	float seatBCost = 12.00f;
	float seatCCost = 9.00f;
	int numSeatsForA;
	int numSeatsForB;
	int numSeatsForC;
	float totalSalesForA;
	float totalSalesForB;
	float totalSalesForC;

	cout << "\nProblem 2 - Stadium Seating\n" << endl;
	cout << "How many tickets were sold for Class A (Enter an integer):\t";
	cin >> numSeatsForA;	//input Class A Seats Sold
	cout << "How many tickets were sold for Class B (Enter an integer):\t";
	cin >> numSeatsForB;	//input Class B Seats Sold
	cout << "How many tickets were sold for Class C (Enter an integer):\t";
	cin >> numSeatsForC;	//input Class C Seats Sold
	totalSalesForA = seatACost * numSeatsForA;	//Calculate Total sales for Class A
	totalSalesForB = seatBCost * numSeatsForB;	//Calculate Total sales for Class B
	totalSalesForC = seatCCost * numSeatsForC;	//Calculate Total sales for Class C
	
	//Display output
	cout << "Total Sales:" << endl;
	cout << setprecision(2) << fixed;	//Set number values to 2 decimal placed fixed.
	
	//setprecision(2) - A method that limits the number of decimal points allowed to a number (dot notation)
	//fixed - when used after setprecision, it formats following numbers in the form specified.
	
	cout << "Class A:" << setw(6) << "$" << totalSalesForA << endl;
	cout << "Class B:" << setw(6) << "$" << totalSalesForB << endl;
	cout << "Class C:" << setw(6) << "$" << totalSalesForC << endl;
}

void Problem3()
{
	/*
		3. Test Average
		Write a program that asks for five test scores. The program should calculate the average test 
		score and display it. The number displayed should be formatted in fixed-point notation, with 
		one decimal point of precision.
	*/
	int TestScore;
	int sumOfAllGrades = 0;

	cout << "\nProblem 3 - Test Average\n" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Test Score " << (i + 1) << "(Enter an integer):\t";
		cin >> TestScore;
		sumOfAllGrades += TestScore;
	}
	
	float average = sumOfAllGrades / 5.0;
	cout << setprecision(2) << fixed;
	cout << "The Average of these grades is:" << setw(6) << average << endl;

}

void Problem4()
{
	/*
		4. Average Rainfall
		Write a program that calculates the average rainfall for three months. The program should ask 
		the user to enter the name of each month, such as June or July, and the amount of rain 
		(in inches) that fell each month. The program should display a message similar to the following:
		The average rainfall for June, July, and August is 6.72 inches.
	*/
	string month1;
	string month2;
	string month3;
	float rainM1;
	float rainM2;
	float rainM3;
	float averageOfMonths;

	cout << "\nProblem 4 - Average Rainfall\n" << endl;
	cout << "Enter the name of the first month:\t";
	cin >> month1;
	cout << "Enter how much rain fell that month in inches(Enter a decimal):\t";
	cin >> rainM1;
	cout << "Enter the name of the first month:\t";
	cin >> month2;
	cout << "Enter how much rain fell that month in inches(Enter a decimal):\t";
	cin >> rainM2;
	cout << "Enter the name of the first month:\t";
	cin >> month3;
	cout << "Enter how much rain fell that month in inches(Enter a decimal):\t";
	cin >> rainM3;
	averageOfMonths = (rainM1 + rainM2 + rainM3) / 3.0;
	cout << setprecision(2) << fixed;
	cout << "The Average rainfall for the months of " << month1 << ", " << month2 << ", and " << month3 <<
		" is " << averageOfMonths << endl;
}

void Problem5()
{
	/*
		5. Male and Female Percentages
		Write a program that asks the user for the number of males and the number of females registered 
		in a class. The program should display the percentage of males and females in the class.
		Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class. 
		The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. 
		The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%
	*/
	int numBoys;				//number of boys in class
	int numGirls;				//number of girls in class
	int numPeopleInClass;		//total number of class students
	float percentageMale;		//percentage of boy students
	float percentageFemale;		//percentage of girl students
	cout << "\nProblem 4 - Male and Female Percentage\n" << endl;
	cout << "How many males are in this class(Enter an Integer):\t";
	cin >> numBoys;		//input number of boys
	cout << "How many females are in this class(Enter an Integer):\t";
	cin >> numGirls;	//input number of girls
	numPeopleInClass = numBoys + numGirls;								//Calculate total class count
	percentageMale = numBoys / static_cast<float>(numPeopleInClass);	//Calculate percentage of boys in class
	percentageFemale = numGirls / static_cast<float>(numPeopleInClass);	//Calculate percentage of girls in class
	cout << "The percentage of male students in this class is " << (percentageMale * 100.0f) << endl;
	cout << "The percentage of female students in this class is " << (percentageFemale * 100.0f) << endl;

}

void Test()
{

}

//cin info
/*
	cin has two possible uses:
		- cin >> variable
		- cin.get()

	1. cin >> variable
	- this way is a standard way to accept input.
	- It can be used multiple times like this and be safe.
	-DO NOT USE this method in combination without using the cin.ignore() method (see below)
		as the cin does not take '\n' (the enter key pressed at the end) as part of input.
		a. for example, if you use the standard way first and input "Fire", the program sees it as "Fire\n"
			and will stop reading at the '\n'. Then following with the second method, it will take the next 
			characters to be read as the input and use '\n' without waiting for your input.

	2. cin.get()
	- this method has two ways of being used:
		a. cin.get()
			-This can be used to pause the program as well as accept input.
		b. ch = cin.get()
			-This will take the input and assign it.

	***DEALING WITH THIS PROBLEM:
	Using cin.ignore() will help remove the issue

	EX:
	cout << "Enter F:";
	cin >> f;
	cout << "Now enter G:";
	cin.ignore()	//This will ignore the very next character
	g = cin.get()

	There are 2 different ways of using this method:
	1. cin.ignore()
		- This ignores the very next character of input.
	2. cin.ignore(int n, char c)
		- n = number of characters to skip; c = a character to stop skipping upon encounter.
		- So if we have cin.ignore(5, 'A'), this tells the program to skip the next five characters 
			UNLESS it comes across the character 'A'. At this time, the program will continue.

	Using the cin.ignore() method could help fix the issue of combining the two versions of cin.get().

*/
//Changing DataTypes
/*
	CASTING DATA TYPES:

	The use of casting data types is amazing because it can switch from integer to float or float to double.
	This can be done by using the following method:

		static_cast<data_type>(variable)
*/
//Other math related functions
/*
	OTHER MATH FUNCTIONS

	abs(x) - y = abs(x) - Argument is an integer - Gets the Absolute Value of x; Returned as an integer

	cos(x) - y = cos(x) - Argument is an double - Finds the cosine of x; Returned as a double

	sin(x) - y = sin(x) - Argument is an double - finds the sine of x; Returned as a double

	tan(x) - y = tan(x) - Argument is an double - finds the tangent of x; Returned as a double

	exp(x) - y = exp(x) - Argument is an double - finds the exponential function of x;  Returned as a double

	log(x) - y = log(x) - Argument is an double - finds the natural logarithm of x; returned as a double

	log10(x) - y = log10(x) - Argument is an double - finds the base-10 logarithm of x; returned as a double

	sqrt(x) - y = sqrt(x) - Argument is an double - finds the square root of x; returned as a double

	fmod(x, z) - y = fmod(x, z) - Returns, as a double, the remainder of the first argument
		divided by the second argument. Works like the modulus operator, but the arguments 
		are doubles. (The modulus operator only works with integers.) Take care not to pass
		zero as the second argument. Doing so would cause division by zero.

	pow(variable, 2.0) - pow(x, 2.0) - x is multiplied by itself a number of times equal to the second argument.
		This method is used for exponents. If X = 3; then the program would use the method and return 9.
*/
//Random numbers and Time
/*
	Random Numbers can be used using the following function:

	- rand()
		- this function will return a random number (used alone, it will return random numbers in an exact 
		order). There is a way to fix it.
		
	- srand(unsigned int seedValue)
		- This method can be used to change the exact order of numbers returned by the rand() method.
	
	***FOR THESE TWO RANDOM METHODS, YOU NEED TO USE THIS INCLUDE STATEMENT:
		- #include <cstdlib>
			- covers random functions

	TO USE srand(), you must also use a time(0) method!!!

	- time(0)
		- this method returns a number of seconds after the beginning of Jan 1, 1970. (Weird I know!)

	***TO USE time(0), YOU MUST USE THIS INCLUDE STATEMENT:
		- #include <ctime>
			- covers time functions

	Getting a random number between a range:
		- What you need:
			-The Include statements from above.
			- a max and min value variable (2 total)
			- a seed variable that is assigned to time(0).
			- a use of srand
			- the following formula.
				- variable = (rand() % (maxValue − minValue + 1)) + minValue	//"variable = " is optional.

			- EX:
				#include <cstdlib>	//outside of main
				#include <ctime>	//outside of main
				
				//Get System Time
				unsigned seed = time(0);
				//Seed the RNG
				srand(seed);

				//Max and min values
				minValue = 0;	//minimum is 0
				maxValue = 10;	//maximum is 10

				//choose a number between 0 and 10.
				y = (rand() % (maxValue − minValue + 1)) + minValue;

				//Print it out
				cout << y << endl;
*/
//Methods
/*
	***WIll Be Explained later but a brief explanation on use.

	To use methods what is required is:
		- A method defition
			- This is a one line that states what type of method, name, and parameters.
				-ex:
					void Method1();
					void Method2(int i);
					int Method3();
					int Method4(int i, float f);
		- The function body(the normal way used in C#) outside of the main method.
			-As long a the method has a definition, this body will contain the code to be carried out.
				-ex:
					void Method1()
					{
						...
					}

					void Method2(int i)
					{
						int temp = i;
						...
					}

					int Method3()
					{
						...
						return 0;
					}

					int Method4(int i, float f)
					{
						int tempInt = i;
						float tempFloat = f;
						...
						return 0;
					}

		- Finally what is needed is to call it within the main method.
			-ex:
				int main()
				{
					//Definitions
					void Method1();
					void Method2(int i);
					int Method3();
					int Method4(int i, float f);

					//Calling the methods
					Method1();
					Method2(1);
					int temp = Method3();
					int temp2 = Method4(1, 1.0f);
				}
*/