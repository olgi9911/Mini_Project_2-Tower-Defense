#ifndef SCREENDOORENEMY_HPP
#define SCREENDOORENEMY_HPP
#include "Enemy.hpp"

class ScreendoorEnemy : public Enemy {
public:
    ScreendoorEnemy(int x, int y);
    void CreateBullet() override;
};
#endif // SCREENDOORENEMY_HPP
