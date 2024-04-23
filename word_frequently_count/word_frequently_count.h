#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_word_frequently_count.h"

class word_frequently_count : public QMainWindow
{
    Q_OBJECT

public:
    word_frequently_count(QWidget *parent = nullptr);
    ~word_frequently_count();
    void on_Tranlate_Button_clicked();

private:
    Ui::word_frequently_countClass ui;
};
