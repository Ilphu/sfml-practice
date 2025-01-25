#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int main() {
    auto window = RenderWindow(VideoMode({1920u, 1080u}), "Test");
    window.setFramerateLimit(60);

    CircleShape shape(100.f);
    shape.setFillColor(Color::Green);

    while (window.isOpen()) {
        while (const optional event = window.pollEvent()) {
            if (event->is<Event::Closed>()) {
                window.close();
            }
        }

        window.RenderTarget::clear(Color(100, 100, 100, 255));
        window.draw(shape);
        window.display();
    }
}
