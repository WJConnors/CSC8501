#include <iostream>
#include "Enemy.h"

using namespace std;

int main()
{
    Enemy ei(2);
    cout << "hp = " << ei.get_hp() << endl;

    Enemy* e2 = new Enemy(2);
    e2->set_hp(3);
    cout << "hp = " << e2->get_hp() << endl;

    e2->set_score(2);
    cout << "score = " << e2->get_score() << endl;

    delete e2;
    e2 = nullptr;
    
    return 0;
}

