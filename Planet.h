#ifndef PLANET_H
#define PLANET_H

#include <QtGui/QColor>
#include <QtMath>

class Planet
{
public:
    Planet();
    Planet(float radius, float orbitRadius, float orbitAngle
           , QColor color, float planetSpeed, float planetMass, float ecc);

    float x;
    float y;
    float z;
    float radius;
    float orbitRadius;
    float orbitAngle;
    QColor color;
    float speed;
    float mass;
    float ecc;

    virtual void new_x();
    virtual void new_z();
};

#endif // PLANET_H
