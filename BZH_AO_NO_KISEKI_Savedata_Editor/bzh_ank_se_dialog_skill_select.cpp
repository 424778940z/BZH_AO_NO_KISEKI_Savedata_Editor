#include "bzh_ank_se_dialog_skill_select.h"
#include "ui_bzh_ank_se_dialog_skill_select.h"

bzh_ank_se_dialog_skill_select::bzh_ank_se_dialog_skill_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bzh_ank_se_dialog_skill_select)
{
    ui->setupUi(this);
}

bzh_ank_se_dialog_skill_select::~bzh_ank_se_dialog_skill_select()
{
    delete ui;
}
