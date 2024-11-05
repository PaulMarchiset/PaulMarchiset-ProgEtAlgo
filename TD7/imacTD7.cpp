#include <iostream>
#include <string>
#include <vector>
#include <array>

// **Exercice 1**

struct Position
{
    int x{0};
    int y{0};
};

enum Direction
{
    Up,
    Down,
    Forward,
    Backward
};

struct Move
{
    Direction direction{Direction::Forward};
    int distance{0};
};

void moveSubmarine(Position &position, Move const &move)
{
    switch (move.direction)
    {
    case Direction::Up:
        position.y += move.distance;
        break;
    case Direction::Down:
        position.y -= move.distance;
        break;
    case Direction::Forward:
        position.x += move.distance;
        break;
    case Direction::Backward:
        position.x -= move.distance;
        break;
    default:
        break;
    }
}
void display(Position const &position)
{
    std::cout << position.x << " , " << position.y << std::endl;
}

int main()
{
    std::vector<Move> moves = {
        {Direction::Forward, 10},
        {Direction::Down, 5},
        {Direction::Backward, 3},
        {Direction::Up, 2},
        {Direction::Forward, 5},
        {Direction::Down, 1},
        {Direction::Backward, 2},
        {Direction::Forward, 3},
        {Direction::Down, 1},
        {Direction::Up, 3},
        {Direction::Forward, 1},
        {Direction::Down, 5},
        {Direction::Backward, 2},
        {Direction::Forward, 6}};

    Position position{0, 0};

    for (int i{0}; i < moves.size(); i++)
    {
        moveSubmarine(position, moves[i]);
        display(position);
    }

    return 0;
}

