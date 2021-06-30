#ifndef EXPLODENUTTURRET_HPP
#define EXPLODENUTTURRET_HPP
#include "Turret.hpp"

class ExplodeNutTurret: public Turret {
public:
    static const int Price;
    ExplodeNutTurret(float x, float y);
    void CreateBullet() override;
};
#endif // EXPLODENUTTURRET_HPP
