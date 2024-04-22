    // 1. 숫자를 입력해주세요 : <-- 문자열 출력하기
	// 2. 사용자에게 정수형 값을 입력받기
	// 3. 입력받은 값을 정수형 변수에 저장하기

#include <iostream>

int main()
{
	int n;									// 문자  != 문자열
	std::cout << "숫자를 입력해 주세요 : "; // 문자열 \n 줄바꿈
	std::cin >> n;
	std::cout << n;

	// 세미콜론 : 프로그램이 실행되는 "단위"
	// int myNameIsJohn : 카멜(낙타) 기법
	// int my_name_is_john : 스네이크 표기법

	// char word = 'A'; 문자(작은 따옴표)
	// std::string myname = "john"; 문자열(큰 따옴표)
	// 선언과 동시에 값을 넣는 것 = "초기화" 한다.
	// string test3; <- test3 메모리 할당, 변수 선언
	// 여기 밑에서 부터 test3 이름만 갖고 사용 가능
	// test3 = "포스코"; 변수 사용


	return 0;
}