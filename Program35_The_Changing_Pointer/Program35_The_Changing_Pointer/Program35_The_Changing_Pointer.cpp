#include <iostream>
using namespace std;


int num1;
int num2;


void inputDetails(int* n1, int* n2)
{


	cout << "Please enter a number" << endl;
	cin >> num1;
	cout << "Please enter another number" << endl;
	cin >> num2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
	int* num1 = &integer1;
	int* num2 = &integer2;
	cout << "First number value is: " << *num1 << endl;
	cout << "First number mem address is: " << num1 << endl;
	cout << "Second number value is: " << *num2 << endl;
	cout << "Second number mem address is: " << num2 << endl;
	cout << "Pointer value: " << pointer << endl;
	cout << "Pointer dereferenced: " << *pointer << endl;
	cout << "Pointer mem address: " << &pointer << endl;

}



int main()
{	
	int* n1 = &num1;
	int* n2 = &num2;
	int* pNum = &num1;
	inputDetails(n1, n2);
	outputDetails(num1, num2, pNum);

	cout << "Pointer switch" << endl;
	pNum = &num2;
	outputDetails(num1, num2, pNum);

	//delete pNum; didnt work 
	pNum = nullptr;

}











//int myNum = 50;
//int* pPointerToMyNum = &myNum;

//cout << pPointerToMyNum << endl;
//cout << *pPointerToMyNum << endl;


//cout << &myNum << endl;
//cout << &pPointerToMyNum;