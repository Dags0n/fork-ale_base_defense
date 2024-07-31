#ifndef BASE_HPP
#define BASE_HPP

#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Base{
    public:
        Base(int vida, const string& baseFile, const Font& font, const Vector2f& windowSize);
        void renderizar(RenderWindow& window);
        void verificarColisao(const Sprite& sprite);
        Sprite getSprite() const;
        void setVidaBase(int novaVidaBase);
        int getVidaBase();
    private:
        int vida;
        Text textoVidaBase;
        Texture background_base;
        Sprite backgroundSprite_base;
        Vector2f posicao;
        Clock relogio;
        Time dps;
};

#endif // BASE_HPP