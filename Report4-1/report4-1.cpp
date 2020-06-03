/* �� ���� ���� �Ÿ��� double ������ �����ϴ� distance��� �⺻ Ŭ������ �����ϴ� ���α׷��� �ۼ��Ͽ���.
�׸��� �� �Ÿ��� �������� �� �ɸ��� �ð��� ����ϴ� trav_time()�̶�� �����Լ��� distance�� �����Ͽ���. ���⼭ �Ÿ���
����(mile) �����̰� �ӵ��� �ü� 60�����̶�� �����Ѵ�. metric�̶�� �Ļ� Ŭ���������� �Ÿ��� ų�ι��� ������,
�ӵ��� �ü� 100ų�ι��Ͷ�� �������� ���� �ɸ��� �ð��� ����ϵ��� trav_time()�� �������̵��Ͽ���. 
�� Ŭ������ ��ü�� ������ �Ŀ� �ð��� ����ϴ� main�Լ��� �ۼ��϶�. */
#include <iostream>
using namespace std;

class distance {
protected:
	double dist;	// �Ÿ� ����
public:
	void set_distance(double dist) { this->dist = dist; }
	virtual void trav_time() {
		cout << dist << "������ �ü� 60���Ϸ� �������µ� �ɸ��� �ð��� " << (dist / 60) << "�ð�\n" ;
	}
};

class metric : public distance {
public:
	void trav_time() {
		cout << dist << "km�� �ü� 100km�� �������µ� �ɸ��� �ð��� " << (dist / 100) << "�ð�\n";
	}
};

int main() {
	::distance a;	// STL ǥ�� ���̺귯���� std::distance ��� template�� ���ǵǾ� �ִ�. ���� ������ ���� ���
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