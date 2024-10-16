// #include <chrono>
#include <iostream>

class SAOptions
{
public:
    int game_speed;
    int player_skin;
    bool scene;
    SAOptions(int gs = 1, int ps = 1, bool sc = false) : game_speed(gs), player_skin(ps), scene(sc) {};
};

// class Timer
// {
//     // std::chrono::steady_clock timer;
//     const std::chrono::time_point<std::chrono::steady_clock> game_started = std::chrono::steady_clock::now();
// };

// class SAGameEngine
// {
//     SAOptions& options;
//     Timer timer;
//     Field field;
//     GameData data;
// };

// class Field
// {
//     std::vector<Enemy> enemies;
//     Spacecraft player;
//     std::vector<Projectile> bullets;
// };


struct Coordinates
{
    unsigned short x, y;
};

// class Tipus
// {

// };

class Body
{
protected:
    Coordinates coordinates;
    // std::pair<unsigned short, unsigned short> coordinates;
public:
    // virtual void move();
};

class Ship : public Body
{
    unsigned short int hit_points;

public:
    Ship() {};
    // virtual void fire();
    void fire() { std::cout << "FIRE!"; }

};

class Projectile : public Body
{
public:
    Projectile(int _x, int _y) { coordinates.x = _x; coordinates.y = _y; };
    void move()
    {
        coordinates.x++;
    }
};