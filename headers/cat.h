#ifndef CAT
#define CAT
#include <SFML/Graphics.hpp>

class Cat{
  public:
    Cat();
    sf::RectangleShape DrawCat();
    void Move(int i);
    void Run();
  private:
    sf::Texture catTexture;
    sf::RectangleShape cat;
    float velocity;
    float baseVelocity;
    bool isRunning;
};

#endif /* end of include guard: CAT */
