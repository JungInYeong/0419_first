// 작성자 : 정인영
// 작성일자 : 2024.04.22
// main 문이 있는 파일

#include <iostream>

// 프로그램 전체에서 딱 1개만 존재하는 "함수"
// 프로그램에서 가장 먼저 "실행"되는 소스 코드
int main()
{
	// 콘솔문자 "출력"
	std::cout << "Hello, World.\n";

	// int : 자료형, 정수(integer)
	// num : 변수 이름, 약간의 제약 + 자유롭게 지정 가능

	int num; // 숫자, 정수가 들어갈 수 있는 공간

	//콘솔 문자 "입력"
	std::cin >> num;

	return 0;
}
