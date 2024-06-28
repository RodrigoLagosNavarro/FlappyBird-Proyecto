#include "..\include\Paralaje.hpp"

Paralaje::Paralaje()
{
    ultimo=-1;
    inciado=false;
    puntaje=0;
    if(!obstaculoT.loadFromFile("assets/images/Tubo.png"))
    {
        std::cout<<"Error al cargar la textura"<<std::endl;
    }
    if(!baseT.loadFromFile("assets/images/base.png"))
    {
        std::cout<<"Error al cargar la textura"<<std::endl;
    }

    srand(time(NULL));

    obstaculos.push_back(Obstaculo(obstaculoT,500,100+rand()%250));
    obstaculos.push_back(Obstaculo(obstaculoT,850,100+rand()%250));

    sf::Sprite nSprite;

    nSprite.setTexture(baseT);
    nSprite.setPosition(0,700-112);
    nSprite.setScale(1.5f,1.5f);
    bases.push_back(nSprite);
    nSprite.setPosition(336*1.5f,700-112);
    bases.push_back(nSprite);
}

void Paralaje::Actualizar()
{
    for(int i=0;i<(int)bases.size();i++)
    {
        if(bases[i].getPosition().x<-336*1.5f)
        {
            sf::Sprite nSprite=bases[(int)bases.size()-1];
            nSprite.setPosition(nSprite.getPosition().x+336*1.5f,700-112);
            bases.push_back(nSprite);
            bases.erase(bases.begin()+i);
            continue;
        }
    }
    for(int i=0;i<(int)bases.size();i++)
    {
        bases[i].move(-2.5f,0);
    }
    if(!inciado) return;
    int ultimo=(int)obstaculos.size()-1;
    for(int i=0;i<(int)obstaculos.size();i++)
    {
        if(obstaculos[i].GetPosicion().x<100&&i>ultimo)
        {
            ultimo=i;
            puntaje++;
        }
        if(obstaculos[i].GetPosicion().x<=1000)
        {
            ultimo--,obstaculos.erase(obstaculos.begin()+i),obstaculos.push_back(Obstaculo(obstaculoT,obstaculos[ultimo].GetPosicion().x+350,100+rand()%250));
        }
        for(int i=0;i<(int)obstaculos.size();i++)
        {
            obstaculos[i].Actualizar();
        }
}
}

bool Paralaje::Colision(sf::IntRect rect)
{
    for(int i=0;i<(int)obstaculos.size();i++)
    {
        if(obstaculos[i].Colision(rect)) return true;
    }
    return false;
}

int Paralaje::Puntaje()
{
    return puntaje;
}

void Paralaje::Inciado()
{
    inciado=true;
}

void Paralaje::draw(sf::RenderTarget &rt, sf::RenderStates rs) const{
	for(int i = 0; i < (int)obstaculos.size(); i++) rt.draw(obstaculos[i],rs);
	for(int i = 0; i < (int)bases.size(); i++) rt.draw(bases[i],rs);
}
