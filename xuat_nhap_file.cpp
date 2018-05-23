#include <iostream>
#include <fstream>      // std::fstream

using namespace std;

int main () {
	string name;
	int number;
  fstream fs;
  fs.open ("test.txt", std::fstream::out);  
  cout << "Nhap vao ten cua ban: " << endl;
  cin >> name;
  fs << name << endl;
  cout << "Nhap vao tuoi cua ban: " << endl;
  cin >> number;
  fs << number;
  fs.close();
  return 0;
}
