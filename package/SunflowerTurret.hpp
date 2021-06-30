#ifndef SUNFLOWER_HPP
#define SUNFLOWER_HPP
#include "Turret.hpp"

class SunflowerTurret: public Turret {
protected:
    double time;
    double time_stamp;
    bool initial = true;
public:
    static const int Price;
    SunflowerTurret(float x, float y);
    void CreateBullet() override;
    void Update(float deltaTime) override;
};
#endif // SUNFLOWER_HPP
