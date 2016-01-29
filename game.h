#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "tower.h"

class Game : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Game(QGraphicsView *parent = 0);
    QGraphicsScene* getScene() { return scene; }

signals:

public slots:

private:
    QGraphicsScene* scene;
    Tower* tower;
};

#endif // GAME_H
