#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//create a text file
	ofstream MyWriteFile("documentread2.txt");
    //write to the file
     MyWriteFile <<" Files can be tricky, but it's fun '";
    //close file
     MyWriteFile.close();
     
     char ch;
     ifstream  MyReadFile("documentread2.txt");
     while(MyReadFile>>noskipws>>ch){
     	ch=ch-32;
     	cout<<ch<<endl;
     	//No skip white spaces(noskipws) used to get all special characters  in the output
	 }
MyReadFile.close();
}
