#include <iostream>
using  namespace std;
int main ()
{
	string fullname;
	float A,B,C,D,E;
	cout << "Enter your full name : "; cin>> fullname;
	getline(cin,fullname);
	cout << "Enter C++ Programing Score : "; cin>>A;
	cout << "Enter Computer Repair Score : "; cin>>B;
	cout << "Enter English For Computer Score : "; cin>>C;
	cout << "Enter Computer Graphic Design Score : "; cin>>D;
	cout << "Enter Principle of Economic Score : "; cin >>E;
	float total = A+B+C+D+E;
	cout << "-------- ++ average score = " << (total/5) <<endl;
	cout << endl;
	cout << "-------- ++ Eng Sothearith Result ++ --------";
	cout << endl;
	cout << endl;
	cout << "-------- ++ C++ Programing = " << A<< endl;
	cout << "-------- ++ Computer repair = " << B<<endl;
	cout << "-------- ++ English for Computer = " << C<<endl;
	cout << "-------- ++ Computer Graphic Design = " <<D <<endl;
	cout << "-------- ++ Principle of Economic = " <<E <<endl <<endl;
	cout << "-------- ++ Total Score = " << total << endl;	
	return 0;
}
