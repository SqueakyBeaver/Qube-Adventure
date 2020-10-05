#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <vector>

#ifndef NDEBUG
#include <cassert>
#endif

#include "Enemy.hpp"
#include "Qube.hpp"

class Application {
public:
    // initialize the game
    Application();

    // Main game loop
    void loopGame();

    // Draw the drawable things
    void drawEntities();

    // Move the window
    void moveView(const sf::Vector2f &move_dir);

    // end the game
    ~Application() = default;

private:
    // Window to draw to
    sf::RenderWindow window;

    // The main character
    Qube qube;

    // The enemy
    Enemy enemy;

    // If the window is resized
    bool resized{};

    // Whether the game has started
    bool started{};

    // Modes
    std::vector<sf::VideoMode> modes;

    // Font
    sf::Font calibri;

    // Running directions
    sf::Vector2f run_dir;

    // Coordinates/Player info
    sf::Text player_info;

    // Starting text
    sf::Text start_text;

    // View for a resized window
    sf::View resized_view;
};

#endif