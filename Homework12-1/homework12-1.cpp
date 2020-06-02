/* ex15-1의 show_author() 함수를 가상함수로 선언하고 파생클래스에서는
show_author()가 author와 title를 함께 출력하도록 만들어라.*/
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