#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int c;
	//create a text file
	ofstream MyWriteFile("document.txt");
    //write to the file
     MyWriteFile <<"Files can be tricky , but fun enough";
    //close file
     MyWriteFile.close();
     
     string text ;
     ifstream  MyReadFile("document.txt");
     while(MyReadFile>>text){
     	cout<<text<<endl;
     	
	 }
MyReadFile.close();
}
