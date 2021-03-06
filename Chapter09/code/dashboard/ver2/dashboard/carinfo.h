#ifndef CARINFO_H
#define CARINFO_H

#include <QObject>
#include <QWidget>
#include <QDate>

namespace Ui {
class Form;
}

class CarInfoEngine : public QObject {
  Q_OBJECT
  Q_PROPERTY(int gear READ gear WRITE setGear NOTIFY gearChanged)
  Q_PROPERTY(int rpm READ rpm WRITE setRpm NOTIFY rpmChanged)
public:
  CarInfoEngine(QObject *parent = 0) : QObject(parent), m_gear(4) {}
  int gear() const { return m_gear; }
  int rpm() const
  {
      return m_rpm;
  }

public slots:
  void setGear(int g) { if(m_gear == g) return; m_gear = g; emit gearChanged(g); }
  void setRpm(int arg)
  {
      if (m_rpm == arg)
          return;

      m_rpm = arg;
      emit rpmChanged(arg);
  }

signals:
  void gearChanged(int);
  void rpmChanged(int arg);

private:
  int m_gear;
  int m_rpm;
};

class CarInfo : public QWidget {
    Q_OBJECT
    Q_PROPERTY(int speed READ speed WRITE setSpeed NOTIFY speedChanged)
    Q_PROPERTY(double distance READ distance NOTIFY distanceChanged)
    Q_PROPERTY(QObject* engine READ engine NOTIFY engineChanged)
public:
    CarInfo();
    int speed() const;
    void setSpeed(int s);
    double distance() const;
    void setDistance(double d);
    QObject* engine() const { return m_engine; }

signals:
    void speedChanged(int);
    void distanceChanged(double);
    void engineChanged();
private:
    CarInfoEngine *m_engine;
    Ui::Form *ui;
};


#endif // CARINFO_H
