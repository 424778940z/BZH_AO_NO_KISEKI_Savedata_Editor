#ifndef BZN_ANK_SE_SAVEDATA_ACHIEVEMENT_TEAM_ROLE_DISPLAY_TIME_OF_COMBAT_SKILL_H
#define BZN_ANK_SE_SAVEDATA_ACHIEVEMENT_TEAM_ROLE_DISPLAY_TIME_OF_COMBAT_SKILL_H

#include "bzh_ank_se_code_define.h"
#include "bzh_ank_se_offset_define.h"
#include "bzh_ank_se_binary_rw.h"

void MainWindow::savedata_achievement_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取成就数据...",false,false);

    QBitArray part_1,part_2,part_3,part_4,part_5,part_6,part_7;

    part_1 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_1);
    part_2 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_2);
    part_3 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_3);
    part_4 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_4);
    part_5 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_5);
    part_6 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_6);
    part_7 = savedata_binary_read_quint8_to_QBitArray(savedata_file_path,offset_achievement_part_7);

    ui->checkBox_ainigema2yonghu->setChecked(part_4.at(6));
    ui->checkBox_tianyandezhizhe->setChecked(part_1.at(6));
    ui->checkBox_shiminyingxiong->setChecked(part_1.at(7));
    ui->checkBox_xiaoshuoaihaozhe->setChecked(part_1.at(3));
    ui->checkBox_baoxianglieren->setChecked(part_1.at(2));
    ui->checkBox_huilushoucangjia->setChecked(part_1.at(4));
    ui->checkBox_jiajushoucangjia->setChecked(part_3.at(1));
    ui->checkBox_daolichefashaoyou->setChecked(part_3.at(0));
    ui->checkBox_baodiaowang->setChecked(part_1.at(1));
    ui->checkBox_yanzhiliaoliren->setChecked(part_1.at(5));
    ui->checkBox_sanxingchushi->setChecked(part_1.at(0));
    ui->checkBox_bujuyigedechushi->setChecked(part_2.at(7));
    ui->checkBox_baiwanfuweng->setChecked(part_2.at(4));
    ui->checkBox_chixudeyashi->setChecked(part_3.at(5));
    ui->checkBox_guiwushejidashi->setChecked(part_7.at(1));
    ui->checkBox_bobopengdashi->setChecked(part_7.at(2));
    ui->checkBox_lizhandeyongshi->setChecked(part_2.at(3));
    ui->checkBox_fenzhandemengshi->setChecked(part_2.at(2));
    ui->checkBox_lizhandeshengzhe->setChecked(part_2.at(1));
    ui->checkBox_qianzhandezhishi->setChecked(part_2.at(0));
    ui->checkBox_leiguangyishan->setChecked(part_3.at(7));
    ui->checkBox_chaojuemiji->setChecked(part_3.at(6));
    ui->checkBox_baihuayingji->setChecked(part_6.at(2));
    ui->checkBox_xuanlangongji->setChecked(part_6.at(1));
    ui->checkBox_lianzhanliansheng->setChecked(part_6.at(0));
    ui->checkBox_batouqimie->setChecked(part_7.at(7));
    ui->checkBox_ganjinshajue->setChecked(part_7.at(6));
    ui->checkBox_baolieguogan->setChecked(part_7.at(5));
    ui->checkBox_zuiqiangzhijian->setChecked(part_3.at(3));
    ui->checkBox_zhijingzhizhu->setChecked(part_4.at(7));
    ui->checkBox_qiyaozhixianshi->setChecked(part_7.at(0));
    ui->checkBox_wushuangzhilieshi->setChecked(part_3.at(2));
    ui->checkBox_zuhejidashi->setChecked(part_2.at(5));
    ui->checkBox_chaoyiliusouchaguan->setChecked(part_3.at(4));
    ui->checkBox_ganliandesouchaguan->setChecked(part_4.at(5));
    ui->checkBox_chuanshuodesouchaguan->setChecked(part_4.at(4));
    ui->checkBox_dzhizhuisuizhe->setChecked(part_2.at(6));
    ui->checkBox_jiemingzhenxiangzhe->setChecked(part_7.at(4));
    ui->checkBox_hongzhitaofazhe->setChecked(part_6.at(4));
    ui->checkBox_gangzhizhuisuizhe->setChecked(part_6.at(3));
    ui->checkBox_dzhicanying->setChecked(part_4.at(3));
    ui->checkBox_yuzhao_xindeshenghuo->setChecked(part_4.at(2));
    ui->checkBox_xisaimuliyatongshanghuiyi->setChecked(part_4.at(1));
    ui->checkBox_duanzandexiuxi->setChecked(part_4.at(0));
    ui->checkBox_taidong_zhongshoudekuanghuanjie->setChecked(part_5.at(7));
    ui->checkBox_mingyunweibudekeluosibeier->setChecked(part_5.at(6));
    ui->checkBox_kuayuexuhuandeletu->setChecked(part_5.at(5));
    ui->checkBox_jibianruci_womenye->setChecked(part_5.at(4));
    ui->checkBox_yuailidejiban->setChecked(part_6.at(7));
    ui->checkBox_yutioudejiban->setChecked(part_6.at(6));
    ui->checkBox_yulandidejiban->setChecked(part_6.at(5));
    ui->checkBox_yunuoaierdejiban->setChecked(part_5.at(2));
    ui->checkBox_yuwajidejiban->setChecked(part_5.at(1));
    ui->checkBox_yulixiadejiban->setChecked(part_5.at(0));
    ui->checkBox_yudadelidejiban->setChecked(part_5.at(3));
    ui->checkBox_chuanzhidesinian_buduandejiban->setChecked(part_7.at(3));

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_achievement_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入成就数据...",false,false);

    QBitArray part_1,part_2,part_3,part_4,part_5,part_6,part_7;

    part_1.resize(8);
    part_2.resize(8);
    part_3.resize(8);
    part_4.resize(8);
    part_5.resize(8);
    part_6.resize(8);
    part_7.resize(8);

    part_4.setBit(6,ui->checkBox_ainigema2yonghu->isChecked());
    part_1.setBit(6,ui->checkBox_tianyandezhizhe->isChecked());
    part_1.setBit(7,ui->checkBox_shiminyingxiong->isChecked());
    part_1.setBit(3,ui->checkBox_xiaoshuoaihaozhe->isChecked());
    part_1.setBit(2,ui->checkBox_baoxianglieren->isChecked());
    part_1.setBit(4,ui->checkBox_huilushoucangjia->isChecked());
    part_3.setBit(1,ui->checkBox_jiajushoucangjia->isChecked());
    part_3.setBit(0,ui->checkBox_daolichefashaoyou->isChecked());
    part_1.setBit(1,ui->checkBox_baodiaowang->isChecked());
    part_1.setBit(5,ui->checkBox_yanzhiliaoliren->isChecked());
    part_1.setBit(0,ui->checkBox_sanxingchushi->isChecked());
    part_2.setBit(7,ui->checkBox_bujuyigedechushi->isChecked());
    part_2.setBit(4,ui->checkBox_baiwanfuweng->isChecked());
    part_3.setBit(5,ui->checkBox_chixudeyashi->isChecked());
    part_7.setBit(1,ui->checkBox_guiwushejidashi->isChecked());
    part_7.setBit(2,ui->checkBox_bobopengdashi->isChecked());
    part_2.setBit(3,ui->checkBox_lizhandeyongshi->isChecked());
    part_2.setBit(2,ui->checkBox_fenzhandemengshi->isChecked());
    part_2.setBit(1,ui->checkBox_lizhandeshengzhe->isChecked());
    part_2.setBit(0,ui->checkBox_qianzhandezhishi->isChecked());
    part_3.setBit(7,ui->checkBox_leiguangyishan->isChecked());
    part_3.setBit(6,ui->checkBox_chaojuemiji->isChecked());
    part_6.setBit(2,ui->checkBox_baihuayingji->isChecked());
    part_6.setBit(1,ui->checkBox_xuanlangongji->isChecked());
    part_6.setBit(0,ui->checkBox_lianzhanliansheng->isChecked());
    part_7.setBit(7,ui->checkBox_batouqimie->isChecked());
    part_7.setBit(6,ui->checkBox_ganjinshajue->isChecked());
    part_7.setBit(5,ui->checkBox_baolieguogan->isChecked());
    part_3.setBit(3,ui->checkBox_zuiqiangzhijian->isChecked());
    part_4.setBit(7,ui->checkBox_zhijingzhizhu->isChecked());
    part_7.setBit(0,ui->checkBox_qiyaozhixianshi->isChecked());
    part_3.setBit(2,ui->checkBox_wushuangzhilieshi->isChecked());
    part_2.setBit(5,ui->checkBox_zuhejidashi->isChecked());
    part_3.setBit(4,ui->checkBox_chaoyiliusouchaguan->isChecked());
    part_4.setBit(5,ui->checkBox_ganliandesouchaguan->isChecked());
    part_4.setBit(4,ui->checkBox_chuanshuodesouchaguan->isChecked());
    part_2.setBit(6,ui->checkBox_dzhizhuisuizhe->isChecked());
    part_7.setBit(4,ui->checkBox_jiemingzhenxiangzhe->isChecked());
    part_6.setBit(4,ui->checkBox_hongzhitaofazhe->isChecked());
    part_6.setBit(3,ui->checkBox_gangzhizhuisuizhe->isChecked());
    part_4.setBit(3,ui->checkBox_dzhicanying->isChecked());
    part_4.setBit(2,ui->checkBox_yuzhao_xindeshenghuo->isChecked());
    part_4.setBit(1,ui->checkBox_xisaimuliyatongshanghuiyi->isChecked());
    part_4.setBit(0,ui->checkBox_duanzandexiuxi->isChecked());
    part_5.setBit(7,ui->checkBox_taidong_zhongshoudekuanghuanjie->isChecked());
    part_5.setBit(6,ui->checkBox_mingyunweibudekeluosibeier->isChecked());
    part_5.setBit(5,ui->checkBox_kuayuexuhuandeletu->isChecked());
    part_5.setBit(4,ui->checkBox_jibianruci_womenye->isChecked());
    part_6.setBit(7,ui->checkBox_yuailidejiban->isChecked());
    part_6.setBit(6,ui->checkBox_yutioudejiban->isChecked());
    part_6.setBit(5,ui->checkBox_yulandidejiban->isChecked());
    part_5.setBit(2,ui->checkBox_yunuoaierdejiban->isChecked());
    part_5.setBit(1,ui->checkBox_yuwajidejiban->isChecked());
    part_5.setBit(0,ui->checkBox_yulixiadejiban->isChecked());
    part_5.setBit(3,ui->checkBox_yudadelidejiban->isChecked());
    part_7.setBit(3,ui->checkBox_chuanzhidesinian_buduandejiban->isChecked());

    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_1,part_1);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_2,part_2);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_3,part_3);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_4,part_4);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_5,part_5);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_6,part_6);
    savedata_binary_write_quint8_from_QBitArray(savedata_file_path,offset_achievement_part_7,part_7);

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_team_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取队伍数据...",false,false);

    QList<quint16> savedata_team_rote_list;

    QList<QComboBox *> comboBox_team_rote_list;
    comboBox_team_rote_list.append(ui->comboBox_team_1);
    comboBox_team_rote_list.append(ui->comboBox_team_2);
    comboBox_team_rote_list.append(ui->comboBox_team_3);
    comboBox_team_rote_list.append(ui->comboBox_team_4);
    comboBox_team_rote_list.append(ui->comboBox_team_5);
    comboBox_team_rote_list.append(ui->comboBox_team_6);
    comboBox_team_rote_list.append(ui->comboBox_team_7);
    comboBox_team_rote_list.append(ui->comboBox_team_8);

    int min_team = 0;
    int max_team = 8;

    int min_visible_items = 0;
    int max_visible_items = 14;

    for(int i = 0;i < max_team;i++)
    {
        savedata_team_rote_list.append(savedata_binary_read_quint16(savedata_file_path,offset_team_list.at(i)));
    }

    for(int i = min_team;i < max_team;i++)
    {
        for(int j = min_visible_items;j < max_visible_items;j++)
        {
            if(savedata_team_rote_list.at(i) == list_code_team_rote.at(j))
            {
                comboBox_team_rote_list.at(i)->setCurrentIndex(j);
                break;
            }
            else
            {
                comboBox_team_rote_list.at(i)->setCurrentIndex(comboBox_team_rote_list.at(i)->count()-1);
            }
        }
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_team_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入队伍数据...",false,false);

    QList<QComboBox *> comboBox_team_rote_list;
    comboBox_team_rote_list.append(ui->comboBox_team_1);
    comboBox_team_rote_list.append(ui->comboBox_team_2);
    comboBox_team_rote_list.append(ui->comboBox_team_3);
    comboBox_team_rote_list.append(ui->comboBox_team_4);
    comboBox_team_rote_list.append(ui->comboBox_team_5);
    comboBox_team_rote_list.append(ui->comboBox_team_6);
    comboBox_team_rote_list.append(ui->comboBox_team_7);
    comboBox_team_rote_list.append(ui->comboBox_team_8);

    int min_team = 0;
    int max_team = 8;

    for(int i = min_team;i < max_team;i++)
    {
        if(comboBox_team_rote_list.at(i)->currentIndex() != (comboBox_team_rote_list.at(i)->count()-1))
        {
            savedata_binary_write_quint16(savedata_file_path,offset_team_list.at(i),list_code_team_rote.at(comboBox_team_rote_list.at(i)->currentIndex()));
        }
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_role_display_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取人物显示数据...",false,false);

    quint16 savedata_role_display_list[12];

    QComboBox *comboBox_role_display_list[12] =
    {
        ui->comboBox_role_display_Lloyd,
        ui->comboBox_role_display_Elie,
        ui->comboBox_role_display_Tio,
        ui->comboBox_role_display_Randy,
        ui->comboBox_role_display_Lazy,
        ui->comboBox_role_display_Rixia,
        ui->comboBox_role_display_Zeit,
        ui->comboBox_role_display_Arios,
        ui->comboBox_role_display_Noel,
        ui->comboBox_role_display_Dudley,
        ui->comboBox_role_display_Garcia,
        ui->comboBox_role_display_other
    };

    int min_role_display = 0;
    int max_role_display = 12;

    int min_visible_items = 0;
    int max_visible_items = 21;

    for(int i = 0;i < max_role_display;i++)
    {
        savedata_role_display_list[i] = savedata_binary_read_quint16(savedata_file_path,offset_role_display_list.at(i));
    }

    for(int i = min_role_display;i < max_role_display;i++)
    {
        for(int j = min_visible_items;j < max_visible_items;j++)
        {
            if(savedata_role_display_list[i] == list_code_rote_display.at(j))
            {
                comboBox_role_display_list[i]->setCurrentIndex(j);
                break;
            }
            else
            {
                comboBox_role_display_list[i]->setCurrentIndex(comboBox_role_display_list[i]->count()-1);
            }
        }
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_role_display_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入人物显示数据...",false,false);

    QComboBox *comboBox_role_display_list[12] =
    {
        ui->comboBox_role_display_Lloyd,
        ui->comboBox_role_display_Elie,
        ui->comboBox_role_display_Tio,
        ui->comboBox_role_display_Randy,
        ui->comboBox_role_display_Lazy,
        ui->comboBox_role_display_Rixia,
        ui->comboBox_role_display_Zeit,
        ui->comboBox_role_display_Arios,
        ui->comboBox_role_display_Noel,
        ui->comboBox_role_display_Dudley,
        ui->comboBox_role_display_Garcia,
        ui->comboBox_role_display_other
    };

    int min_role_display = 0;
    int max_role_display = 12;

    for(int i = min_role_display;i < max_role_display;i++)
    {
        if(comboBox_role_display_list[i]->currentIndex() != (comboBox_role_display_list[i]->count()-1))
        {
            savedata_binary_write_quint16(savedata_file_path,offset_role_display_list.at(i),list_code_rote_display.at(comboBox_role_display_list[i]->currentIndex()));
        }
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_time_of_combat_skill_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取组合技使用次数数据...",false,false);

    ui->spinBox_time_of_combat_skill_Elie->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Elie));
    ui->spinBox_time_of_combat_skill_Tio->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Tio));
    ui->spinBox_time_of_combat_skill_Randy->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Randy));
    ui->spinBox_time_of_combat_skill_Lazy->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Lazy));
    ui->spinBox_time_of_combat_skill_Rixia->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Rixia));
    ui->spinBox_time_of_combat_skill_Zeit->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Zeit));
    ui->spinBox_time_of_combat_skill_Arios->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Arios));
    ui->spinBox_time_of_combat_skill_Noel->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Noel));
    ui->spinBox_time_of_combat_skill_Dudley->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Dudley));
    ui->spinBox_time_of_combat_skill_Garcia->setValue(savedata_binary_read_quint16(savedata_file_path,offset_time_of_combat_skill_Garcia));

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_time_of_combat_skill_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入组合技使用次数数据...",false,false);

    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Elie,ui->spinBox_time_of_combat_skill_Elie->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Tio,ui->spinBox_time_of_combat_skill_Tio->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Randy,ui->spinBox_time_of_combat_skill_Randy->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Lazy,ui->spinBox_time_of_combat_skill_Lazy->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Rixia,ui->spinBox_time_of_combat_skill_Rixia->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Zeit,ui->spinBox_time_of_combat_skill_Zeit->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Arios,ui->spinBox_time_of_combat_skill_Arios->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Noel,ui->spinBox_time_of_combat_skill_Noel->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Dudley,ui->spinBox_time_of_combat_skill_Dudley->value());
    savedata_binary_write_quint16(savedata_file_path,offset_time_of_combat_skill_Garcia,ui->spinBox_time_of_combat_skill_Garcia->value());

    gui_textbrowser_status_operate("完成",true,false);
}

#endif // BZN_ANK_SE_SAVEDATA_ACHIEVEMENT_TEAM_ROLE_DISPLAY_TIME_OF_COMBAT_SKILL_H
