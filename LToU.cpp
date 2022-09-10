#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
 char text;
 ifstream MyReadFile("Intro.txt");
 ofstream MyWriteFile("Intro1.txt");
 while(MyReadFile>>noskipws>>text){
 	
 	if(text>='a' && text>=)
 	text=text-32;
 	MyWriteFile<<text;
 }
 MyWriteFile<<endl;
 MyReadFile.close();
 


}
