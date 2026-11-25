/*
Lab:01
Name:Syeda Maheen Ajmal
Roll no:18-11-2026
Purpose:To use an AI assistant to explain a compiler error,fix the error myself,and verify the corrected output.
Error: 'end'was not declared in this scope;did you mean endl?
AI tool: Claude
AI said: The stream manipulator for a newline is endl,not end.
 Writing "end" refers to something that doesnot exist, so it fails.
 Fix:    Changed "end" to "endl" on the last cout line.
 Verdict: AI was correct,because the program now compiles and prints the expected output.
 */         
#include<iostream>
using namespace std;
int main()
{ 
 cout<<"Lab 01 complete!"<<endl;
 cout<<"Next Lab:Variables and Input"<<endl;
return 0;
}
