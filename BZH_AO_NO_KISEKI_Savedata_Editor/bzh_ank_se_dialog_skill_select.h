#ifndef BZH_ANK_SE_DIALOG_SKILL_SELECT_H
#define BZH_ANK_SE_DIALOG_SKILL_SELECT_H

#include <QDialog>

namespace Ui {
class bzh_ank_se_dialog_skill_select;
}

class bzh_ank_se_dialog_skill_select : public QDialog
{
    Q_OBJECT
    
public:
    explicit bzh_ank_se_dialog_skill_select(QWidget *parent = 0);
    ~bzh_ank_se_dialog_skill_select();
    
private:
    Ui::bzh_ank_se_dialog_skill_select *ui;
};

#endif // BZH_ANK_SE_DIALOG_SKILL_SELECT_H
