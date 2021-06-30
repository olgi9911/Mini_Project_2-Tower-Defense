#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "FrozenPeaBullet.hpp"
#include "Group.hpp"
#include "SnowPeaTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
const int SnowPeaTurret::Price = 150;
SnowPeaTurret::SnowPeaTurret(float x, float y) :
    Turret("play/SnowPea.png", x, y, Price, 3, 7) {
    // Move center downward, since we the turret head is slightly biased upward.
    Anchor.y -= 15.0f / GetBitmapHeight();
}
void SnowPeaTurret::CreateBullet() {
    Engine::Point diff = Engine::Point(1,0);
    float rotation = ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new FrozenPeaBullet(Position , diff, rotation, this));
    AudioHelper::PlayAudio("gun.wav");
}
