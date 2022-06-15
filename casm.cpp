#include <bits/stdc++.h>
#include <fstream>
using namespace std;

string inpFile;

ofstream fout;
ifstream fin;

void system(std::string const &s){ //@override
    std::system(s.c_str());
}

void helper(){
	cout << "Welcome to CASM (CppToAsm)! This program was developed by Sheyer to help you transform C++ code into Assembly (C++ inline) code\n";
}

void setup(){
	fout << "__asm__(R\"(\n";
}

void endup(){
	fout << ")\");\n";
}

int main(){
	helper();
	cout << "C++ File name without .cpp --> ";
	cin >> inpFile;

	system("g++ -S ./" + inpFile + ".cpp"+ " -o " + inpFile + ".s");
	sleep(5); // wait for g++ to finish, avoid overriding .s file

	fout.open(inpFile + ".s", ios::app);
	fout << "###Sheyed###\n"; // set break
	fout.close();

	fin.open(inpFile + ".s");
	fout.open(inpFile + "ASM.cpp");

	// read + output to new .cpp file
	string readLine;
	setup();
	while(true){
		getline(fin, readLine);
		if(readLine == "###Sheyed###") break;
		fout << readLine << "\n";
		
	}

	endup();
	fout.close();
	fin.close();
	system("rm " + inpFile + ".s"); // clear the .s file
	cout << "The generated file is named [" << inpFile + "ASM.cpp]\n";
	cout << "Please note that the generated .cpp file may not work with some Online Judge :( But anyway, enjoy!\n";

}
