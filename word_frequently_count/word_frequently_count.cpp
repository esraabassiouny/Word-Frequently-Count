#include "word_frequently_count.h"
#include "TranslateClass.h"

word_frequently_count::word_frequently_count(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    QObject::connect(ui.pushButton_2, &QPushButton::clicked, this,   &word_frequently_count::on_Tranlate_Button_clicked);


}

word_frequently_count::~word_frequently_count()
{}

void word_frequently_count::on_Tranlate_Button_clicked () 
{
 
   
    TranslateClass translateclass;;
    translateclass.show();

}

