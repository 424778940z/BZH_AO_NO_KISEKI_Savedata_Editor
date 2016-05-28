#ifndef BZH_ANK_SE_SAVEDATA_MANUAL_H
#define BZH_ANK_SE_SAVEDATA_MANUAL_H

#include "bzh_ank_se_define.h"

void MainWindow::savedata_fight_manual_read(QString savedata_file_path)
{
    ui->spinBox_fight_manual_fight_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_fight_time));
    ui->spinBox_fight_manual_fight_win_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_fight_win_time));
    ui->spinBox_fight_manual_fight_fail_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_fight_fail_time));
    ui->spinBox_fight_manual_fight_flee_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_fight_flee_time));
    ui->spinBox_fight_manual_fight_number_of_kill_enemy->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_number_of_kill_enemy));
    ui->spinBox_fight_manual_use_s_break_skill_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_use_s_break_skill_time));
    ui->spinBox_fight_manual_time_of_combat_skill->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_time_of_combat_skill));
    ui->spinBox_fight_manual_sneak_attack_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_sneak_attack_time));
    ui->spinBox_fight_manual_enemy_sneak_attack_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_enemy_sneak_attack_time));
    ui->spinBox_fight_manual_re_fight_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_re_fight_time));
    ui->spinBox_fight_manual_break_soul_time->setValue(savedata_binary_read_quint16(savedata_file_path,offset_fight_manual_break_out_soul_time));
}

void MainWindow::savedata_fight_manual_write(QString savedata_file_path)
{
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_fight_time,ui->spinBox_fight_manual_fight_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_fight_win_time,ui->spinBox_fight_manual_fight_win_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_fight_fail_time,ui->spinBox_fight_manual_fight_fail_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_fight_flee_time,ui->spinBox_fight_manual_fight_flee_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_number_of_kill_enemy,ui->spinBox_fight_manual_fight_number_of_kill_enemy->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_use_s_break_skill_time,ui->spinBox_fight_manual_use_s_break_skill_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_time_of_combat_skill,ui->spinBox_fight_manual_time_of_combat_skill->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_sneak_attack_time,ui->spinBox_fight_manual_sneak_attack_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_enemy_sneak_attack_time,ui->spinBox_fight_manual_enemy_sneak_attack_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_re_fight_time,ui->spinBox_fight_manual_re_fight_time->value());
    savedata_binary_write_quint16(savedata_file_path,offset_fight_manual_break_out_soul_time,ui->spinBox_fight_manual_break_soul_time->value());
}

void MainWindow::savedata_fight_manual_monster_illustrations_read(QString savedata_file_path)
{
    quint64 pos = offset_fightmanual_monster_illustrations_start;

    quint32 monster_code;
    //quint8 flag;
    QBitArray resistant_code;
    QBitArray other_code;
    quint8 get_item_code;

    QString text_open = "ON";
    QString text_close = "OFF";

    //反转的[X,幻,空,时,风,火,水,地,高级属性有效率,资料,获得耀晶片,抗性,描述,exp,lv,hp]
    QList<bool> resistant_code_and_other_code;

    //全填关
    for(int root_list_index = 0;root_list_index < list_code_fight_manual_monster_illustrations.size();root_list_index++)
    {
        for(int list_index = 0;list_index < list_code_fight_manual_monster_illustrations.at(root_list_index).size();list_index++)
        {
            for(int i = 1;i < 16;i++)
            {
                tree_fight_manual_root_list.at(root_list_index)->child(list_index)->setText(i,text_close);
            }
        }
    }

    while(1)
    {
        if(pos > offset_fightmanual_monster_illustrations_end)
        {
            break;
        }

        resistant_code_and_other_code.clear();

        monster_code = savedata_binary_read_quint32(savedata_file_path,pos);
        pos += 0x04;
        //flag = savedata_binary_read_quint8(savedata_file_path,pos);
        pos += 0x01;
        resistant_code = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,pos);
        pos += 0x01;
        other_code = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,pos);
        pos += 0x01;
        get_item_code = savedata_binary_read_quint8(savedata_file_path,pos);
        pos += 0x01;

        if(get_item_code == 0xff)
        {
            resistant_code.setBit(0,true);
        }
        else
        {
            resistant_code.setBit(0,false);
        }

        for(int i = 7;i >= 0;i--)
        {
            resistant_code_and_other_code.append(other_code.at(i));
        }
        for(int i = 7;i >= 0;i--)
        {
            resistant_code_and_other_code.append(resistant_code.at(i));
        }

        if(monster_code != 0)
        {
            for(int root_list_index = 0;root_list_index < list_code_fight_manual_monster_illustrations.size();root_list_index++)
            {
                for(int list_index = 0;list_index < list_code_fight_manual_monster_illustrations.at(root_list_index).size();list_index++)
                {
                    if(monster_code == list_code_fight_manual_monster_illustrations.at(root_list_index).at(list_index))
                    {
                        for(int i = 0,j = 1;i < resistant_code_and_other_code.size()-1;i++,j++)
                        {
                            if(resistant_code_and_other_code.at(i))
                            {
                                tree_fight_manual_root_list.at(root_list_index)->child(list_index)->setText(j,text_open);
                            }
                            else
                            {
                                tree_fight_manual_root_list.at(root_list_index)->child(list_index)->setText(j,text_close);
                            }
                        }
                    }
                }
            }
        }
    }
}

void MainWindow::savedata_fight_manual_monster_illustrations_write(QString savedata_file_path)
{
    quint64 pos = offset_fightmanual_monster_illustrations_start;

    quint32 monster_code;
    quint8 flag;
    QBitArray resistant_code;
    QBitArray other_code;
    quint8 get_item_code;

    QString text_open = "ON";
    //QString text_close = "关";

    resistant_code.resize(8);
    other_code.resize(8);
    resistant_code.fill(false);
    other_code.fill(false);

    //反转的[X,幻,空,时,风,火,水,地, 高级属性有效率,资料,获得耀晶片,抗性,描述,exp,lv,hp]
    QList<bool> resistant_code_and_other_code;

    for(int root_list_index = 0;root_list_index < list_code_fight_manual_monster_illustrations.size();root_list_index++)
    {
        for(int list_index = 0;list_index < list_code_fight_manual_monster_illustrations.at(root_list_index).size();list_index++)
        {
            resistant_code_and_other_code.clear();
            for(int i = 0,j = 1;i < 16;i++,j++)
            {
                if(tree_fight_manual_root_list.at(root_list_index)->child(list_index)->text(j) == text_open)
                {
                    resistant_code_and_other_code.append(true);
                }
                else
                {
                    resistant_code_and_other_code.append(false);
                }
            }

            //判断是否全关,全关则跳过本次循环
            for(int i = 0;i < 15;i++)
            {
                if(resistant_code_and_other_code.at(i))
                {
                    monster_code = list_code_fight_manual_monster_illustrations.at(root_list_index).at(list_index);
                    flag = 0x08;
                    //判断道具开关
                    if(resistant_code_and_other_code.at(7))
                    {
                        get_item_code = 0xff;
                    }
                    else
                    {
                        get_item_code = 0x00;
                    }

                    for(int i = 0,j = 7;i < 8;i++,j--)
                    {
                        if(resistant_code_and_other_code.at(i))
                        {
                            other_code.setBit(j,true);
                        }
                        else
                        {
                            other_code.setBit(j,false);
                        }
                    }

                    for(int i = 8,j = 7;i < 15;i++,j--)
                    {
                        if(resistant_code_and_other_code.at(i))
                        {
                            resistant_code.setBit(j,true);
                        }
                        else
                        {
                            resistant_code.setBit(j,false);
                        }
                    }
                    resistant_code.setBit(0,false);

                    //判断高级属性开关
                    for(int i = 12;i <15 ;i++)
                    {
                        if(resistant_code_and_other_code.at(i))
                        {
                            other_code.setBit(0,true);
                            break;
                        }
                        else
                        {
                            other_code.setBit(0,false);
                        }
                    }

                    savedata_binary_write_quint32(savedata_file_path,pos,monster_code);
                    pos += 0x04;
                    savedata_binary_write_quint8(savedata_file_path,pos,flag);
                    pos += 0x01;
                    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,pos,resistant_code);
                    pos += 0x01;
                    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,pos,other_code);
                    pos += 0x01;
                    savedata_binary_write_quint8(savedata_file_path,pos,get_item_code);
                    pos += 0x01;
                    break;
                }
            }
        }
    }

    while(pos <= offset_fightmanual_monster_illustrations_end)
    {
        savedata_binary_write_quint64(savedata_file_path,pos,0x00);
        pos += 0x08;
    }
}

void MainWindow::savedata_investigate_manual_read(QString savedata_file_path)
{
    ui->spinBox_investigate_manual_dp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_investigate_manual_dp));
}

void MainWindow::savedata_investigate_manual_write(QString savedata_file_path)
{
    savedata_binary_write_quint16(savedata_file_path,offset_investigate_manual_dp,ui->spinBox_investigate_manual_dp->value());
}

void MainWindow::savedata_manual_all_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取手册数据...",false,false);

    savedata_fight_manual_read(savedata_file_path);
    savedata_fight_manual_monster_illustrations_read(savedata_file_path);
    savedata_investigate_manual_read(savedata_file_path);

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_manual_all_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入手册数据...",false,false);

    savedata_fight_manual_write(savedata_file_path);
    savedata_fight_manual_monster_illustrations_write(savedata_file_path);
    savedata_investigate_manual_write(savedata_file_path);

    gui_textbrowser_status_operate("完成",true,false);
}

#endif // BZH_ANK_SE_SAVEDATA_MANUAL_H
