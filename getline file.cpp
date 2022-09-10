#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int c;
	//create a text file
	ofstream MyWriteFile("document.txt");
    //write to the file
     MyWriteFile <<"Files can be tricky, but it is fun enough!";
    //close file
     MyWriteFile.close();
     
     string text ;
     ifstream  MyReadFile("document.txt");
     while(getline(MyReadFile,text)){
     	cout<<text<<endl;
     	c+= text.length();
     	cout<<"the total characters in a file are "<<c;	 }
MyReadFile.close();
}
