#include <iostream>

using namespace std;

class Phone {
public:
	void power() {
		cout << "Phone: called" << endl;
	}
};

class Printer {
public:
	void power() {
		cout << "Printer: called" << endl;
	}
};

class Fax : public Phone, public Printer {
public:
	void power() {
		cout << "Fax: called" << endl;
	}
};

int main3(void)
{
	Fax myFax;

	// ���� �����ڸ� �̿��Ͽ� �θ�Ŭ������ ��� �Լ� ȣ��
	myFax.Phone::power();
	myFax.Phone::power();
	myFax.power();

	return 0;
}

// ���� ��ӽ� ������ �⺻ Ŭ������ ���ǵ� ���� �̸��� ��� �Լ� ȣ��