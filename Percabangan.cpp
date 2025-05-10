#include <iostream>
using namespace std;

int main (){
	int jawaban;
	
	cout << "Berapakah hasil 3+5"<<endl;
	cout << "jawab>";
	cin >> jawaban;
	
	string hasil = (jawaban == 8)? "benar":"salah";
	cout << "Jawaban anda:"<<hasil<<endl;
}
