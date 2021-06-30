#ifndef BULLET_HPP
#define BULLET_HPP
#include <string>

#include "Sprite.hpp"

class Enemy;
class PlayScene;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class Bullet : public Engine::Sprite {
protected:
	float speed;
	float damage;
    float slow_amount;
	Turret* parent;
	PlayScene* getPlayScene();
	virtual void OnExplode(Enemy* enemy);
public:
	Enemy* Target = nullptr;
	explicit Bullet(std::string img, float speed, float damage, float slow_amount, Engine::Point position, Engine::Point forwardDirection, float rotation, Turret* parent);
    
	void Update(float deltaTime) override;
};
#endif // BULLET_HPP
