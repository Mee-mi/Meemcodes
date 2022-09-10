#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//create a text file
	ofstream MyWriteFile("documentread2.txt");
    //write to the file
     MyWriteFile <<"Files can be tricky";
    //close file
     MyWriteFile.close();
     
     char ch;
     ifstream  MyReadFile("documentread2.txt");
     while(MyReadFile>>noskipws>>ch){
     	cout<<ch<<endl;
	 }
MyReadFile.close();
}
