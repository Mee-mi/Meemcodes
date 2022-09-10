#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//create a text file
	ofstream MyWriteFile("document.txt");
    //write to the file
     MyWriteFile <<"Files can be tricky, but it is fun enough!";
    //close file
     MyWriteFile.close();
}
