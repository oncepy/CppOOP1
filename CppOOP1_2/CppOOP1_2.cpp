// CppOOP1_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

class Player {

private:
	int _health;
	int _power;
	string _name;

public:
	Player(int health, int power, string name) {
		_health = health;
		_power = power;
		_name = name;
	}
	void attack(Player& target) {
		cout << "Attack " << _name << " -> " << target._name << endl;
		target.damaged(_power);
	}
	void damaged(int power) {
		_health -= power;
		cout << "Damaged: " << _name << " " << _health << endl;
		if (_health <= 0) {
			cout << "Died, " << _name << endl;
		}
	}
};


int main()
{
	Player david(200, 100, "david");
	Player daniel(200, 100, "daniel");

	david.attack(daniel);
	david.attack(daniel);
}

