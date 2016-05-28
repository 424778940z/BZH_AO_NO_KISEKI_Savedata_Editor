#ifndef BZH_ANK_SE_GUI_H
#define BZH_ANK_SE_GUI_H

#include "mainwindow.h"

#include <QDateTime>
#include <QStandardItem>
#include <QFileDialog>

bool change_not_save = false;
int tabWidget_current_page = 0;

//界面按钮

void MainWindow::gui_select_savedata_dir()
{
    //ui->lineEdit_savedata_dir->clear();

    QFileDialog *savedata_dir_filedialog = new QFileDialog(this);
    savedata_dir_filedialog->setWindowTitle("Select Savedata Directory");
    savedata_dir_filedialog->setDirectory(ui->lineEdit_savedata_dir->text());
    savedata_dir_filedialog->setNameFilter("Directories");
    savedata_dir_filedialog->setFileMode(savedata_dir_filedialog->DirectoryOnly);

    if(savedata_dir_filedialog->exec() == QFileDialog::Accepted)
    {
        gui_set_savedata_dir_path_to_gui(savedata_dir_filedialog->selectedFiles()[0]);
        gui_make_savedata_dir_list();

        gui_textbrowser_status_operate("游戏存档所在目录设置为: ",false,false);
        gui_textbrowser_status_operate(savedata_dir_filedialog->selectedFiles()[0],true,false);
    }
    delete savedata_dir_filedialog;
}

void MainWindow::gui_select_user_savedata_file()
{
    ui->lineEdit_user_savedata_bak_file->clear();
    ui->lineEdit_user_savedata_png_file->clear();
    ui->lineEdit_user_savedata_dat_file->clear();

    QFileDialog *save_dat_file_filedialog = new QFileDialog(this);
    save_dat_file_filedialog->setWindowTitle("Open User Savedata File");
    save_dat_file_filedialog->setDirectory(".");
    QStringList filters;
    filters << "Savedata file (*.dat)"
            << "Savedata backup file (*.savedata_bak)"
            << "Any file (*)";
    save_dat_file_filedialog->setNameFilters(filters);

    if(save_dat_file_filedialog->exec() == QFileDialog::Accepted)
    {
        gui_load_savedata(save_dat_file_filedialog->selectedFiles()[0],true);
    }
    delete save_dat_file_filedialog;
}

void MainWindow::gui_save_user_savedata_file()
{
    //checksum
    gui_textbrowser_status_operate("校验文件大小和文件头...",false,false);
    if(savedata_file_head_size_verify(gui_get_user_savedata_dat_file_path_from_gui(),true))
    {
        gui_textbrowser_status_operate("成功",true,false);

        //save all
        savedata_base_all_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_likeability_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_items_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_manual_all_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_team_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_role_display_write(gui_get_user_savedata_dat_file_path_from_gui());
        savedata_time_of_combat_skill_write(gui_get_user_savedata_dat_file_path_from_gui());

        gui_textbrowser_status_operate("检查存档校验码...",false,false);
        if(savedata_checksum_verify(gui_get_user_savedata_dat_file_path_from_gui(),true))
        {
            gui_textbrowser_status_operate("匹配",true,false);
        }
        else
        {
            gui_textbrowser_status_operate("不匹配",true,false);
            gui_textbrowser_status_operate("重新生成校验码...",false,false);
            QVector<quint32> checksum = savedata_checksum_patch(gui_get_user_savedata_dat_file_path_from_gui(),true);
            gui_textbrowser_status_operate("新的校验码为:",true,false);
            gui_textbrowser_status_operate(" 0x",true,false);
            gui_textbrowser_status_operate(QString::number(checksum[0],16),true,false);
            gui_textbrowser_status_operate(" 0x",true,false);
            gui_textbrowser_status_operate(QString::number(checksum[1],16),true,false);
        }
    }
    else
    {
        gui_textbrowser_status_operate("失败",true,false);
    }
}

void MainWindow::gui_select_system_savedata_file()
{
    ui->lineEdit_system_savedata_bak_file->clear();
    ui->lineEdit_system_savedata_dat_file->clear();

    QFileDialog *save_dat_file_filedialog = new QFileDialog(this);
    save_dat_file_filedialog->setWindowTitle("Open System Savedata File");
    save_dat_file_filedialog->setDirectory(".");
    QStringList filters;
    filters << "Savedata file (*.dat)"
            << "Savedata backup file (*.savedata_bak)"
            << "Any file (*)";
    save_dat_file_filedialog->setNameFilters(filters);

    if(save_dat_file_filedialog->exec() == QFileDialog::Accepted)
    {
        gui_load_savedata(save_dat_file_filedialog->selectedFiles()[0],false);
    }
    delete save_dat_file_filedialog;
}

void MainWindow::gui_save_system_savedata_file()
{

    //checksum
    gui_textbrowser_status_operate("校验文件大小和文件头...",false,false);
    if(savedata_file_head_size_verify(gui_get_system_savedata_dat_file_path_from_gui(),false))
    {
        gui_textbrowser_status_operate("成功",true,false);

        //save all
        savedata_achievement_write(gui_get_system_savedata_dat_file_path_from_gui());

        gui_textbrowser_status_operate("检查存档校验码...",false,false);
        if(savedata_checksum_verify(gui_get_system_savedata_dat_file_path_from_gui(),false))
        {
            gui_textbrowser_status_operate("匹配",true,false);
        }
        else
        {
            gui_textbrowser_status_operate("不匹配",true,false);
            gui_textbrowser_status_operate("重新生成校验码...",false,false);
            QVector<quint32> checksum = savedata_checksum_patch(gui_get_system_savedata_dat_file_path_from_gui(),false);
            gui_textbrowser_status_operate("新的校验码为:",true,false);
            gui_textbrowser_status_operate(" 0x",true,false);
            gui_textbrowser_status_operate(QString::number(checksum[0],16),true,false);
            gui_textbrowser_status_operate(" 0x",true,false);
            gui_textbrowser_status_operate(QString::number(checksum[1],16),true,false);
        }
    }
    else
    {
        gui_textbrowser_status_operate("失败",true,false);
    }
}

void MainWindow::gui_set_item_treewidger_number_of_item()
{
    QString number_to_string = QString::number(ui->spinBox_number_of_items->value(),10);
    foreach(QTreeWidgetItem *tree_item,ui->treeWidge_item->selectedItems())
    {
        tree_item->setText(2,number_to_string);
    }
}

void MainWindow::gui_set_fight_manual_treewigdet_selected()
{
    QString text_open = "ON";
    QString text_close = "OFF";

    foreach(QTreeWidgetItem *tree_item,ui->treeWidget_fight_manual->selectedItems())
    {
        if(ui->checkBox_fight_manual_selected_hp->isChecked())
            tree_item->setText(1,text_open);
        else
            tree_item->setText(1,text_close);
        if(ui->checkBox_fight_manual_selected_lv->isChecked())
            tree_item->setText(2,text_open);
        else
            tree_item->setText(2,text_close);
        if(ui->checkBox_fight_manual_selected_exp->isChecked())
            tree_item->setText(3,text_open);
        else
            tree_item->setText(3,text_close);
        if(ui->checkBox_fight_manual_selected_describe->isChecked())
            tree_item->setText(4,text_open);
        else
            tree_item->setText(4,text_close);
        if(ui->checkBox_fight_manual_selected_resistant->isChecked())
            tree_item->setText(5,text_open);
        else
            tree_item->setText(5,text_close);
        if(ui->checkBox_fight_manual_selected_yjp->isChecked())
            tree_item->setText(6,text_open);
        else
            tree_item->setText(6,text_close);
        if(ui->checkBox_fight_manual_selected_data->isChecked())
            tree_item->setText(7,text_open);
        else
            tree_item->setText(7,text_close);
        if(ui->checkBox_fight_manual_selected_items->isChecked())
            tree_item->setText(8,text_open);
        else
            tree_item->setText(8,text_close);
        if(ui->checkBox_fight_manual_selected_di->isChecked())
            tree_item->setText(9,text_open);
        else
            tree_item->setText(9,text_close);
        if(ui->checkBox_fight_manual_selected_huo->isChecked())
            tree_item->setText(10,text_open);
        else
            tree_item->setText(10,text_close);
        if(ui->checkBox_fight_manual_selected_shui->isChecked())
            tree_item->setText(11,text_open);
        else
            tree_item->setText(11,text_close);
        if(ui->checkBox_fight_manual_selected_feng->isChecked())
            tree_item->setText(12,text_open);
        else
            tree_item->setText(12,text_close);
        if(ui->checkBox_fight_manual_selected_shi->isChecked())
            tree_item->setText(13,text_open);
        else
            tree_item->setText(13,text_close);
        if(ui->checkBox_fight_manual_selected_kong->isChecked())
            tree_item->setText(14,text_open);
        else
            tree_item->setText(14,text_close);
        if(ui->checkBox_fight_manual_selected_huan->isChecked())
            tree_item->setText(15,text_open);
        else
            tree_item->setText(15,text_close);
    }
}

//状态栏更新
void MainWindow::gui_textbrowser_status_operate(QString string_status, bool insert, bool newline)
{
    if(insert)
    {
        ui->textBrowser_status->insertPlainText(string_status);
    }
    else
    {
        QDateTime current_date_time;
        current_date_time = QDateTime::currentDateTime();
        QString string_status_with_time = current_date_time.toString("[yyyy-MM-dd hh:mm:ss] ");
        string_status_with_time.append(string_status);
        ui->textBrowser_status->append(string_status_with_time);
    }
    if(newline)
    {
        ui->textBrowser_status->append("");
    }
}

//gui界面读写
//user savedata 部分

QString MainWindow::gui_get_user_savedata_dat_file_path_from_gui()
{
    QString user_savedata_dat_file_path = ui->lineEdit_user_savedata_dat_file->text();
    return user_savedata_dat_file_path;
}

void MainWindow::gui_set_user_savedata_dat_file_path_to_gui(QString user_savedata_dat_file_path)
{
     ui->lineEdit_user_savedata_dat_file->setText(user_savedata_dat_file_path);
}

QString MainWindow::gui_get_user_savedata_bak_file_path_from_gui()
{
    QString user_savedata_bak_file_path = ui->lineEdit_user_savedata_bak_file->text();
    return user_savedata_bak_file_path;
}

void MainWindow::gui_set_user_savedata_bak_file_path_to_gui(QString user_savedata_bak_file_path)
{
     ui->lineEdit_user_savedata_bak_file->setText(user_savedata_bak_file_path);
}

QString MainWindow::gui_get_user_savedata_png_file_path_from_gui()
{
    QString user_savedata_png_file_path = ui->lineEdit_user_savedata_png_file->text();
    return user_savedata_png_file_path;
}

void MainWindow::gui_set_user_savedata_png_file_path_to_gui(QString user_savedata_png_file_path)
{
     ui->lineEdit_user_savedata_png_file->setText(user_savedata_png_file_path);
}

//system savedata 部分

QString MainWindow::gui_get_system_savedata_dat_file_path_from_gui()
{
    QString system_savedata_dat_file_path = ui->lineEdit_system_savedata_dat_file->text();
    return system_savedata_dat_file_path;
}

void MainWindow::gui_set_system_savedata_dat_file_path_to_gui(QString system_savedata_dat_file_path)
{
     ui->lineEdit_system_savedata_dat_file->setText(system_savedata_dat_file_path);
}

QString MainWindow::gui_get_system_savedata_bak_file_path_from_gui()
{
    QString system_savedata_bak_file_path = ui->lineEdit_system_savedata_bak_file->text();
    return system_savedata_bak_file_path;
}

void MainWindow::gui_set_system_savedata_bak_file_path_to_gui(QString system_savedata_bak_file_path)
{
     ui->lineEdit_system_savedata_bak_file->setText(system_savedata_bak_file_path);
}

//savedata dir 部分

QString MainWindow::gui_get_savedata_dir_path_from_gui()
{
    QString savedata_dir_path = ui->lineEdit_savedata_dir->text();
    return savedata_dir_path;
}

void MainWindow::gui_set_savedata_dir_path_to_gui(QString savedata_dir_path)
{
     ui->lineEdit_savedata_dir->setText(savedata_dir_path);
}

//制作备份
QString MainWindow::gui_savedata_make_backup(QString savedata_dat_file_path)
{
    QDateTime current_date_time;
    current_date_time = QDateTime::currentDateTime();

    QString savedata_bak_file;
    savedata_bak_file = savedata_dat_file_path;
    savedata_bak_file.append(current_date_time.toString("_yyyy-MM-dd_hh-mm-ss"));
    savedata_bak_file.append(".savedata_bak");

    QFile dat_file;
    dat_file.setFileName(savedata_dat_file_path);
    QFile bak_file;
    bak_file.setFileName(savedata_bak_file);
    bak_file.remove();
    bak_file.copy(savedata_dat_file_path,savedata_bak_file);

    return savedata_bak_file;
}

//设置存档图片
void MainWindow::gui_set_user_savedata_img_to_label(bool user_savedata_or_system_savedata)
{
    QPixmap savedata_img;
    if(user_savedata_or_system_savedata)
    {
        savedata_img.load(gui_get_user_savedata_png_file_path_from_gui());
    }
    else
    {
        savedata_img.load(":/img/img/savedata_default.png");
    }
    ui->label_savedata_img->setPixmap(savedata_img);
}

//设置队伍选单
void MainWindow::gui_setup_team_role_list()
{
    QStringList comboBox_team_role_list;
    comboBox_team_role_list << "罗伊德"
                            << "艾莉"
                            << "提欧"
                            << "兰迪"
                            << "瓦吉"
                            << "银/莉夏"
                            << "蔡特"
                            << "亚里欧斯"
                            << "诺埃尔"
                            << "达德利"
                            << "加尔西亚"
                            << "魔兽(跳跳猫)"
                            << "没有人"
                            << "未知";

    QComboBox *comboBox_team_rote_list[8] =
    {
        ui->comboBox_team_1,
        ui->comboBox_team_2,
        ui->comboBox_team_3,
        ui->comboBox_team_4,
        ui->comboBox_team_5,
        ui->comboBox_team_6,
        ui->comboBox_team_7,
        ui->comboBox_team_8
    };

    for(int i = 0;i < 8;i++)
    {
        comboBox_team_rote_list[i]->addItems(comboBox_team_role_list);
        comboBox_team_rote_list[i]->setMaxVisibleItems(14);
        comboBox_team_rote_list[i]->setCurrentIndex(13);
    }
}

//设置角色显示选单
void MainWindow::gui_setup_role_display_list()
{
    QStringList comboBox_team_role_list;
    comboBox_team_role_list
            << "罗伊德"
            << "艾莉"
            << "提欧"
            << "兰迪"
            << "瓦吉(初期)"
            << "瓦吉(后期)"
            << "银"
            << "莉夏"
            << "蔡特"
            << "亚里欧斯"
            << "诺埃尔"
            << "达德利"
            << "加尔西亚"
            << "魔兽(跳跳猫)"
            << "亚里欧斯(NPC)"
            << "罗伊德(NPC 1)"
            << "罗伊德(NPC 2)"
            << "雷蒙德搜查官"
            << "秦"
            << "谢莉"
            << "琪雅"
            << "未知"
               ;


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

    for(int i = 0;i < 12;i++)
    {
        comboBox_role_display_list[i]->addItems(comboBox_team_role_list);
        comboBox_role_display_list[i]->setMaxVisibleItems(comboBox_team_role_list.size());
        comboBox_role_display_list[i]->setCurrentIndex(comboBox_team_role_list.size()-1);
    }
}

//存档选单
QStringList savedata_dir_absolute_path_list;
QStringList savedata_dir_name_list;

void MainWindow::gui_make_savedata_dir_list()
{
    QDir savedata_dir_qdir;
    savedata_dir_qdir.setPath(gui_get_savedata_dir_path_from_gui());
    savedata_dir_qdir.setFilter(savedata_dir_qdir.Dirs|savedata_dir_qdir.NoDotAndDotDot);

    if(savedata_dir_qdir.exists() && !savedata_dir_qdir.path().isEmpty())
    {
        savedata_dir_absolute_path_list.clear();
        savedata_dir_name_list.clear();

        foreach(QFileInfo savedata_dir_info,savedata_dir_qdir.entryInfoList())
        {
            savedata_dir_absolute_path_list << savedata_dir_info.absoluteFilePath();
            savedata_dir_name_list << savedata_dir_info.fileName();
        }

        savedata_dir_absolute_path_list.removeAt(savedata_dir_name_list.indexOf("SAV1001_1ST"));
        savedata_dir_absolute_path_list.removeAt(savedata_dir_name_list.indexOf("SYSTEM"));
        savedata_dir_absolute_path_list.removeAt(savedata_dir_name_list.indexOf("SYSTEM_1ST"));

        savedata_dir_name_list.removeAt(savedata_dir_name_list.indexOf("SAV1001_1ST"));
        savedata_dir_name_list.removeAt(savedata_dir_name_list.indexOf("SYSTEM"));
        savedata_dir_name_list.removeAt(savedata_dir_name_list.indexOf("SYSTEM_1ST"));

        QStandardItemModel *standardItemModel = new QStandardItemModel(this);

        for(int i = 0; i < savedata_dir_name_list.size(); i++)
        {
            QString string = static_cast<QString>(savedata_dir_name_list.at(i));
            QStandardItem *item = new QStandardItem(string);

            standardItemModel->appendRow(item);
        }

        ui->listView_select_savedata->setModel(standardItemModel);
    }
}

void MainWindow::gui_listView_select_savedata(int index_row)
{
    ui->lineEdit_user_savedata_bak_file->clear();
    ui->lineEdit_user_savedata_png_file->clear();
    ui->lineEdit_user_savedata_dat_file->clear();

    //自动载入对应目录中的系统存档
    QString listview_current_dir;

    listview_current_dir = savedata_dir_absolute_path_list.at(index_row);
    listview_current_dir.replace(savedata_dir_name_list.at(index_row),QString(""));
    gui_load_savedata(listview_current_dir.append("/SYSTEM/savedata.dat"),false);

    listview_current_dir = savedata_dir_absolute_path_list.at(index_row);
    gui_load_savedata(listview_current_dir.append("/savedata.dat"),true);
}

//物品选单
void MainWindow::gui_setup_item_treewidget()
{
    QStringList tree_headers;
    tree_headers << "物品" << "描述" << "数量";
    ui->treeWidge_item->setColumnCount(3);
    ui->treeWidge_item->setHeaderLabels(tree_headers);
    ui->treeWidge_item->setColumnWidth(0,250);
    ui->treeWidge_item->setColumnWidth(1,740);
    ui->treeWidge_item->setColumnWidth(2,57);
    ui->treeWidge_item->header()->setSectionResizeMode(QHeaderView::Fixed);
    ui->treeWidge_item->setSelectionMode(QAbstractItemView::ExtendedSelection);

    setup_list_tree_items();
}

//战斗手册选单
void MainWindow::gui_setup_fight_manual_treewidget()
{
    QStringList tree_headers;
    tree_headers
            << "名称"
            << "HP"
            << "LV"
            << "EXP"
            << "描述"
            << "抗性"
            << "耀晶片"
            << "资料"
            << "道具"
            << "地"
            << "火"
            << "水"
            << "风"
            << "时"
            << "空"
            << "幻"
               ;
    ui->treeWidget_fight_manual->setColumnCount(tree_headers.count());
    ui->treeWidget_fight_manual->setHeaderLabels(tree_headers);
    ui->treeWidget_fight_manual->setColumnWidth(0,166);
    ui->treeWidget_fight_manual->setColumnWidth(1,32);
    ui->treeWidget_fight_manual->setColumnWidth(2,32);
    ui->treeWidget_fight_manual->setColumnWidth(3,32);
    ui->treeWidget_fight_manual->setColumnWidth(4,32);
    ui->treeWidget_fight_manual->setColumnWidth(5,32);
    ui->treeWidget_fight_manual->setColumnWidth(6,48);
    ui->treeWidget_fight_manual->setColumnWidth(7,32);
    ui->treeWidget_fight_manual->setColumnWidth(8,32);
    ui->treeWidget_fight_manual->setColumnWidth(9,32);
    ui->treeWidget_fight_manual->setColumnWidth(10,32);
    ui->treeWidget_fight_manual->setColumnWidth(11,32);
    ui->treeWidget_fight_manual->setColumnWidth(12,32);
    ui->treeWidget_fight_manual->setColumnWidth(13,32);
    ui->treeWidget_fight_manual->setColumnWidth(14,32);
    ui->treeWidget_fight_manual->setColumnWidth(15,32);
    ui->treeWidget_fight_manual->header()->setSectionResizeMode(QHeaderView::Fixed);
    ui->treeWidget_fight_manual->setSelectionMode(QAbstractItemView::ExtendedSelection);

    setup_list_tree_fight_manual_monster_illustration();
}

//存档载入
void MainWindow::gui_load_savedata(QString savedata_file, bool user_savedata_or_system_savedata)
{
    QFileInfo file_exists_test(savedata_file);
    if(file_exists_test.exists())
    {
        if(user_savedata_or_system_savedata)
        {
            gui_textbrowser_status_operate("校验文件大小和文件头...",false,false);
            if(savedata_file_head_size_verify(savedata_file,user_savedata_or_system_savedata))
            {
                gui_textbrowser_status_operate("成功",true,false);

                gui_set_user_savedata_dat_file_path_to_gui(savedata_file);

                QFileInfo savedata_dat_file_info(gui_get_user_savedata_dat_file_path_from_gui());
                gui_set_user_savedata_png_file_path_to_gui(savedata_dat_file_info.absoluteDir().path().append("/icon0.png"));

                gui_textbrowser_status_operate("用户存档文件为: ",false,false);
                gui_textbrowser_status_operate(gui_get_user_savedata_dat_file_path_from_gui(),true,false);

                gui_textbrowser_status_operate("对应截图为: ",false,false);
                gui_textbrowser_status_operate(savedata_dat_file_info.absoluteDir().path().append("/icon0.png"),true,false);

                if(ui->checkBox_config_make_backup_file->isChecked())
                {
                    QString savedata_bak_file_path = gui_savedata_make_backup(gui_get_user_savedata_dat_file_path_from_gui());
                    gui_set_user_savedata_bak_file_path_to_gui(savedata_bak_file_path);

                    gui_textbrowser_status_operate("备份文件为: ",false,false);
                    gui_textbrowser_status_operate(savedata_bak_file_path,true,false);
                }

                gui_set_user_savedata_img_to_label(true);

                //read all
                savedata_base_all_read(gui_get_user_savedata_dat_file_path_from_gui());
                savedata_items_read(gui_get_user_savedata_dat_file_path_from_gui());
                savedata_manual_all_read(gui_get_user_savedata_dat_file_path_from_gui());
                savedata_team_read(gui_get_user_savedata_dat_file_path_from_gui());
                savedata_role_display_read(gui_get_user_savedata_dat_file_path_from_gui());
                savedata_time_of_combat_skill_read(gui_get_user_savedata_dat_file_path_from_gui());
            }
            else
            {
                gui_textbrowser_status_operate("失败",true,false);
            }
        }
        else
        {
            gui_textbrowser_status_operate("校验文件大小和文件头...",false,false);
            if(savedata_file_head_size_verify(savedata_file,user_savedata_or_system_savedata))
            {
                gui_textbrowser_status_operate("成功",true,false);

                gui_set_system_savedata_dat_file_path_to_gui(savedata_file);

                gui_textbrowser_status_operate("系统存档文件为: ",false,false);
                gui_textbrowser_status_operate(gui_get_system_savedata_dat_file_path_from_gui(),true,false);

                if(ui->checkBox_config_make_backup_file->isChecked())
                {
                    QString savedata_bak_file_path = gui_savedata_make_backup(gui_get_system_savedata_dat_file_path_from_gui());
                    gui_set_system_savedata_bak_file_path_to_gui(savedata_bak_file_path);

                    gui_textbrowser_status_operate("备份文件为: ",false,false);
                    gui_textbrowser_status_operate(savedata_bak_file_path,true,false);
                }

                //若已经载入游戏存档则不覆盖预览图
                if(gui_get_user_savedata_png_file_path_from_gui().isEmpty())
                {
                    gui_set_user_savedata_img_to_label(false);
                }

                //read all
                savedata_achievement_read(gui_get_system_savedata_dat_file_path_from_gui());
            }
            else
            {
                gui_textbrowser_status_operate("失败",true,false);
            }
        }
    }
}

#endif // BZH_ANK_SE_GUI_H
