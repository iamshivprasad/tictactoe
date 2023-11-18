// TicTacToe.Src.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <spdlog/spdlog.h>

#include <SFML/Graphics.hpp>

const sf::Vector2f TILE_SIZE{ 100.f, 100.f };
const sf::Vector2 WINDOW_SIZE{ 300.f, 300.f };

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE.x, WINDOW_SIZE.y), "SFML works!");

    std::vector<std::vector<sf::RectangleShape>> gameBoard;

    for (auto i = 0; i < 3; ++i)
    {
        std::vector<sf::RectangleShape> row;
        
        for (auto j = 0; j < 3; ++j)
        {
            row.emplace_back(sf::Vector2f(TILE_SIZE.x, TILE_SIZE.y));
            row.back().setFillColor(sf::Color::Yellow);
            row.back().setOutlineThickness(2.0f);
            row.back().setOutlineColor(sf::Color(0, 0, 0));
            row.back().setPosition(i * TILE_SIZE.x, j * TILE_SIZE.y);
        }

        gameBoard.push_back(row);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        for (auto const& row : gameBoard)
        {
            for (auto const& cell : row)
            {
                window.draw(cell);
            }
        }

        window.display();
    }

    return 0;
}
