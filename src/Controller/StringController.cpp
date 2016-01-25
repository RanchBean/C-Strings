/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: ethr5627
 */
#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController::StringController()
{
	str = "hello";
}

void StringController :: start()
{
	cout << str << endl;

	cout << str.length() << endl;

	cout << str.at(2) << endl;

	if(str.empty())
	{
		cout << "empty string" << endl;
	}
	else
	{
		cout << "not empty string" << endl;
	}
	cout  << str.substr(1,6) << endl;

	cout << str.substr(4) << endl;

	cout << "String please: " << endl;
	string string1;
	cin >> string1;

	cout << "second string please: " << endl;
	string string2;
	cin >> string2;

	if(!string1.compare(string2))
	{
		cout << "MATCH" << endl;
	}
	else
	{
		cout << "NO MATCH" << endl;
	}


}
