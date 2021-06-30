#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "RemoveTurret.hpp"

const int RemoveTurret::Price = 0;
RemoveTurret::RemoveTurret(float x, float y) :
    Turret("play/shovel.png", x, y, Price, 3, 15) {
        remove = true;
    // Move center downward, since we the turret head is slightly biased upward.
    //Anchor.y -= 5.0f / GetBitmapHeight();
}
void RemoveTurret::CreateBullet() {
    return;
}
