#include "ship.h"

Ship::Ship(int hps) : hp(hps) {}
int Ship::get_hp() const { return hp; }
void Ship::hit() { hp--; }