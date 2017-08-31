#include <SFML/Graphics.hpp>
#include "../headers/cat.h"

Cat::Cat(){
  catTexture.loadFromFile("assets/cat/Idle (1).png"); // invoked in main so this is the right path
  catTexture.setSmooth(true);
  cat.setSize(static_cast<sf::Vector2f>(catTexture.getSize()));
  cat.setTexture(&catTexture);
  cat.scale(0.5f, 0.5f);
  baseVelocity = 1.0f;
  velocity = baseVelocity;
  isRunning = false;
}

sf::RectangleShape Cat::DrawCat(){
  return cat;
}

void Cat::Move(int i){
  if(isRunning)
    velocity = baseVelocity + 1.7f;
  switch(i){
    case 0:
      cat.move(0.0f, velocity*-1);
      break;
    case 1:
      cat.move(0.0f, velocity);
      break;
    case 2:
      cat.move(velocity*-1, 0.0f);
      break;
    case 3:
      cat.move(velocity, 0.0f);
      break;
  }
  isRunning = false;
  velocity = baseVelocity;
}

void Cat::Run(){
  isRunning = true;
}
