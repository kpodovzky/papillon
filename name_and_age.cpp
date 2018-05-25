#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
  {
	cout << "Please enter your name and age\n" ;
	string first; 
	string last;
	double age;

	cout << "First: ";
	cin >> first;
	cout << "Last: ";
	cin >> last;
	cout << "Age: ";
	cin >> age;

	cout << first << " " << last << ", you are just " << age*12 << " months\n";

	


  }  	
