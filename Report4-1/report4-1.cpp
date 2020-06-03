/* 두 지점 간의 거리를 double 변수에 저장하는 distance라는 기본 클래스를 생성하는 프로그램을 작성하여라.
그리고 그 거리를 지나가는 데 걸리는 시간을 출력하는 trav_time()이라는 가상함수를 distance에 생성하여라. 여기서 거리는
마일(mile) 단위이고 속도는 시속 60마일이라고 가정한다. metric이라는 파생 클래스에서는 거리를 킬로미터 단위로,
속도를 시속 100킬로미터라고 가정했을 때의 걸리는 시간을 출력하도록 trav_time()을 오버라이드하여라. 
두 클래스의 객체를 생성한 후에 시간을 출력하는 main함수를 작성하라. */
#include <iostream>
using namespace std;

class distance {
protected:
	double dist;	// 거리 변수
public:
	void set_distance(double dist) { this->dist = dist; }
	virtual void trav_time() {
		cout << dist << "마일을 시속 60마일로 지나가는데 걸리는 시간은 " << (dist / 60) << "시간\n" ;
	}
};

class metric : public distance {
public:
	void trav_time() {
		cout << dist << "km를 시속 100km로 지나가는데 걸리는 시간은 " << (dist / 100) << "시간\n";
	}
};

int main() {
	::distance a;	// STL 표준 라이브러리에 std::distance 라는 template이 정의되어 있다. 따라서 다음과 같이 사용
	::distance* p;
	p = &a;
	p->set_distance(60.0);
	p->trav_time();

	metric b;
	p = &b;
	p->set_distance(120.0);
	p->trav_time();

	return 0;
}