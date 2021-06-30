#ifndef FRIESBULLET_HPP
#define FRIESBULLET_HPP
#include "EnemyBullet.hpp"

class Turret;
class Enemy;
namespace Engine {
struct Point;
}  // namespace Engine

class FriesBullet : public EnemyBullet {
public:
    explicit FriesBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Enemy* parent);
    void OnExplode(Turret* turret) override;
};
#endif // FRIESBULLET_HPP
