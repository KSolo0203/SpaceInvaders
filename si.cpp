#include <vector>
#include <map>
#include <string>

const int screen_width = 800;

std::map<int, std::string> levels = {{1, "aaaaaaaaaaaa"}, {2, "uuuuuuuuuuuu"}, {3, "oooooooooooo"}};

struct Coordinates
{
    unsigned short int x, y;   
};

struct Level
{
    unsigned short int number;
    unsigned short int enemy_quantity, rows;
    std::string pattern;
    
    Level(int n, int r = 5) : number(n), rows(r)
    {
        pattern = levels[n];
        enemy_quantity = pattern.length();
    }
};


class Field
{
    struct {

    };
    std::vector<Coordinates> where;
    void shift();
public:
    Field()
    {
        for (;;) {

        }
    };

};
