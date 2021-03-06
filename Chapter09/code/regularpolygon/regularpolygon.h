#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

#include <QQuickItem>

class RegularPolygon : public QQuickItem
{
    Q_OBJECT
    Q_PROPERTY(int vertices READ vertices WRITE setVertices NOTIFY verticesChanged)
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
public:
    RegularPolygon();
    ~RegularPolygon();
    int vertices() const { return m_vertexCount; }
    void setVertices(int v);

    QColor color() const { return m_color; }
    void setColor(const QColor &c);

     QSGNode *updatePaintNode(QSGNode *, UpdatePaintNodeData *);

signals:
    void verticesChanged(int);
    void colorChanged(QColor);
public slots:
private:
     int m_vertexCount;
     QColor m_color;
};

#endif // REGULARPOLYGON_H
