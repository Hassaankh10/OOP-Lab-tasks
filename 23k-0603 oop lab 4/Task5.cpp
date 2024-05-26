#include <iostream>
#include <cmath>
using namespace std;
class Cannonball {
private:
    double xPosition;
    double yPosition;
    double xVelocity;
    double yVelocity;
public:
    Cannonball(double xPosition) {
        this->xPosition = xPosition;
        this->yPosition = 0;
        this->xVelocity = 0;
        this->yVelocity = 0;
    }
    void move(double sec) {
        double xDistance = xVelocity * sec;
        double yDistance = yVelocity * sec + 0.5 * -9.81 * sec * sec;
        xPosition += xDistance;
        yPosition += yDistance;
        yVelocity += -9.81 * sec;
    }
    double getX() const {
        return xPosition;
    }
    double getY() const {
        return yPosition;
    }
 void shoot(double angle, double initialVelocity) {
    xVelocity = initialVelocity * cos(angle);
    yVelocity = initialVelocity * sin(angle);
    do {
        move(0.1);
        cout << "Position: (" << getX() << ", " << getY() << ")" << endl;
    } while (yVelocity >= 0);
}

};
int main() {
    double angle, initialVelocity;
    cout << "Enter the starting angle (in degrees): ";
    cin >> angle;
    cout << "Enter the initial velocity (in m/s): ";
    cin >> initialVelocity;
    angle = angle * M_PI / 180;
    Cannonball cannonball(0);
    cannonball.shoot(angle, initialVelocity);
    return 0;
}
