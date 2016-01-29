#include "game.h"


Game::Game(QGraphicsView *parent) :
    scene(new QGraphicsScene()), tower(new Tower())
{
    scene->addItem(tower);
    setScene(scene);
    setFixedSize(800, 600);
}

