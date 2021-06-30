#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "WallNutTurret.hpp"

const int WallNutTurret::Price = 50;
WallNutTurret::WallNutTurret(float x, float y) :
    Turret("play/WallNut.png", x, y, Price, 3, 15) {
    // Move center downward, since we the turret head is slightly biased upward.
    Anchor.y -= 5.0f / GetBitmapHeight();
}
void WallNutTurret::CreateBullet() {
    return;
}
