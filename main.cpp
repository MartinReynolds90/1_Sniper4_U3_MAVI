#include "SFML/Graphics.hpp"
#include "iostream"

using namespace sf;
using namespace std;


//SNIPER 4 - SNIPER 4 - SNIPER 4 - SNIPER 4 - SNIPER 4- SNIPER 4- SNIPER 4 - SNIPER 4 - SNIPER 4///////////////


int main() {
	RenderWindow ventana(VideoMode(800, 600), "Sniper 4");
	Texture texture_punto;
	texture_punto.loadFromFile("circle.png");

	
	Sprite punto1, punto2, punto3, punto4, punto5;
	punto1.setTexture(texture_punto);
	punto2.setTexture(texture_punto);
	punto3.setTexture(texture_punto);
	punto4.setTexture(texture_punto);

	
	punto1.setPosition(Vector2f(0, 0));
	punto2.setPosition(Vector2f(670, 0));
	punto3.setPosition(Vector2f(0, 470));
	punto4.setPosition(Vector2f(670, 470));
	
	
	while(ventana.isOpen()) {
		ventana.clear(Color::Black);
		ventana.draw(punto1);
		ventana.draw(punto2);
		ventana.draw(punto3);
		ventana.draw(punto4);
		
		ventana.display();
		
	}
}