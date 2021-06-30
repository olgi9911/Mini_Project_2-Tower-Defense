#include <allegro5/base.h>
#include <random>
#include <string>

#include "DirtyEffect.hpp"
//#include "Enemy.hpp"
#include "Turret.hpp"
#include "FriesBullet.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"

class Enemy;

FriesBullet::FriesBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Enemy* parent) :
    EnemyBullet("play/bullet-4.png", 500, 2, position, forwardDirection, rotation - ALLEGRO_PI / 2, parent) {
}
void FriesBullet::OnExplode(Turret* turret) {
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(2, 5);
    getPlayScene()->GroundEffectGroup->AddNewObject(new DirtyEffect("play/dirty-2.png", dist(rng), turret->Position.x, turret->Position.y));
}
