#include <scene.h>

#include <QApplication>
#include <QGraphicsView>

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);

    Scene scene;

    scene.setSceneRect(-10, -10, 110, 110);

    QGraphicsView view(&scene);
    view.setBackgroundBrush(QColor(242, 235, 226));
    view.setMinimumSize(800, 600);
    view.showMaximized();

    view.show();

    a.exec();

}
