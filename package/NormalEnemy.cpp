#include <allegro5/base.h>
#include <string>

#include "NormalEnemy.hpp"
#include "AudioHelper.hpp"
#include "Group.hpp"
#include "FriesBullet.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Turret.hpp"

NormalEnemy::NormalEnemy(int x, int y) : Enemy("play/Zombies.png", x, y, 10, 50, 5, 5) {
    backup_speed = speed;
    // TODO 2 (6/8): You can imitate the 2 files: 'NormalEnemy.hpp', 'NormalEnemy.cpp' to create a new enemy.
    Anchor.y -= 5.0f / GetBitmapHeight();
}

void NormalEnemy::CreateBullet() {
    Engine::Point diff = Engine::Point(-1, 0);
    float rotation = ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new FriesBullet(Position , diff, rotation, this));
    AudioHelper::PlayAudio("shoot.wav");
}
