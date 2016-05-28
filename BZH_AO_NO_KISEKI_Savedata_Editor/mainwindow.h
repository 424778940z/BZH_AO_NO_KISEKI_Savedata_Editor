#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_select_user_savedata_file_clicked();

    void on_pushButton_select_system_savedata_file_clicked();

    void on_pushButton_save_user_savedata_file_clicked();

    void on_pushButton_save_system_savedata_file_clicked();

    void on_pushButton_select_savedata_dir_clicked();

    void on_listView_select_savedata_clicked(const QModelIndex &index);

    void on_textBrowser_status_textChanged();

    void on_pushButton_achievement_get_all_clicked();

    void on_pushButton_achievement_clear_all_clicked();

    void on_pushButton_item_tree_expand_all_clicked();

    void on_pushButton_item_tree_collapse_all_clicked();

    void on_pushButton_set_selected_items_amount_clicked();

    void on_pushButton_fight_manual_tree_expand_all_clicked();

    void on_pushButton_fight_manual_tree_collapse_all_clicked();

    void on_pushButton_fight_manual_selected_open_all_clicked();

    void on_pushButton_fight_manual_selected_close_all_clicked();

    void on_pushButton_fight_manual_apply_to_selected_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_spinBox_time_h_editingFinished();

    void on_spinBox_time_m_editingFinished();

    void on_spinBox_time_s_editingFinished();

    void on_spinBox_all_time_s_valueChanged(int arg1);

    void on_pushButton_test_clicked();

    void on_pushButton_test_fuck_clicked();

private:
    Ui::MainWindow *ui;

    //gui************************************************************************

    //user dat
    QString gui_get_user_savedata_dat_file_path_from_gui();
    void gui_set_user_savedata_dat_file_path_to_gui(QString user_savedata_dat_file_path);
    //user bak
    QString gui_get_user_savedata_bak_file_path_from_gui();
    void gui_set_user_savedata_bak_file_path_to_gui(QString user_savedata_bak_file_path);
    //user png
    QString gui_get_user_savedata_png_file_path_from_gui();
    void gui_set_user_savedata_png_file_path_to_gui(QString user_savedata_png_file_path);

    //system dat
    QString gui_get_system_savedata_dat_file_path_from_gui();
    void gui_set_system_savedata_dat_file_path_to_gui(QString system_savedata_dat_file_path);
    //system bak
    QString gui_get_system_savedata_bak_file_path_from_gui();
    void gui_set_system_savedata_bak_file_path_to_gui(QString system_savedata_bak_file_path);

    //savedata dir
    QString gui_get_savedata_dir_path_from_gui();
    void gui_set_savedata_dir_path_to_gui(QString savedata_dir_path);

    void gui_select_savedata_dir();
    void gui_make_savedata_dir_list();
    void gui_listView_select_savedata(int index_row);
    QString gui_savedata_make_backup(QString savedata_dat_file_path);
    void gui_setup_team_role_list();
    void gui_setup_role_display_list();
    void gui_set_user_savedata_img_to_label(bool user_savedata_or_system_savedata);

    //select and save user file
    void gui_select_user_savedata_file();
    void gui_save_user_savedata_file();

    //select and save system file
    void gui_select_system_savedata_file();
    void gui_save_system_savedata_file();

    void gui_textbrowser_status_operate(QString string_status, bool insert, bool newline);

    //items
    void gui_setup_item_treewidget();
    void gui_set_item_treewidger_number_of_item();

    //manual
    void gui_setup_fight_manual_treewidget();
    void gui_set_fight_manual_treewigdet_selected();

    void gui_load_savedata(QString savedata_file, bool user_savedata_or_system_savedata);

    //savedata************************************************************************

    //base raid
    void savedata_base_Arios_read(QString savedata_file_path);
    void savedata_base_Dudley_read(QString savedata_file_path);
    void savedata_base_Elie_read(QString savedata_file_path);
    void savedata_base_Garcia_read(QString savedata_file_path);
    void savedata_base_Lazy_read(QString savedata_file_path);
    void savedata_base_Lloyd_read(QString savedata_file_path);
    void savedata_base_Noel_read(QString savedata_file_path);
    void savedata_base_Randy_read(QString savedata_file_path);
    void savedata_base_Rixia_read(QString savedata_file_path);
    void savedata_base_Tio_read(QString savedata_file_path);
    void savedata_base_Zeit_read(QString savedata_file_path);

    void savedata_mira_medal_yjp_read(QString savedata_file_path);
    void savedata_likeability_read(QString savedata_file_path);
    void savedata_time_read(QString savedata_file_path);
    void savedata_difficulty_read(QString savedata_file_path);

    void savedata_base_all_read(QString savedata_file_path);

    //base write
    void savedata_base_Arios_write(QString savedata_file_path);
    void savedata_base_Dudley_write(QString savedata_file_path);
    void savedata_base_Elie_write(QString savedata_file_path);
    void savedata_base_Garcia_write(QString savedata_file_path);
    void savedata_base_Lazy_write(QString savedata_file_path);
    void savedata_base_Lloyd_write(QString savedata_file_path);
    void savedata_base_Noel_write(QString savedata_file_path);
    void savedata_base_Randy_write(QString savedata_file_path);
    void savedata_base_Rixia_write(QString savedata_file_path);
    void savedata_base_Tio_write(QString savedata_file_path);
    void savedata_base_Zeit_write(QString savedata_file_path);

    void savedata_mira_medal_yjp_write(QString savedata_file_path);
    void savedata_likeability_write(QString savedata_file_path);
    void savedata_time_write(QString savedata_file_path);
    void savedata_difficulty_write(QString savedata_file_path);

    void savedata_base_all_write(QString savedata_file_path);

    //achievement team role_display time_of_combat_skill read

    void savedata_achievement_read(QString savedata_file_path);
    void savedata_team_read(QString savedata_file_path);
    void savedata_role_display_read(QString savedata_file_path);
    void savedata_time_of_combat_skill_read(QString savedata_file_path);

    //achievement team role_display time_of_combat_skill write

    void savedata_achievement_write(QString savedata_file_path);
    void savedata_team_write(QString savedata_file_path);
    void savedata_role_display_write(QString savedata_file_path);
    void savedata_time_of_combat_skill_write(QString savedata_file_path);

    //item
    void setup_list_tree_items();
    void savedata_items_read(QString savedata_file_path);
    void savedata_items_write(QString savedata_file_path);


    //manual other
    void setup_list_tree_fight_manual_monster_illustration();

    //manual read
    void savedata_fight_manual_read(QString savedata_file_path);
    void savedata_fight_manual_monster_illustrations_read(QString savedata_file_path);
    void savedata_investigate_manual_read(QString savedata_file_path);
    void savedata_manual_all_read(QString savedata_file_path);

    //manual write
    void savedata_fight_manual_write(QString savedata_file_path);
    void savedata_fight_manual_monster_illustrations_write(QString savedata_file_path);
    void savedata_investigate_manual_write(QString savedata_file_path);
    void savedata_manual_all_write(QString savedata_file_path);

    //other read

    //other write

    //skill
    void savedata_skill_setup();
    void savedata_skill_fight_read(QString savedata_file_path);

    //config
    void config_load();
    void config_save();
};

#endif // MAINWINDOW_H
