#include <allegro5/base.h>
#include <string>

#include "ScreendoorEnemy.hpp"
#include "AudioHelper.hpp"
#include "Group.hpp"
#include "FriesBullet.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Turret.hpp"

ScreendoorEnemy::ScreendoorEnemy(int x, int y) : Enemy("play/ScreenDoor.png", x, y, 10, 50, 5, 5) {
    backup_speed = speed;

    Anchor.y -= 5.0f / GetBitmapHeight();
    shield = true;
}

void ScreendoorEnemy::CreateBullet() {
    Engine::Point diff = Engine::Point(-1, 0);
    float rotation = ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new FriesBullet(Position , diff, rotation, this));
    AudioHelper::PlayAudio("shoot.wav");
}

