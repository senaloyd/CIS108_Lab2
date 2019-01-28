// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    cout << "Enter the book title: "; 
	string book_title;
	getline(cin,book_title);
	cout << "Enter the name of the author: ";
	string author_name;
	getline(cin,author_name);
	cout << "Enter the publish year of the book: ";
	int publish_year;
	cin >> publish_year;
	cout << "Enter the total number of pages in the book: ";
	int pages;
	cin >> pages;
	
	// 1st if-else statement
	// Trying to use the constexpr here but it keeps breaking my code
	constexpr int current_year = 2019;
	int book_age = current_year - publish_year;

	if (book_age < 10) {
		cout << "This book is younger than ten years old." << endl;
	}
	else {
		cout << "This book is at least ten years old." << endl;
	}
	
	//2nd if-else statement 
	if (pages < 100) {
		cout << "This book is a short book." << endl;
	}
	else if (pages < 300) {
		cout << "This book is an average book." << endl;
	}
	else {
		cout << "This book is a long book." << endl;
	}

}

