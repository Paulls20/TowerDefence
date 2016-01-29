#ifndef TOWER_H
#define TOWER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>

class Tower : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Tower(QGraphicsItem *parent = 0);
    ~Tower();
private:
    QGraphicsPolygonItem* attackArea;
};

#endif // TOWER_H
