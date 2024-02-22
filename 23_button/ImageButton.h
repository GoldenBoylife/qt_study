#ifndef IMAGEBUTTON_H
#define IMAGEBUTTON_H

#include <QWidget>

class ImageButton : public QObject
{
    Q_OBJECT
public:
    explicit ImageButton(QObject *parent = nullptr);
    void setDisabled(bool val);

private :
    QString m_imgFileName;
    qint32  m_behaviour;
    bool    m_disabled;


signals:
    void hoversing();
    void clicked();

protected:
    virtual void paintEvent(QPaintEvent* event);
    virtual void enterEvent(QEnterEvent* event);

};

#endif // IMAGEBUTTON_H
