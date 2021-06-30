#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "AudioHelper.hpp"
#include "IceCreamBullet.hpp"
#include "Group.hpp"
#include "WBCellTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Enemy.hpp"
const int WBCellTurret::Price = 100;
WBCellTurret::WBCellTurret(float x, float y) :
    // TODO 2 (2/8): You can imitate the 2 files: 'WBCellTurret.hpp', 'WBCellTurret.cpp' to create a new turret.
	Turret("play/PeaShooter.png", x, y, Price, 1.0, 10) {
	// Move center downward, since we the turret head is slightly biased upward.
	Anchor.y -= 15.0f / GetBitmapHeight();
}
void WBCellTurret::CreateBullet() {
	Engine::Point diff = Engine::Point(1,0);
	float rotation = ALLEGRO_PI / 2;
	getPlayScene()->BulletGroup->AddNewObject(new IceCreamBullet(Position , diff, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
