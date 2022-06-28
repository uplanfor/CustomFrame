#ifndef CUSTOMFRAME_H
#define CUSTOMFRAME_H

#include <QWidget>
#include <QMouseEvent>
#include <QVBoxLayout>
#ifdef Q_OS_WIN
#include <windows.h>
#include <windowsx.h>
#endif


class CustomFrame : public QWidget
{
    Q_OBJECT
public:
    explicit CustomFrame(QWidget *content,QWidget *parent = nullptr);
    ~CustomFrame();
    void setBoundary(int boundary);
    int getBoundary();
    void setTitleBar(QWidget *titlebar);
    QWidget* container();
    QWidget* operator->();

    bool nativeEvent(const QByteArray &eventType, void *message, long *result) final;
    void mousePressEvent(QMouseEvent *ev) override;
    void mouseMoveEvent(QMouseEvent *ev) override;
private:
    int m_boundary;
    QPoint pressPos;
    QWidget *m_container;
    QVBoxLayout *verticalLayout;
};


#endif // CUSTOMFRAME_H
