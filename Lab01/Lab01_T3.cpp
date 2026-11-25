/*
Lab:01
Name:Syeda Maheen Ajmal
Roll no:2026-SE-24
Date:18-11-26
Purpose:To identify and fix common syntax errors in C++ and to practice using cout,endl and escapes sequences.
*/
#include <iostream>
using namespace std;//Bug1: missing ; after std
int main()
{
	cout<<"Welcome to the lab!"<<endl;//Bug2:missing ; after endl
	cout<<"Today we learn \"C++\"."<<endl;//Bug3:lowercase c in cout
	cout<<"Files are in C:\\Lab01"<<endl;//Bug4:doublr backslash needed to print\
	cout<<"Bye!"<<endl;//Bug5:missing closing quote after Bye!
	return 0;
}
