#ifndef SNOWPEATURRET_HPP
#define SNOWPEATURRET_HPP
#include "Turret.hpp"

class SnowPeaTurret: public Turret {
public:
    static const int Price;
    SnowPeaTurret(float x, float y);
    void CreateBullet() override;
};
#endif // SNOWPEATURRET_HPP
