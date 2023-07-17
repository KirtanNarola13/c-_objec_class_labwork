#include<iostream>
using namespace std;

class Car {
	public:
		int id;
		char company_name[50];
		char color[50];
		char model[50];
		int release_year;
};

int main ()
{
	
	
	Car c1;
	Car c2;
	Car c3;
	Car c4;
	
	
	cout << endl << "**********************" << endl << "Enetr info of 1st car" << endl << "**********************" << endl;
	cout << "Enter id : ";
	cin >> c1.id;
	cout << "Enter company name : " ;
	cin >> c1.company_name;
	cout << "Enter color : ";
	cin >> c1.color;
	cout << "Enter model name : ";
	cin >> c1.model;
	cout << "Enter relase year : ";
	cin >> c1.release_year;
	
	cout << endl << "**********************" << endl << "Enetr info of 2ed car" << endl << "**********************" << endl;
	cout << "Enter id : ";
	cin >> c2.id;
	cout << "Enter company name : " ;
	cin >> c2.company_name;
	cout << "Enter color : ";
	cin >> c2.color;
	cout << "Enter model name : ";
	cin >> c2.model;
	cout << "Enter relase year : ";
	cin >> c2.release_year;
	
	cout << endl << "**********************" << endl << "Enetr info of 3rd car" << endl << "**********************" << endl;
	cout << "Enter id : ";
	cin >> c3.id;
	cout << "Enter company name : " ;
	cin >> c3.company_name;
	cout << "Enter color : ";
	cin >> c3.color;
	cout << "Enter model name : ";
	cin >> c3.model;
	cout << "Enter relase year : ";
	cin >> c3.release_year;
	
	cout << endl << "**********************" << endl << "Enetr info of 4th car" << endl << "**********************" << endl;
	cout << "Enter id : ";
	cin >> c4.id;
	cout << "Enter company name : " ;
	cin >> c4.company_name;
	cout << "Enter color : ";
	cin >> c4.color;
	cout << "Enter model name : ";
	cin >> c4.model;
	cout << "Enter relase year : ";
	cin >> c4.release_year;
	
	cout << endl << "==========OUTPUT=================" << endl;
	
	cout << "1st car :- " << endl;
	cout << "Id => " << c1.id << endl;
	cout << "Company name => " << c1.company_name << endl;
	cout << "Color => " << c1.color << endl;
	cout << "Model name => " << c1.model << endl;
	cout << "Reale year => " << c1.release_year << endl;
	
	cout << "2st car :- " << endl;
	cout << "Id => " << c2.id << endl;
	cout << "Company name => " << c2.company_name << endl;
	cout << "Color => " << c2.color << endl;
	cout << "Model name => " << c2.model << endl;
	cout << "Reale year => " << c2.release_year << endl;
	
	cout << "3st car :- " << endl;
	cout << "Id => " << c3.id << endl;
	cout << "Company name => " << c3.company_name << endl;
	cout << "Color => " << c3.color << endl;
	cout << "Model name => " << c3.model << endl;
	cout << "Reale year => " << c3.release_year << endl;
	
	cout << "4st car :- " << endl;
	cout << "Id => " << c4.id << endl;
	cout << "Company name => " << c4.company_name << endl;
	cout << "Color => " << c4.color << endl;
	cout << "Model name => " << c4.model << endl;
	cout << "Reale year => " << c4.release_year << endl;
	
	
	return 0;
}
