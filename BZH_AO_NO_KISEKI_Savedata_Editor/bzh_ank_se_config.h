#ifndef BZH_ANK_SE_CONFIG_H
#define BZH_ANK_SE_CONFIG_H

#include "bzh_ank_se_text_rw.h"
#include <QFileInfo>

QString config_file_path = "bzh_ank_se_config.ini";
QString config_file_head = "#改之轨迹配置文件 [请不要修改文件内容,若本文件内容错误导致程序无法启动,直接删除本文件即可]";

void MainWindow::config_load()
{
    QFileInfo file_exists_test(config_file_path);
    if(file_exists_test.exists())
    {
        gui_textbrowser_status_operate("载入配置文件...",false,false);

        QList<QString> config_file_data = savedata_text_read(config_file_path);
        bool buffer;
        int checksum_temp = 0;
        int checksum = config_file_data.at(config_file_data.size()-1).toInt(&buffer,10);
        config_file_data.removeAt(config_file_data.size()-1);

        for(int i = 0;i < config_file_data.size();i++)
            checksum_temp += config_file_data.at(i).size();

        if(checksum == checksum_temp && config_file_data.at(0) == config_file_head)
        {
            int index = 1,temp_index = 0;
            while(1)
            {
                if(index >= config_file_data.size())
                {
                    break;
                }

                if(config_file_data.at(index) == "CREATE_BACKUP_FILE")
                {
                    temp_index = index + 1;
                    if(config_file_data.at(temp_index) == "TRUE")
                    {
                        ui->checkBox_config_make_backup_file->setChecked(true);
                    }
                    if(config_file_data.at(temp_index) == "FALSE")
                    {
                        ui->checkBox_config_make_backup_file->setChecked(false);
                    }
                }

                if(config_file_data.at(index) == "WARNING_FOR_CHANGE_NOT_SAVE")
                {
                    temp_index = index + 1;
                    if(config_file_data.at(temp_index) == "TRUE")
                    {
                        ui->checkBox_config_warning_for_not_saved->setChecked(true);
                    }
                    if(config_file_data.at(temp_index) == "FALSE")
                    {
                        ui->checkBox_config_warning_for_not_saved->setChecked(false);
                    }
                }

                if(config_file_data.at(index) == "AUTO_LOAD_LAST_SAVEDATA")
                {
                    temp_index = index + 1;
                    if(config_file_data.at(temp_index) == "TRUE")
                    {
                        ui->checkBox_config_auto_load_last_savedata->setChecked(true);
                    }
                    if(config_file_data.at(temp_index) == "FALSE")
                    {
                        ui->checkBox_config_auto_load_last_savedata->setChecked(false);
                    }
                }

                if(config_file_data.at(index) == "SAVEDATA_DIR")
                {
                    temp_index = index + 1;
                    gui_set_savedata_dir_path_to_gui(config_file_data.at(temp_index));
                    gui_make_savedata_dir_list();
                }

                if(config_file_data.at(index) == "LAST_USER_SAVEDATA")
                {
                    temp_index = index + 1;
                    gui_set_user_savedata_dat_file_path_to_gui(config_file_data.at(temp_index));
                }

                if(config_file_data.at(index) == "LAST_SYSTEM_SAVEDATA")
                {
                    temp_index = index + 1;
                    gui_set_system_savedata_dat_file_path_to_gui(config_file_data.at(temp_index));
                }

                index++;
            }

            gui_textbrowser_status_operate("完成",true,false);

            if(ui->checkBox_config_auto_load_last_savedata->isChecked())
            {
                gui_load_savedata(gui_get_system_savedata_dat_file_path_from_gui(),false);
                gui_load_savedata(gui_get_user_savedata_dat_file_path_from_gui(),true);
            }
        }
        else
        {
            gui_textbrowser_status_operate("失败",true,false);
        }
    }
}

void MainWindow::config_save()
{
    gui_textbrowser_status_operate("保存配置文件...",false,false);

    QList<QString> config_file_data;
    int checksum_temp = 0;

    config_file_data.append(config_file_head);

    //创建备份文件
    config_file_data.append("CREATE_BACKUP_FILE");
    if(ui->checkBox_config_make_backup_file->isChecked())
    {
        config_file_data.append("TRUE");
    }
    else
    {
        config_file_data.append("FALSE");
    }

    //若未保存则变更目标时提示
    config_file_data.append("WARNING_FOR_CHANGE_NOT_SAVE");
    if(ui->checkBox_config_warning_for_not_saved->isChecked())
    {
        config_file_data.append("TRUE");
    }
    else
    {
        config_file_data.append("FALSE");
    }

    //自动载入上次关闭时的存档
    config_file_data.append("AUTO_LOAD_LAST_SAVEDATA");
    if(ui->checkBox_config_auto_load_last_savedata->isChecked())
    {
        config_file_data.append("TRUE");
    }
    else
    {
        config_file_data.append("FALSE");
    }

    //存档文件夹
    config_file_data.append("SAVEDATA_DIR");
    config_file_data.append(gui_get_savedata_dir_path_from_gui());

    //上次关闭时的存档
    config_file_data.append("LAST_USER_SAVEDATA");
    config_file_data.append(gui_get_user_savedata_dat_file_path_from_gui());

    config_file_data.append("LAST_SYSTEM_SAVEDATA");
    config_file_data.append(gui_get_system_savedata_dat_file_path_from_gui());

    //校验
    config_file_data.append("#校验-------");

    for(int i = 0;i < config_file_data.size();i++)
        checksum_temp += config_file_data.at(i).size();

    config_file_data.append(QString::number(checksum_temp,10));

    savedata_text_write(config_file_path,config_file_data);

    gui_textbrowser_status_operate("完成",true,false);
}

#endif // BZH_ANK_SE_CONFIG_H
