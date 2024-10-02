#include <iostream>
#include <vector>
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

    vector<int> scores(5, 0);
    scores[0] = 1; scores[1] = 2; scores[2] = 3;

    for (int score : scores)
    {
        cout << "scores " << score << endl;
    }

    vector<Enemy>* enemies = new vector<Enemy>(3);
    Enemy fourth, fifth;
    enemies->push_back(fourth);
    enemies->push_back(fifth);
    //could use enemies->emplace_back() for more memory efficiency
    cout << "size of enemies = " << enemies->size() << endl;

    int i{ 0 };
    for (auto& enemy : *enemies)
    {
        enemy.set_score(scores[i]);
        cout << "score = " << enemy.get_score() << endl;
        i++;
    }

    Enemy newthird;
    enemies->insert(enemies->begin() + 2, newthird);
    enemies->erase(enemies->begin() + 2);

    Enemy& back = enemies->back();
    cout << "hit points last element  = " << back.get_hp() << endl;
    enemies->pop_back();
    cout << "new size of enemies = " << enemies->size() << endl;

    delete enemies;
    
    return 0;
}

