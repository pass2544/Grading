#include<iostream>
#include<string>
using namespace std;
int main()
{
	float score;
	cout << "====================Grading porgram====================\n";
	cout << "Enter your score : ";
	cin >> score;
	cout << "=======================Processing======================\n";
	if (score >= 90 && score <= 100)
	{
		cout << "Your grade : A\n";
	}
	else if(score >=80 && score <=89)
	{
		cout << "Your grade : B\n";
	}
	else if(score >=70 && score <= 79)
	{
		cout << "Your grade : C\n";
	}
	else if(score >=60 && score <=69)
	{
		cout << "Your grade : D\n";
	}
	else if(score <=59 && score >= 0)
	{
		cout << "Your grade : F\n";
	}
	else if(score <0)
	{
		cout << "========================ERROR========================\n";
	}
	else if(score >100)
	{
		cout << "========================ERROR========================\n";
	}
	return(0);
}