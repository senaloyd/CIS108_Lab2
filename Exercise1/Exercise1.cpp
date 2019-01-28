// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }


int main()
{	
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int age_ten = age + 10;
	cout << "In ten years you will be " << age_ten << endl;
	cout << "Enter the temperature in Fahrenheit: ";
	double ftemp;
	cin >> ftemp;
	double ctemp = ((ftemp - 32 ) * 5/9);
	cout << "The temperature in degrees Celsius is " << ctemp << endl;

}
