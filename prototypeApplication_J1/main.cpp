#include <QApplication>
#include <mainEditorForm.h>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[]) {

    
    QApplication app(argc, argv);
   

    
    mainEditorForm frm;

    frm.show();

    return app.exec();
}