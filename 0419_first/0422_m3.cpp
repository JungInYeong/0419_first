#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "나이를 입력하세요 : ";
	cin >> n;

	if (1 <= n && n<= 7)
	{
		cout << "유아";
	}
	else if (8 <= n  && n <= 13)
	{
		cout << "초등학생";
	}
	else if (14 <= n && n <= 16)
	{
		cout << "중학생";
	}
	else if (17 <= n && n <= 19)
	{
		cout << "고등학생";
	}
	else if( n > 19 )
	{
		cout << "성인";
	}
	if (n >= 200)
	{
		cout << "나이가 너무 많습니다.";
	}

	return 0;
}