#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int number;
	int one, two, three, four, five;
	char cont = 'y';
	ifstream in_a;
	
	in_a.open("numbers.dat");
	if (in_a.fail()){
	 cout << "Something really aweful happened here with numbers.dat";
	 exit(1);
	}
	
	
	in_a >> one >> two >> three >> four >> five;
	
	cout << "If we add our previous numbers " << one << " " << two << " " << three << " " << four << " " << five << endl;
	cout << "The numbers total to: " << (one+two+three+four+five);
	in_a.close();
	
	return 0;
}