#include "Planet.h"

Planet::Planet() : Planet(1.f, 5.f, 0.f, QColor(100, 200, 100, 255), 5.f, 0.f, 0.f)
{

}

Planet::Planet(float radius, float orbitRadius = 5.f, float orbitAngle = 0.f,
               QColor color = QColor(100, 200, 100, 255), float planetSpeed = 5.f, float planetMass = 0.f, float ecc = 0.f)
    : radius(radius)
    , orbitRadius(orbitRadius)
    , orbitAngle(orbitAngle)
    , color(color)
    , speed(planetSpeed)
    , mass(planetMass)
    , ecc(ecc)
{
}
    void Planet::new_x() {
        x = orbitRadius * qCos(qDegreesToRadians(orbitAngle)) - orbitRadius * ecc;
    }
    void Planet::new_z() {
        z = orbitRadius * sqrt(1 - ecc*ecc) * qSin(qDegreesToRadians(orbitAngle));
    }
