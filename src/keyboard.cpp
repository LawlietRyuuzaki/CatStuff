#include <SFML/Graphics.hpp>
#include "../headers/keyboard.h"

void Keyboard::ProcessKeyboard(sf::RenderWindow &window, Cat &player){
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
    window.close();
  //maybe add some kind of confirmation instead of straight up quitting

  //keyboard controls - add a way to customize them in a menu or something
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Z))
    player.Move(0);
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    player.Move(1);
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
    player.Move(2);
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    player.Move(3);
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LShift))
    player.Run();
}
