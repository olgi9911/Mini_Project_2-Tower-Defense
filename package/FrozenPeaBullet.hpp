#ifndef FROZENPEABULLET_HPP
#define FROZENPEABULLET_HPP
#include "Bullet.hpp"

class Enemy;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class FrozenPeaBullet : public Bullet {
public:
    explicit FrozenPeaBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Turret* parent);
    void OnExplode(Enemy* enemy) override;
};
#endif // FROZENPEABULLET_HPP
