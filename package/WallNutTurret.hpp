#ifndef WALLNUTTURRET_HPP
#define WALLNUTTURRET_HPP
#include "Turret.hpp"

class WallNutTurret: public Turret {
public:
    static const int Price;
    WallNutTurret(float x, float y);
    void CreateBullet() override;
};
#endif // WALLNUTTURRET_HPP
