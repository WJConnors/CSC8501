#include <iostream>
#include "Enemy.h"
#include "ArmedEnemy.h"

using namespace std;

void some_function(Enemy& enemy) { enemy.set_score(6); }

int main()
{
    ArmedEnemy* ae = new ArmedEnemy(2, 5);
    ae->set_hp(3);
    cout << "hp = " << ae->get_hp() << endl;

    ae->shoot();

    some_function(*ae);

    delete ae;
    ae = nullptr;
    
    return 0;
}

