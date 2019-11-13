#include <iostream>
using namespace std;

bool AskIfMarried() 
{  
	string question;
	bool isMarried;
	cout << "Are you married? Yes/No" << endl;
	cin >> question;

	if (question == "Yes")
	{
		isMarried = true;
	}
	else
	{
		isMarried = false;
	}
	return isMarried;
}

int main()
{
	string name;
	int age;
	char gender;
	string adress;
	double lenght;
	
	cout << "Name?:" << endl;	
	cin >> name;
	
	cout << "age?" << endl;
	cin >> age;
	
	cout << "gender: M/F " << endl;
	cin >> gender;
	
	cout << "Address: " << endl;
	cin >> adress;
	
	cout << "Length? (in metres)" << endl;
	cin >> lenght;
	
	bool married = AskIfMarried();
	cout << "Name: " << name << "\nAge: " << age << "\nAdress: " << adress << "\nGender: "  << gender << "\nLenght: " << lenght << "\nIs married: " <<   (married ? "True" : "False") << endl;
	
	system("pause");
	return 0;
}

