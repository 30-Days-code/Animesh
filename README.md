# 30 DAYS OF CODE

## DAY 1: Classes and Objects
Define a class to represent a book in a library. 
Include the following members: -
Data Members: 
 Book Number, Book Name, Author, Publisher, Price, No. of copies issued, No. of copies
 Member Functions:
 *	To assign initial values 
 *	To issue a book after checking for its availability 
 *	To return a book 
 * To display book information
 
 ## DAY 2: Inheritance
Write a program to read and display information about employees and managers. Employee is a class that contains employee number, name, address, and department. Manager class contains all information of the employee class and a list of employees working under a manager. (Use the concept of Inheritance to complete the program)

## DAY 3: If-Else Statement
Write a program to take input as a digit (0-999) and convert it into words.

## DAY 4: Pointers
Write a function to encode a string. The string should get converted into an unrecognizable form. (Hint: You may change the ASCII code of the constituent character by adding or subtraction a constant number from the original ASCII value of the constituent characters.)

## DAY 5: Constructor and Destructor
Define a class Clothing in C++ with the following descriptions:

Private Members:
 * Code => of type string
 * Type => of type string
 * Size => of type integer
 * Material => of type string
 * Price => of type float
A function Calc_Price() which calculates and assign the values of GPrice as follows:
For the value of Material as "COTTON":
######      Type                Price (Rs)
            TROUSER              1500
            SHIRT                1200

For Material other than "COTTON" the above mentioned Price gets reduced by 25%.
Public Members:
 * A constructor to assign initial values of Code, Type, and Material with the word "NOT ASSIGNED" and Price with 0.
 * A function Enter() to input the values of the data members Code, Type, Size, and Material and invoke the Calc_Price() function.
 * A function Show() to display the content of all the data members for a Clothing

## DAY 6: Arrays
Suppose A, B, C are arrays of integers of size M, N, and M+N, respectively. The numbers in array A appear in ascending order while the numbers in array B appear in descending order. Write a user-defined function in C++ to produce third array C by merging arrays A and B in Ascending order. Use A, B, and C as arguments in the function.

## DAY 7: Classes and Objects
Define a class TravelPlan in C++ with the following descriptions:
Private Members:
 * PlanCode => of type long
 * Place => of type character array (string)
 * Number_of_travellers => of type integer
 * Number_of_buses => of type integer
Public Members:
 * A constructor to assign initial values of PlanCode as 1001, place as "Agra", Number_of_travellers as 5, Number_of_buses as 1.
 * A function NewPlan() which allows user to enter PlanCode, Plan ad Number_of_travellers. Also, assign the value of Number_of_buses as per the following conditions:
  If, Number_of_travellers -> Less than 20 
  Then, Number_of_buses -> 1
  If, Number_of_travellers -> Equal to or more than 20 and less than 40 
  Then, Number_of_buses -> 2
  If, Number_of_travellers -> Equal to 40 or more than 40                      
  Then, Number_of_buses -> 3
 * A function ShowPlan() to display the content of all the data members on screen.
