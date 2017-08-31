#include <iostream>
#include <SFML/Graphics.hpp>
#include "../headers/keyboard.h"
#include "../headers/cat.h"
#include "../headers/icon.h"

bool DEBUG(true);

void debug(std::string s);

int main(){
  sf::ContextSettings settings;
  settings.depthBits = 24;
  settings.stencilBits = 8;
  settings.antialiasingLevel = 4;
  settings.majorVersion = 4;
  settings.minorVersion = 2;

  sf::RenderWindow window(sf::VideoMode(1024,720), "Honeyko - cat thing", sf::Style::Default, settings); debug("Window created");
  window.setIcon(appIcon.width, appIcon.height, appIcon.pixel_data);
  window.setVerticalSyncEnabled(true);
  //window.setFramerateLimit(120); if drivers forces vsync off

  //creating the player
  Cat player;

  sf::Event event;
  while(window.isOpen()){             //main game loop
    while(window.pollEvent(event)){   //event loop

      switch(event.type){
        case sf::Event::Closed:
          window.close();
          break;
      } //end of switch
    }   //end of event loop

    //main game scope -> first process the keyboard inputs
    Keyboard::ProcessKeyboard(window, player);

    window.clear(sf::Color::Green);
    window.draw(player.DrawCat());
    window.display();
  }
}

void debug(std::string s){
  if(::DEBUG)
    std::cout << s << std::endl;
}
