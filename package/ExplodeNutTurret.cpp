#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "ExplodeNutTurret.hpp"

const int ExplodeNutTurret::Price = 100;
ExplodeNutTurret::ExplodeNutTurret(float x, float y) :
    Turret("play/ExplodeNut.png", x, y, Price, 3, 1) {
        explosive = true;
    // Move center downward, since we the turret head is slightly biased upward.
    Anchor.y -= 5.0f / GetBitmapHeight();
}
void ExplodeNutTurret::CreateBullet() {
    return;
}
