#include <conio.h>;
#include "cGame.h"
#include "cVector2.h";
#include <iostream>;

cGame::cGame()
{
}

cGame::~cGame()
{
}

/// <summary>
/// Creates the maze, prints stats and handles the game loop.
/// </summary>
void cGame::StartGame()
{
	maze = new cMaze;

	maze->createRandomSize();


    maze->print();

    std::cout << "\n \nScore: " << maze->score << "\n \n";
    std::cout << "Lives: " << maze->player.lives;

    while (maze->player.lives > 0 && !maze->player.hasWon)
    {
        maze->moveEnemy();

        GetInput();

        maze->print();

        std::cout << "\n \nScore: " << maze->score << "\n \n";
        std::cout << "Lives: " << maze->player.lives;
    }

    if (maze->player.lives <= 0)
    {
    std::cout << "\n \nYou lost.";
    }

    if (maze->player.hasWon)
    {
        std::cout << "\n \nYou've won! Congratulations. \n";
        std::cout << "Score: " << maze->score;
    }
}

/// <summary>
/// Takes arrow key input in order to move the player in the maze.
/// </summary>
void cGame::GetInput()
{
    switch (_getch()) {
    case 72: //Up
        maze->movePlayer(maze->player.coordinates.x, maze->player.coordinates.y - 1);
        break;
    case 80: //Down
        maze->movePlayer(maze->player.coordinates.x, maze->player.coordinates.y + 1);
        break;
    case 75: //Right
        maze->movePlayer(maze->player.coordinates.x - 1, maze->player.coordinates.y);
        break;
    case 77: //Left
        maze->movePlayer(maze->player.coordinates.x + 1, maze->player.coordinates.y);
        break;
    default:
        break;
    }
}
