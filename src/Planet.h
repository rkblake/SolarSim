#ifndef PLANET
#define PLANET

#include <vector>

#include "Celestial.h"
#include "trail.h"

class Planet {
public:
    Planet(int mass, glm::vec3 initialVel, glm::vec3 initialPos);
    void Draw(GLuint shader);
    void addPull(glm::vec3 pull);
    void setPull(glm::vec3 pull);
    glm::vec3 getPos();
    inline float getMass() {return mMass;}
    void applyPhysics(double deltaTime);
    void addMoon(Planet* moon);
    std::vector<Planet*> moons;
private:
    float mMass;
    Mesh mMesh;
    glm::vec3 mInertia;
    glm::vec3 mPull;
    glm::mat4 mModel;
    GLuint modelID;
    Trail trail;

};

#endif