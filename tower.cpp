#include "tower.h"
#include <QPixmap>
#include <QPointF>
#include <QPolygonF>

#include <QVector>
#include <QDebug>

Tower::Tower(QGraphicsItem *parent)
{
    QPixmap towerPix(":/images/tower.png");
    setPixmap(towerPix);

    QVector<QPointF> points;
    points << QPointF(1,0) << QPointF(2,0) << QPointF(3,1) << QPointF(3,2)
           << QPointF(2,3) << QPointF(1,3) << QPointF(0,2) << QPointF(0,1);
    int SCALEFACTOR = 100;

    for(QVector<QPointF>::iterator it = points.begin();it != points.end(); ++it)
    {
        *it *= SCALEFACTOR;
    }

    attackArea = new QGraphicsPolygonItem(QPolygonF(points), this);

    QPointF poly_center(1.5,1.5);
    poly_center *= SCALEFACTOR;
    poly_center = mapToScene(poly_center);

    QPointF tower_center(x()+64,y()+64);
    QLineF ln(poly_center,tower_center);
    attackArea->setPos(x()+ln.dx(),y()+ln.dy());
}

Tower::~Tower()
{

}
