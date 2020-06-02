/* ex15-1�� show_author() �Լ��� �����Լ��� �����ϰ� �Ļ�Ŭ����������
show_author()�� author�� title�� �Բ� ����ϵ��� ������.*/
#include <iostream>
using namespace std;

class B_class {
protected:
	char author[80];
public:
	void put_author(const char* s) { strcpy_s(author, s); }
	virtual void show_author() { cout << author << "\n"; }
};

class D_class : public B_class {
private:
	char title[80];
public:
	void put_title(const char* num) { strcpy_s(title, num); }
	void show_title() { cout << "Title: " << title << "\n"; }
	void show_author() {
		cout << "Author: " << author << "\n";
		cout << "Title: " << title;
	}
};

int main() {
	B_class* p;
	B_class B_ob;

	D_class* dp;
	D_class D_ob;

	p = &B_ob;
	p->put_author("Tom Clancy");

	dp = &D_ob;
	dp->put_author("William Shakespeare");
	dp->put_title("The Tempest");

	B_ob.show_author();
	D_ob.show_author();
	cout << "\n";

	return 0;
}