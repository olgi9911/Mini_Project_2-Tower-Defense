#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <list>
#include <vector>
#include <string>

#include "Point.hpp"
#include "Sprite.hpp"

class Bullet;
class PlayScene;
class Turret;

class Enemy : public Engine::Sprite {
protected:
	Engine::Point target;
	float speed;
    float backup_speed = 0;
	float hp;
    float coolDown;
    float reload = 0;
	int money;
    bool slow = false;
    bool shield = false;
	PlayScene* getPlayScene();
    //
    virtual void CreateBullet() = 0;
	virtual void OnExplode();
    //
public:
	float reachEndTime;
	std::list<Turret*> lockedTurrets;
	std::list<Bullet*> lockedBullets;
	Enemy(std::string img, float x, float y, float radius, float speed, float hp, int money );
 	void Hit(float damage);
	void Update(float deltaTime) override;
	void Draw() const override;
    //
    void SlowDown(float amount);
};
#endif // ENEMY_HPP
