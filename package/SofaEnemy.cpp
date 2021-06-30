#include <string>

#include "SofaEnemy.hpp"
#include "FriesBullet.hpp"
#include "AudioHelper.hpp"
#include "PlayScene.hpp"

SofaEnemy::SofaEnemy(int x, int y) : Enemy("play/Conehead.png", x, y, 16, 100, 10, 10) {
    backup_speed = speed;
	// Use bounding circle to detect collision is for simplicity, pixel-perfect collision can be implemented quite easily,
	// and efficiently if we use AABB collision detection first, and then pixel-perfect collision.
}
void SofaEnemy::CreateBullet() {
    Engine::Point diff = Engine::Point(-1, 0);
    float rotation = ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new FriesBullet(Position , diff, rotation, this));
    AudioHelper::PlayAudio("shoot.wav");
}
