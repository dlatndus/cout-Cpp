﻿#include <iostream>//cout, endl 사용
#include<stdio.h> //printf사용
#include<string.h>//strcpy사용
#include<string>//std::string클래스 사용
using namespace std;


int main(void) {

	char cMunja[20];
	strcpy(cMunja, "c_insert");
	printf("%s\n", cMunja);

	/*std::*/string cppMunja; //using 써서 안써도 오류 안남
	cppMunja = "cpp_insert";
	cout << cppMunja << endl;

	return 0;
}
