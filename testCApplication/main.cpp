
#include <QApplication>
#include <mainEditorForm.h>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[]) {

    
    QApplication app(argc, argv);
   

    
    mainEditorForm frm;
    
    //QComboBox *cTransport = Ui_mainEditorForm().cmbTransport;
    //QLabel *lDisplay = Ui_mainEditorForm().lblShow;
    //QPushButton *pDisplay = Ui_mainEditorForm().btnGen;
    
    
    
    //QObject::connect(Ui_mainEditorForm.cmbTransport, SIGNAL(currentIndexChanged(QString)),Ui_mainEditorForm.lblShow, SLOT(setText(QString)));
    
    frm.show();

    return app.exec();
}


