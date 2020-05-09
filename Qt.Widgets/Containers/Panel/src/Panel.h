#include <QMainWindow>
#include <QFrame>

namespace examples {
  class Window1 : public QMainWindow {
    Q_OBJECT
  public:
    Window1() {
      panel1.setFrameStyle(QFrame::StyledPanel | QFrame::Plain);
      panel1.move(10, 10);
      panel1.resize(305, 460);


      panel2.setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
      panel2.move(325, 10);
      panel2.resize(305, 460);

      setCentralWidget(&frame);
      setWindowTitle("Panel example");
      resize(640, 480);
    }

  private:
    QFrame frame;
    QFrame panel1 {&frame};
    QFrame panel2 {&frame};
  };
}
