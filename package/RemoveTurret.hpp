#ifndef REMOVETURRET_HPP
#define REMOVETURRET_HPP
#include "Turret.hpp"

class RemoveTurret : public Turret {
public:
    static const int Price;
    RemoveTurret(float x, float y);
    void CreateBullet() override;
};
#endif // REMOVETURRET_HPP
