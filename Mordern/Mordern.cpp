// Mordern.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#pragma warning(disable:4996)
#include <iostream>
#include <string>

using namespace std;


int main()
{
	// C++ 스타일의 객체지향
	string s0 = "hello";
	string s1 = "world";

	s0.append(s1);
	cout << s0 << endl;

	// c 스타일의 절차지향 
	char s2[100] = "hello";
	char s3[] = "world";

	strcat(s2, s3);
	cout << s2 << endl;

}

