#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "PockyBullet.hpp"
#include "Group.hpp"
#include "SunflowerTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
#include "ShootEffect.hpp"
const int SunflowerTurret::Price = 50;
SunflowerTurret::SunflowerTurret(float x, float y) :
    Turret("play/Sunflower.png", x, y, Price, 0.5, 10) {
    // Move center downward, since we the turret head is slightly biased upward.
    //Anchor.y -= 8.0f / GetBitmapHeight();
}
void SunflowerTurret::CreateBullet() {
    return;
}
void SunflowerTurret::Update(float deltaTime) {
    Sprite::Update(deltaTime);
    if (!Enabled)
        return;
    if(initial) {
        initial = false;
        time_stamp = al_get_time();
    }
    time = al_get_time();
    if(time - time_stamp > 10 && !initial) {
        getPlayScene()->EarnMoney(50);
        time_stamp = time;
    }
}
