#ifndef BZH_ANK_SE_SAVEDATA_SKILL_H
#define BZH_ANK_SE_SAVEDATA_SKILL_H

#include "bzh_ank_se_define.h"

QList<QToolButton *> toolebutton_skill_Lloyd_s_break_list;
QList< QList<QToolButton *> >toolebutton_skill_s_break_list;

QList<QToolButton *> toolebutton_skill_Lloyd_fight_list;
QList< QList<QToolButton *> >toolebutton_skill_fight_list;

void MainWindow::savedata_skill_setup()
{
    toolebutton_skill_Lloyd_s_break_list.append(ui->toolButton_skill_Lloyd_s_break_1);
    toolebutton_skill_Lloyd_s_break_list.append(ui->toolButton_skill_Lloyd_s_break_2);
    toolebutton_skill_Lloyd_s_break_list.append(ui->toolButton_skill_Lloyd_s_break_3);
    toolebutton_skill_Lloyd_s_break_list.append(ui->toolButton_skill_Lloyd_s_break_4);
    toolebutton_skill_Lloyd_s_break_list.append(ui->toolButton_skill_Lloyd_s_break_5);

    toolebutton_skill_s_break_list.append(toolebutton_skill_Lloyd_s_break_list);

    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_1);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_2);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_3);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_4);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_5);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_6);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_7);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_8);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_9);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_10);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_11);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_12);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_13);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_14);
    toolebutton_skill_Lloyd_fight_list.append(ui->toolButton_skill_Lloyd_fight_15);

    toolebutton_skill_fight_list.append(toolebutton_skill_Lloyd_fight_list);
}

void MainWindow::savedata_skill_fight_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取技能数据...",false,false);

    QList<quint16> fight_skill_list;
    QList<quint16> s_break_skill_list;

    //读取战技
    for(int i = 0;i < offset_fight_skill_start_list.size();i++)
    {
        for(quint64 pos = offset_fight_skill_start_list.at(i);pos <= offset_fight_skill_end_list.at(i);pos += 0x02)
        {
            fight_skill_list.append(savedata_binary_read_quint16(savedata_file_path,pos));
        }
    }



    gui_textbrowser_status_operate("完成",true,false);
}

#endif // BZH_ANK_SE_SAVEDATA_SKILL_H
