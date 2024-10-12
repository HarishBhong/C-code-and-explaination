#include<iostream>
using namespace std;

int main()
 {
//   /*There are three types of loops in c++
// 		1.For Loop:
// 		2.While Loop:
// 		3.do-While Loop: 
		
// 		note : While and For loop both can do same work */

	

// 	For loop in c++ :
// 	int i=1;
// 	cout<<i<<endl;
// 	i++;
// 	cout<<i<<endl;
// 	i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;
// 	cout<<i<<endl;i++;

// 	syntax of for loop :
// 	for (initialization ; condition ; updation)
// 		{
// 			loop body(code);
// 		}
	
// 	infinite for loop :
// 	for (int i=3 ; 34<35 ; i++)
// 	{
// 		cout<<i<<endl;
// 	}

// 	/*While loop in C++ */
// 	syntax:

// 	while (condition)  ^remember no : or ; after while loop
// 	{
// 		body;
// 	}

// 	Printing 1 to 40 using while loop
// 	int i=1;
// 	while(i<=40)
// 	{
// 		cout<<i<<endl;
// 		i++;
// 	}

// 	infinite while loop :

// 	int i=1;
// 	while(true)
// 	{
// 		cout<<i<<endl;
// 		i++;
// 	}


// 	do while loop

// 	/*  syntax: do
// 				{	
// 					body
// 				} while(condition);  ^remember ; is imp after while in do-while loop ,BUT its not for 'while-loop'
// 	*/
	
	
// 	int i=1;
// 	do
// 	{
// 		cout<<i<<endl;
// 		i++;

// 	} while (i<=20);


// 	string password="hello123";
// 	string guess;
// 	do 
// 	{
// 		cout<<"guess password :";
// 		cin>>guess;

// 	}	while(false);
	

	int input = -1;
	while (input !=1 && input != 2 )
	{
		cout<<"type 1 or 2 : ";
		cin >> input;
		
		if (input == 1 || input ==2)
		{
			break;
		}
	}

return 0;		
}