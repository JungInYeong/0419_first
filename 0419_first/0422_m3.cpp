#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "���̸� �Է��ϼ��� : ";
	cin >> n;

	if (1 <= n && n<= 7)
	{
		cout << "����";
	}
	else if (8 <= n  && n <= 13)
	{
		cout << "�ʵ��л�";
	}
	else if (14 <= n && n <= 16)
	{
		cout << "���л�";
	}
	else if (17 <= n && n <= 19)
	{
		cout << "����л�";
	}
	else if(20 >= n)
	{
		cout << "����";
	}

	return 0;
}