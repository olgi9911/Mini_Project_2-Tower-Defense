#ifndef TURRET_HPP
#define TURRET_HPP
#include <allegro5/base.h>
#include <list>
#include <string>

#include "Sprite.hpp"

class Enemy;
class PlayScene;

class Turret: public Engine::Sprite {
protected:
    bool explosive = false;
    float explode_radius = 225;
    int price;
    float hp;
    float coolDown;
    float reload = 0;
    float rotateRadian = 2 * ALLEGRO_PI;
    std::list<Turret*>::iterator lockedTurretIterator;
    PlayScene* getPlayScene();
    // Reference: Design Patterns - Factory Method.
    virtual void CreateBullet() = 0;
    virtual void OnExplode();
public:
    bool Enabled = true;
    bool Preview = false;
    bool remove = false; //
    Enemy* Target = nullptr;
    Turret(/*std::string imgBase,*/std::string imgTurret, float x, float y,/* float radius,*/ int price, float coolDown, float hp);
    void Update(float deltaTime) override;
    void Draw() const override;
    //
    void Hit(float damage);
    //
    void Explode();
    void Remove();
	int GetPrice() const;
};
#endif // TURRET_HPP
