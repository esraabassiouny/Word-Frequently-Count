#pragma once

#include <QMainWindow>
#include "ui_TranslateClass.h"

class TranslateClass : public QMainWindow
{
	Q_OBJECT

public:
	TranslateClass(QWidget *parent = nullptr);
	~TranslateClass();

private:
	Ui::TranslateClassClass ui;
};
