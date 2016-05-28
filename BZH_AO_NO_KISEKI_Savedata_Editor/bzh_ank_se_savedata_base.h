#ifndef BZH_ANK_SE_SAVEDATA_BASE_H
#define BZH_ANK_SE_SAVEDATA_BASE_H

#include "bzh_ank_se_define.h"

void MainWindow::savedata_base_Arios_read(QString savedata_file_path)
{
    ui->spinBox_Arios_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Arios_max_hp));
    ui->spinBox_Arios_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_max_ep));
    ui->spinBox_Arios_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_cp));
    ui->spinBox_Arios_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Arios_hp));
    ui->spinBox_Arios_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_ep));
    ui->spinBox_Arios_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_lv));
    ui->spinBox_Arios_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Arios_exp));
    ui->spinBox_Arios_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_str));
    ui->spinBox_Arios_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_def));
    ui->spinBox_Arios_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_ats));
    ui->spinBox_Arios_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Arios_adf));
}

void MainWindow::savedata_base_Dudley_read(QString savedata_file_path)
{
    ui->spinBox_Dudley_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Dudley_max_hp));
    ui->spinBox_Dudley_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_max_ep));
    ui->spinBox_Dudley_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_cp));
    ui->spinBox_Dudley_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Dudley_hp));
    ui->spinBox_Dudley_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_ep));
    ui->spinBox_Dudley_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_lv));
    ui->spinBox_Dudley_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Dudley_exp));
    ui->spinBox_Dudley_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_str));
    ui->spinBox_Dudley_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_def));
    ui->spinBox_Dudley_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_ats));
    ui->spinBox_Dudley_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Dudley_adf));
}

void MainWindow::savedata_base_Elie_read(QString savedata_file_path)
{
    ui->spinBox_Elie_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Elie_max_hp));
    ui->spinBox_Elie_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_max_ep));
    ui->spinBox_Elie_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_cp));
    ui->spinBox_Elie_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Elie_hp));
    ui->spinBox_Elie_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_ep));
    ui->spinBox_Elie_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_lv));
    ui->spinBox_Elie_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Elie_exp));
    ui->spinBox_Elie_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_str));
    ui->spinBox_Elie_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_def));
    ui->spinBox_Elie_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_ats));
    ui->spinBox_Elie_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Elie_adf));
}

void MainWindow::savedata_base_Garcia_read(QString savedata_file_path)
{
    ui->spinBox_Garcia_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Garcia_max_hp));
    ui->spinBox_Garcia_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_max_ep));
    ui->spinBox_Garcia_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_cp));
    ui->spinBox_Garcia_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Garcia_hp));
    ui->spinBox_Garcia_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_ep));
    ui->spinBox_Garcia_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_lv));
    ui->spinBox_Garcia_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Garcia_exp));
    ui->spinBox_Garcia_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_str));
    ui->spinBox_Garcia_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_def));
    ui->spinBox_Garcia_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_ats));
    ui->spinBox_Garcia_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Garcia_adf));
}

void MainWindow::savedata_base_Lazy_read(QString savedata_file_path)
{
    ui->spinBox_Lazy_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lazy_max_hp));
    ui->spinBox_Lazy_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_max_ep));
    ui->spinBox_Lazy_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_cp));
    ui->spinBox_Lazy_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lazy_hp));
    ui->spinBox_Lazy_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_ep));
    ui->spinBox_Lazy_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_lv));
    ui->spinBox_Lazy_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lazy_exp));
    ui->spinBox_Lazy_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_str));
    ui->spinBox_Lazy_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_def));
    ui->spinBox_Lazy_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_ats));
    ui->spinBox_Lazy_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lazy_adf));
}

void MainWindow::savedata_base_Lloyd_read(QString savedata_file_path)
{
    ui->spinBox_Lloyd_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lloyd_max_hp));
    ui->spinBox_Lloyd_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_max_ep));
    ui->spinBox_Lloyd_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_cp));
    ui->spinBox_Lloyd_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lloyd_hp));
    ui->spinBox_Lloyd_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_ep));
    ui->spinBox_Lloyd_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_lv));
    ui->spinBox_Lloyd_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Lloyd_exp));
    ui->spinBox_Lloyd_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_str));
    ui->spinBox_Lloyd_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_def));
    ui->spinBox_Lloyd_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_ats));
    ui->spinBox_Lloyd_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Lloyd_adf));
}

void MainWindow::savedata_base_Noel_read(QString savedata_file_path)
{
    ui->spinBox_Noel_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Noel_max_hp));
    ui->spinBox_Noel_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_max_ep));
    ui->spinBox_Noel_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_cp));
    ui->spinBox_Noel_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Noel_hp));
    ui->spinBox_Noel_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_ep));
    ui->spinBox_Noel_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_lv));
    ui->spinBox_Noel_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Noel_exp));
    ui->spinBox_Noel_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_str));
    ui->spinBox_Noel_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_def));
    ui->spinBox_Noel_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_ats));
    ui->spinBox_Noel_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Noel_adf));
}

void MainWindow::savedata_base_Randy_read(QString savedata_file_path)
{
    ui->spinBox_Randy_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Randy_max_hp));
    ui->spinBox_Randy_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_max_ep));
    ui->spinBox_Randy_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_cp));
    ui->spinBox_Randy_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Randy_hp));
    ui->spinBox_Randy_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_ep));
    ui->spinBox_Randy_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_lv));
    ui->spinBox_Randy_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Randy_exp));
    ui->spinBox_Randy_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_str));
    ui->spinBox_Randy_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_def));
    ui->spinBox_Randy_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_ats));
    ui->spinBox_Randy_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Randy_adf));
}

void MainWindow::savedata_base_Rixia_read(QString savedata_file_path)
{
    ui->spinBox_Rixia_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Rixia_max_hp));
    ui->spinBox_Rixia_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_max_ep));
    ui->spinBox_Rixia_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_cp));
    ui->spinBox_Rixia_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Rixia_hp));
    ui->spinBox_Rixia_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_ep));
    ui->spinBox_Rixia_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_lv));
    ui->spinBox_Rixia_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Rixia_exp));
    ui->spinBox_Rixia_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_str));
    ui->spinBox_Rixia_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_def));
    ui->spinBox_Rixia_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_ats));
    ui->spinBox_Rixia_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Rixia_adf));
}

void MainWindow::savedata_base_Tio_read(QString savedata_file_path)
{
    ui->spinBox_Tio_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Tio_max_hp));
    ui->spinBox_Tio_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_max_ep));
    ui->spinBox_Tio_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_cp));
    ui->spinBox_Tio_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Tio_hp));
    ui->spinBox_Tio_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_ep));
    ui->spinBox_Tio_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_lv));
    ui->spinBox_Tio_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Tio_exp));
    ui->spinBox_Tio_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_str));
    ui->spinBox_Tio_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_def));
    ui->spinBox_Tio_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_ats));
    ui->spinBox_Tio_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Tio_adf));
}

void MainWindow::savedata_base_Zeit_read(QString savedata_file_path)
{
    ui->spinBox_Zeit_max_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Zeit_max_hp));
    ui->spinBox_Zeit_max_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_max_ep));
    ui->spinBox_Zeit_cp->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_cp));
    ui->spinBox_Zeit_hp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Zeit_hp));
    ui->spinBox_Zeit_ep->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_ep));
    ui->spinBox_Zeit_lv->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_lv));
    ui->spinBox_Zeit_exp->setValue(savedata_binary_read_quint32(savedata_file_path,offset_Zeit_exp));
    ui->spinBox_Zeit_str->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_str));
    ui->spinBox_Zeit_def->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_def));
    ui->spinBox_Zeit_ats->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_ats));
    ui->spinBox_Zeit_adf->setValue(savedata_binary_read_quint16(savedata_file_path,offset_Zeit_adf));
}


void MainWindow::savedata_time_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取时间数据...",false,false);

    quint32 savedata_time_s = savedata_binary_read_quint32(savedata_file_path,offset_time_s);
    ui->spinBox_all_time_s->setValue(savedata_time_s);

    quint32 time_h = 0,time_m = 0,time_s = 0;

    for(;savedata_time_s >= 3600;time_h++)
    {
        savedata_time_s -= 3600;
    }
    for(;savedata_time_s >= 60;time_m++)
    {
        savedata_time_s -= 60;
    }
    for(;savedata_time_s >= 1;time_s++)
    {
        savedata_time_s -= 1;
    }

    ui->spinBox_time_h->setValue(time_h);
    ui->spinBox_time_m->setValue(time_m);
    ui->spinBox_time_s->setValue(time_s);

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_difficulty_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取难度数据...",false,false);

    quint8 savedata_difficulty = savedata_binary_read_quint8(savedata_file_path,offset_difficulty);
    switch(savedata_difficulty)
    {
    case 0:
        ui->radioButton_difficulty_normal->setChecked(true);
        break;
    case 1:
        ui->radioButton_difficulty_hard->setChecked(true);
        break;
    case 2:
        ui->radioButton_difficulty_nightmare->setChecked(true);
        break;
    case 3:
        ui->radioButton_difficulty_ezsy->setChecked(true);
        break;
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_mira_medal_yjp_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取米拉\\耀晶片数据...",false,false);

    ui->spinBox_mira->setValue(savedata_binary_read_quint32(savedata_file_path,offset_mira));
    ui->spinBox_medal->setValue(savedata_binary_read_quint32(savedata_file_path,offset_medal));
    ui->spinBox_yjp_di->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_di));
    ui->spinBox_yjp_shui->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_shui));
    ui->spinBox_yjp_huo->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_huo));
    ui->spinBox_yjp_feng->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_feng));
    ui->spinBox_yjp_shi->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_shi));
    ui->spinBox_yjp_kong->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_kong));
    ui->spinBox_yjp_huan->setValue(savedata_binary_read_quint32(savedata_file_path,offset_yjp_huan));

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_likeability_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取好感度数据...",false,false);

    ui->spinBox_likeability_KeA->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_KeA));
    ui->spinBox_likeability_Elie->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Elie));
    ui->spinBox_likeability_Tio->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Tio));
    ui->spinBox_likeability_Randy->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Randy));
    ui->spinBox_likeability_Noel->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Noel));
    ui->spinBox_likeability_Lazy->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Lazy));
    ui->spinBox_likeability_Rixia->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Rixia));
    ui->spinBox_likeability_Dudley->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Dudley));
    ui->spinBox_likeability_Ilya->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Ilya));
    ui->spinBox_likeability_Cecil->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Cecil));
    ui->spinBox_likeability_Fran->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Fran));
    ui->spinBox_likeability_Sully->setValue(savedata_binary_read_quint8(savedata_file_path,offset_likeability_Sully));

    gui_textbrowser_status_operate("完成",true,false);
}

/************************************************************************************************************************/

void MainWindow::savedata_base_Arios_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Arios_max_hp,ui->spinBox_Arios_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_max_ep,ui->spinBox_Arios_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_cp,ui->spinBox_Arios_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Arios_hp,ui->spinBox_Arios_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_ep,ui->spinBox_Arios_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_lv,ui->spinBox_Arios_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Arios_exp,ui->spinBox_Arios_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_str,ui->spinBox_Arios_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_def,ui->spinBox_Arios_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_ats,ui->spinBox_Arios_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Arios_adf,ui->spinBox_Arios_adf->value());
}

void MainWindow::savedata_base_Dudley_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Dudley_max_hp,ui->spinBox_Dudley_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_max_ep,ui->spinBox_Dudley_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_cp,ui->spinBox_Dudley_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Dudley_hp,ui->spinBox_Dudley_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_ep,ui->spinBox_Dudley_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_lv,ui->spinBox_Dudley_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Dudley_exp,ui->spinBox_Dudley_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_str,ui->spinBox_Dudley_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_def,ui->spinBox_Dudley_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_ats,ui->spinBox_Dudley_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Dudley_adf,ui->spinBox_Dudley_adf->value());
}

void MainWindow::savedata_base_Elie_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Elie_max_hp,ui->spinBox_Elie_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_max_ep,ui->spinBox_Elie_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_cp,ui->spinBox_Elie_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Elie_hp,ui->spinBox_Elie_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_ep,ui->spinBox_Elie_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_lv,ui->spinBox_Elie_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Elie_exp,ui->spinBox_Elie_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_str,ui->spinBox_Elie_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_def,ui->spinBox_Elie_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_ats,ui->spinBox_Elie_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Elie_adf,ui->spinBox_Elie_adf->value());
}

void MainWindow::savedata_base_Garcia_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Garcia_max_hp,ui->spinBox_Garcia_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_max_ep,ui->spinBox_Garcia_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_cp,ui->spinBox_Garcia_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Garcia_hp,ui->spinBox_Garcia_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_ep,ui->spinBox_Garcia_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_lv,ui->spinBox_Garcia_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Garcia_exp,ui->spinBox_Garcia_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_str,ui->spinBox_Garcia_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_def,ui->spinBox_Garcia_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_ats,ui->spinBox_Garcia_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Garcia_adf,ui->spinBox_Garcia_adf->value());
}

void MainWindow::savedata_base_Lazy_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Lazy_max_hp,ui->spinBox_Lazy_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_max_ep,ui->spinBox_Lazy_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_cp,ui->spinBox_Lazy_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Lazy_hp,ui->spinBox_Lazy_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_ep,ui->spinBox_Lazy_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_lv,ui->spinBox_Lazy_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Lazy_exp,ui->spinBox_Lazy_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_str,ui->spinBox_Lazy_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_def,ui->spinBox_Lazy_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_ats,ui->spinBox_Lazy_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lazy_adf,ui->spinBox_Lazy_adf->value());
}

void MainWindow::savedata_base_Lloyd_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Lloyd_max_hp,ui->spinBox_Lloyd_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_max_ep,ui->spinBox_Lloyd_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_cp,ui->spinBox_Lloyd_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Lloyd_hp,ui->spinBox_Lloyd_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_ep,ui->spinBox_Lloyd_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_lv,ui->spinBox_Lloyd_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Lloyd_exp,ui->spinBox_Lloyd_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_str,ui->spinBox_Lloyd_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_def,ui->spinBox_Lloyd_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_ats,ui->spinBox_Lloyd_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Lloyd_adf,ui->spinBox_Lloyd_adf->value());
}

void MainWindow::savedata_base_Noel_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Noel_max_hp,ui->spinBox_Noel_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_max_ep,ui->spinBox_Noel_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_cp,ui->spinBox_Noel_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Noel_hp,ui->spinBox_Noel_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_ep,ui->spinBox_Noel_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_lv,ui->spinBox_Noel_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Noel_exp,ui->spinBox_Noel_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_str,ui->spinBox_Noel_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_def,ui->spinBox_Noel_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_ats,ui->spinBox_Noel_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Noel_adf,ui->spinBox_Noel_adf->value());
}

void MainWindow::savedata_base_Randy_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Randy_max_hp,ui->spinBox_Randy_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_max_ep,ui->spinBox_Randy_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_cp,ui->spinBox_Randy_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Randy_hp,ui->spinBox_Randy_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_ep,ui->spinBox_Randy_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_lv,ui->spinBox_Randy_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Randy_exp,ui->spinBox_Randy_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_str,ui->spinBox_Randy_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_def,ui->spinBox_Randy_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_ats,ui->spinBox_Randy_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Randy_adf,ui->spinBox_Randy_adf->value());
}

void MainWindow::savedata_base_Rixia_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Rixia_max_hp,ui->spinBox_Rixia_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_max_ep,ui->spinBox_Rixia_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_cp,ui->spinBox_Rixia_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Rixia_hp,ui->spinBox_Rixia_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_ep,ui->spinBox_Rixia_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_lv,ui->spinBox_Rixia_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Rixia_exp,ui->spinBox_Rixia_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_str,ui->spinBox_Rixia_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_def,ui->spinBox_Rixia_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_ats,ui->spinBox_Rixia_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Rixia_adf,ui->spinBox_Rixia_adf->value());
}

void MainWindow::savedata_base_Tio_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Tio_max_hp,ui->spinBox_Tio_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_max_ep,ui->spinBox_Tio_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_cp,ui->spinBox_Tio_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Tio_hp,ui->spinBox_Tio_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_ep,ui->spinBox_Tio_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_lv,ui->spinBox_Tio_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Tio_exp,ui->spinBox_Tio_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_str,ui->spinBox_Tio_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_def,ui->spinBox_Tio_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_ats,ui->spinBox_Tio_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Tio_adf,ui->spinBox_Tio_adf->value());
}

void MainWindow::savedata_base_Zeit_write(QString savedata_file_path)
{
    savedata_binary_write_quint32(savedata_file_path,offset_Zeit_max_hp,ui->spinBox_Zeit_max_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_max_ep,ui->spinBox_Zeit_max_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_cp,ui->spinBox_Zeit_cp->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Zeit_hp,ui->spinBox_Zeit_hp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_ep,ui->spinBox_Zeit_ep->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_lv,ui->spinBox_Zeit_lv->value());
    savedata_binary_write_quint32(savedata_file_path,offset_Zeit_exp,ui->spinBox_Zeit_exp->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_str,ui->spinBox_Zeit_str->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_def,ui->spinBox_Zeit_def->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_ats,ui->spinBox_Zeit_ats->value());
    savedata_binary_write_quint16(savedata_file_path,offset_Zeit_adf,ui->spinBox_Zeit_adf->value());
}


void MainWindow::savedata_time_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入时间数据...",false,false);

    quint32 time_h = 0,time_m = 0,time_s = 0;

    time_h = ui->spinBox_time_h->value();
    time_m = ui->spinBox_time_m->value();
    time_s = ui->spinBox_time_s->value();

    quint32 savedata_time_s = (time_h * 3600) + (time_m * 60) +time_s;
    ui->spinBox_all_time_s->setValue(savedata_time_s);

    savedata_binary_write_quint32(savedata_file_path,offset_time_s,savedata_time_s);

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_difficulty_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入难度数据...",false,false);

    quint8 savedata_difficulty;

    if(ui->radioButton_difficulty_normal->isChecked())
    {
        savedata_difficulty = code_difficulty_normal;
        savedata_binary_write_quint8(savedata_file_path,offset_difficulty,savedata_difficulty);
    }
    else if(ui->radioButton_difficulty_hard->isChecked())
    {
        savedata_difficulty = code_difficulty_hard;
        savedata_binary_write_quint8(savedata_file_path,offset_difficulty,savedata_difficulty);
    }
    else if(ui->radioButton_difficulty_nightmare->isChecked())
    {
        savedata_difficulty = code_difficulty_nightmare;
        savedata_binary_write_quint8(savedata_file_path,offset_difficulty,savedata_difficulty);
    }
    else if(ui->radioButton_difficulty_ezsy->isChecked())
    {
        savedata_difficulty = code_difficulty_ezsy;
        savedata_binary_write_quint8(savedata_file_path,offset_difficulty,savedata_difficulty);
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_mira_medal_yjp_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入米拉\\耀晶片数据...",false,false);

    savedata_binary_write_quint32(savedata_file_path,offset_mira,ui->spinBox_mira->value());
    savedata_binary_write_quint32(savedata_file_path,offset_medal,ui->spinBox_medal->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_di,ui->spinBox_yjp_di->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_shui,ui->spinBox_yjp_shui->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_huo,ui->spinBox_yjp_huo->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_feng,ui->spinBox_yjp_feng->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_shi,ui->spinBox_yjp_shi->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_kong,ui->spinBox_yjp_kong->value());
    savedata_binary_write_quint32(savedata_file_path,offset_yjp_huan,ui->spinBox_yjp_huan->value());

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_likeability_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入好感度数据...",false,false);

    savedata_binary_write_quint8(savedata_file_path,offset_likeability_KeA,ui->spinBox_likeability_KeA->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Elie,ui->spinBox_likeability_Elie->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Tio,ui->spinBox_likeability_Tio->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Randy,ui->spinBox_likeability_Randy->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Noel,ui->spinBox_likeability_Noel->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Lazy,ui->spinBox_likeability_Lazy->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Rixia,ui->spinBox_likeability_Rixia->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Dudley,ui->spinBox_likeability_Dudley->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Ilya,ui->spinBox_likeability_Ilya->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Cecil,ui->spinBox_likeability_Cecil->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Fran,ui->spinBox_likeability_Fran->value());
    savedata_binary_write_quint8(savedata_file_path,offset_likeability_Sully,ui->spinBox_likeability_Sully->value());

    gui_textbrowser_status_operate("完成",true,false);
}

/************************************************************************************************************************/

void MainWindow::savedata_base_all_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取基本属性数据...",false,false);

    savedata_base_Arios_read(savedata_file_path);
    savedata_base_Dudley_read(savedata_file_path);
    savedata_base_Elie_read(savedata_file_path);
    savedata_base_Garcia_read(savedata_file_path);
    savedata_base_Lazy_read(savedata_file_path);
    savedata_base_Lloyd_read(savedata_file_path);
    savedata_base_Noel_read(savedata_file_path);
    savedata_base_Randy_read(savedata_file_path);
    savedata_base_Rixia_read(savedata_file_path);
    savedata_base_Tio_read(savedata_file_path);
    savedata_base_Zeit_read(savedata_file_path);

    gui_textbrowser_status_operate("完成",true,false);

    savedata_mira_medal_yjp_read(savedata_file_path);
    savedata_difficulty_read(savedata_file_path);
    savedata_time_read(savedata_file_path);
    savedata_likeability_read(savedata_file_path);
}

void MainWindow::savedata_base_all_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入基本属性数据...",false,false);

    savedata_base_Arios_write(savedata_file_path);
    savedata_base_Dudley_write(savedata_file_path);
    savedata_base_Elie_write(savedata_file_path);
    savedata_base_Garcia_write(savedata_file_path);
    savedata_base_Lazy_write(savedata_file_path);
    savedata_base_Lloyd_write(savedata_file_path);
    savedata_base_Noel_write(savedata_file_path);
    savedata_base_Randy_write(savedata_file_path);
    savedata_base_Rixia_write(savedata_file_path);
    savedata_base_Tio_write(savedata_file_path);
    savedata_base_Zeit_write(savedata_file_path);

    gui_textbrowser_status_operate("完成",true,false);

    savedata_mira_medal_yjp_write(savedata_file_path);
    savedata_difficulty_write(savedata_file_path);
    savedata_time_write(savedata_file_path);
    savedata_likeability_write(savedata_file_path);
}

#endif // BZH_ANK_SE_SAVEDATA_BASE_H
