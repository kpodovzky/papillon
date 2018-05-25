# Author:  יְהוֹשֻׁעַ‬
# Email:   josue@kpodovzky.org
# GitHub:  https://github.com/Kpodovzky
# Licence: GNU GPL v3
# Website: https://kpodovzky.org
# Info: Classic Hello Word!

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

	cout << "Hello "<< first << " " << last << "! You are just " << age*12 << " months\n";

	


  }  	
