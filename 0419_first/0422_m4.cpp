//실습 3

#include <iostream>
using namespace std;

int main()
{
	string n;
	cout << "이름을 입력하세요 : ";
	cin >> n;

	if (n == "홍길동")
	{
		cout << "남자";
	}
	else if (n == "성춘향")
	{
		cout << "여자";
	}
	else
	{
		cout << "모르겠어요";
	}
	return 0;
}