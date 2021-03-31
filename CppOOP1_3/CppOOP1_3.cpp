// CppOOP1_3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

class Player 
{
private:
	int _health = 50;
	int _power = 10;
	const string _name = "no_name";


public:
	//Player() = default;
	//Player() = delete;
	Player() : Player(1000, 80, "no_name")
	{
	}
	Player(int health, int power, string name)
		: _health(health), _power(power), _name(name)
	{
		print();
	}

	void print()
	{
		cout << "Player " << _name << ", " << _health << ", " << _power << endl;
	}
};


int main()
{
	Player player0(100, 50, "a");
	Player player1 = Player(100, 50, "b");
	Player* player2 = new Player(100, 50, "c");

	Player player3;
	Player player4 = Player();
	Player* player5 = new Player();
}

