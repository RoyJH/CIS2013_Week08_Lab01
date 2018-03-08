#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int number;
	char cont = 'y';
	ofstream out_a;
	
	out_a.open("numbers.dat");
	if(out_a.fail()){
		cout << "Unable to open file numbers.dat" << endl;
		exit (1);
	}
	while ( cont == 'y'){
		cout << "Type a number to save to the file: ";
		cin >> number;
		
		out_a << number << " ";
		
		cout << "Type another number (y/n):";
		cin >> cont;
	}
	
	in_a.close();
	
	return 0;
}