#include <string>

#include "StrongEnemy.hpp"
#include "FriesBullet.hpp"
#include "AudioHelper.hpp"
#include "PlayScene.hpp"

StrongEnemy::StrongEnemy(int x, int y) : Enemy("play/FlagZombie.png", x, y, 20, 20, 100, 50) {
    backup_speed = speed;
	// Use bounding circle to detect collision is for simplicity, pixel-perfect collision can be implemented quite easily,
	// and efficiently if we use AABB collision detection first, and then pixel-perfect collision.
}
void StrongEnemy::CreateBullet() {
    Engine::Point diff = Engine::Point(-1, 0);
    float rotation = ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new FriesBullet(Position , diff, rotation, this));
    AudioHelper::PlayAudio("shoot.wav");
}
