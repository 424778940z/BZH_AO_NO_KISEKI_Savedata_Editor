#include "bzh_ank_se_define.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::Dialog | Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint | Qt::MSWindowsFixedSizeDialogHint);

    //init
    setup_list_code();
    setup_list_text();
    setup_list_offset_all();

    gui_setup_team_role_list();
    gui_setup_role_display_list();
    gui_setup_item_treewidget();
    gui_setup_fight_manual_treewidget();

    config_load();

    ui->tab_crystalline_hole->setEnabled(false);
    //ui->tab_skill->setEnabled(false);
}

MainWindow::~MainWindow()
{
    config_save();
    delete ui;
}

/*****************************************************************************************************/

//user file

void MainWindow::on_pushButton_select_user_savedata_file_clicked()
{

    if(ui->checkBox_config_warning_for_not_saved->isChecked())
    {
        if(change_not_save)
        {
            QMessageBox msgbox_warning_for_not_saved;
            msgbox_warning_for_not_saved.setParent(NULL);
            msgbox_warning_for_not_saved.setIcon(msgbox_warning_for_not_saved.Question);
            msgbox_warning_for_not_saved.setWindowTitle("提示");
            msgbox_warning_for_not_saved.setText("修改内容还未保存 [Save]保存并继续 [Discard]不保存并继续 [Cancel]取消操作");
            msgbox_warning_for_not_saved.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

            switch(msgbox_warning_for_not_saved.exec())
            {
            case QMessageBox::Save:
                gui_save_user_savedata_file();
                gui_select_user_savedata_file();
                break;
            case QMessageBox::Discard:
                gui_select_user_savedata_file();
                change_not_save = false;
                break;
            case QMessageBox::Cancel:
                break;
            }
        }
        else
        {
            gui_select_user_savedata_file();
        }
    }
    else
    {
        gui_select_user_savedata_file();
    }
}

void MainWindow::on_pushButton_save_user_savedata_file_clicked()
{
    gui_save_user_savedata_file();
    change_not_save = false;
}

//system file

void MainWindow::on_pushButton_select_system_savedata_file_clicked()
{
    if(ui->checkBox_config_warning_for_not_saved->isChecked())
    {
        if(change_not_save)
        {
            QMessageBox msgbox_warning_for_not_saved;
            msgbox_warning_for_not_saved.setParent(NULL);
            msgbox_warning_for_not_saved.setIcon(msgbox_warning_for_not_saved.Question);
            msgbox_warning_for_not_saved.setWindowTitle("提示");
            msgbox_warning_for_not_saved.setText("修改内容还未保存 [Save]保存并继续 [Discard]不保存并继续 [Cancel]取消操作");
            msgbox_warning_for_not_saved.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

            switch(msgbox_warning_for_not_saved.exec())
            {
            case QMessageBox::Save:
                gui_save_system_savedata_file();
                gui_select_system_savedata_file();
                break;
            case QMessageBox::Discard:
                gui_select_system_savedata_file();
                change_not_save = false;
                break;
            case QMessageBox::Cancel:
                break;
            }
        }
        else
        {
            gui_select_system_savedata_file();
        }
    }
    else
    {
        gui_select_system_savedata_file();
    }
}

void MainWindow::on_pushButton_save_system_savedata_file_clicked()
{
    gui_save_system_savedata_file();
    change_not_save = false;
}

//savedata dir

void MainWindow::on_pushButton_select_savedata_dir_clicked()
{
    if(ui->checkBox_config_warning_for_not_saved->isChecked())
    {
        if(change_not_save)
        {
            QMessageBox msgbox_warning_for_not_saved;
            msgbox_warning_for_not_saved.setParent(NULL);
            msgbox_warning_for_not_saved.setIcon(msgbox_warning_for_not_saved.Question);
            msgbox_warning_for_not_saved.setWindowTitle("提示");
            msgbox_warning_for_not_saved.setText("修改内容还未保存 [Save]保存并继续 [Discard]不保存并继续 [Cancel]取消操作");
            msgbox_warning_for_not_saved.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

            switch(msgbox_warning_for_not_saved.exec())
            {
            case QMessageBox::Save:
                gui_save_user_savedata_file();
                gui_save_system_savedata_file();
                gui_select_savedata_dir();
                break;
            case QMessageBox::Discard:
                gui_select_savedata_dir();
                change_not_save = false;
                break;
            case QMessageBox::Cancel:
                break;
            }
        }
        else
        {
            gui_select_savedata_dir();
        }
    }
    else
    {
        gui_select_savedata_dir();
    }
}

void MainWindow::on_listView_select_savedata_clicked(const QModelIndex &index)
{
    int listView_index_row = index.row();
    if(ui->checkBox_config_warning_for_not_saved->isChecked())
    {
        if(change_not_save)
        {
            QMessageBox msgbox_warning_for_not_saved;
            msgbox_warning_for_not_saved.setParent(NULL);
            msgbox_warning_for_not_saved.setIcon(msgbox_warning_for_not_saved.Question);
            msgbox_warning_for_not_saved.setWindowTitle("提示");
            msgbox_warning_for_not_saved.setText("修改内容还未保存 [Save]保存并继续 [Discard]不保存并继续 [Cancel]取消操作");
            msgbox_warning_for_not_saved.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);

            switch(msgbox_warning_for_not_saved.exec())
            {
            case QMessageBox::Save:
                gui_save_user_savedata_file();
                gui_save_system_savedata_file();
                gui_listView_select_savedata(listView_index_row);
                break;
            case QMessageBox::Discard:
                gui_listView_select_savedata(listView_index_row);
                change_not_save = false;
                break;
            case QMessageBox::Cancel:
                break;
            }
        }
        else
        {
            gui_listView_select_savedata(listView_index_row);
        }
    }
    else
    {
        gui_listView_select_savedata(listView_index_row);
    }
}


void MainWindow::on_textBrowser_status_textChanged()
{
    ui->textBrowser_status->moveCursor(QTextCursor::End);
}

void MainWindow::on_pushButton_achievement_get_all_clicked()
{
    ui->checkBox_ainigema2yonghu->setChecked(true);
    ui->checkBox_tianyandezhizhe->setChecked(true);
    ui->checkBox_shiminyingxiong->setChecked(true);
    ui->checkBox_xiaoshuoaihaozhe->setChecked(true);
    ui->checkBox_baoxianglieren->setChecked(true);
    ui->checkBox_huilushoucangjia->setChecked(true);
    ui->checkBox_jiajushoucangjia->setChecked(true);
    ui->checkBox_daolichefashaoyou->setChecked(true);
    ui->checkBox_baodiaowang->setChecked(true);
    ui->checkBox_yanzhiliaoliren->setChecked(true);
    ui->checkBox_sanxingchushi->setChecked(true);
    ui->checkBox_bujuyigedechushi->setChecked(true);
    ui->checkBox_baiwanfuweng->setChecked(true);
    ui->checkBox_chixudeyashi->setChecked(true);
    ui->checkBox_guiwushejidashi->setChecked(true);
    ui->checkBox_bobopengdashi->setChecked(true);
    ui->checkBox_lizhandeyongshi->setChecked(true);
    ui->checkBox_fenzhandemengshi->setChecked(true);
    ui->checkBox_lizhandeshengzhe->setChecked(true);
    ui->checkBox_qianzhandezhishi->setChecked(true);
    ui->checkBox_leiguangyishan->setChecked(true);
    ui->checkBox_chaojuemiji->setChecked(true);
    ui->checkBox_baihuayingji->setChecked(true);
    ui->checkBox_xuanlangongji->setChecked(true);
    ui->checkBox_lianzhanliansheng->setChecked(true);
    ui->checkBox_batouqimie->setChecked(true);
    ui->checkBox_ganjinshajue->setChecked(true);
    ui->checkBox_baolieguogan->setChecked(true);
    ui->checkBox_zuiqiangzhijian->setChecked(true);
    ui->checkBox_zhijingzhizhu->setChecked(true);
    ui->checkBox_qiyaozhixianshi->setChecked(true);
    ui->checkBox_wushuangzhilieshi->setChecked(true);
    ui->checkBox_zuhejidashi->setChecked(true);
    ui->checkBox_chaoyiliusouchaguan->setChecked(true);
    ui->checkBox_ganliandesouchaguan->setChecked(true);
    ui->checkBox_chuanshuodesouchaguan->setChecked(true);
    ui->checkBox_dzhizhuisuizhe->setChecked(true);
    ui->checkBox_jiemingzhenxiangzhe->setChecked(true);
    ui->checkBox_hongzhitaofazhe->setChecked(true);
    ui->checkBox_gangzhizhuisuizhe->setChecked(true);
    ui->checkBox_dzhicanying->setChecked(true);
    ui->checkBox_yuzhao_xindeshenghuo->setChecked(true);
    ui->checkBox_xisaimuliyatongshanghuiyi->setChecked(true);
    ui->checkBox_duanzandexiuxi->setChecked(true);
    ui->checkBox_taidong_zhongshoudekuanghuanjie->setChecked(true);
    ui->checkBox_mingyunweibudekeluosibeier->setChecked(true);
    ui->checkBox_kuayuexuhuandeletu->setChecked(true);
    ui->checkBox_jibianruci_womenye->setChecked(true);
    ui->checkBox_yuailidejiban->setChecked(true);
    ui->checkBox_yutioudejiban->setChecked(true);
    ui->checkBox_yulandidejiban->setChecked(true);
    ui->checkBox_yunuoaierdejiban->setChecked(true);
    ui->checkBox_yuwajidejiban->setChecked(true);
    ui->checkBox_yulixiadejiban->setChecked(true);
    ui->checkBox_yudadelidejiban->setChecked(true);
    ui->checkBox_chuanzhidesinian_buduandejiban->setChecked(true);
}

void MainWindow::on_pushButton_achievement_clear_all_clicked()
{
    ui->checkBox_ainigema2yonghu->setChecked(false);
    ui->checkBox_tianyandezhizhe->setChecked(false);
    ui->checkBox_shiminyingxiong->setChecked(false);
    ui->checkBox_xiaoshuoaihaozhe->setChecked(false);
    ui->checkBox_baoxianglieren->setChecked(false);
    ui->checkBox_huilushoucangjia->setChecked(false);
    ui->checkBox_jiajushoucangjia->setChecked(false);
    ui->checkBox_daolichefashaoyou->setChecked(false);
    ui->checkBox_baodiaowang->setChecked(false);
    ui->checkBox_yanzhiliaoliren->setChecked(false);
    ui->checkBox_sanxingchushi->setChecked(false);
    ui->checkBox_bujuyigedechushi->setChecked(false);
    ui->checkBox_baiwanfuweng->setChecked(false);
    ui->checkBox_chixudeyashi->setChecked(false);
    ui->checkBox_guiwushejidashi->setChecked(false);
    ui->checkBox_bobopengdashi->setChecked(false);
    ui->checkBox_lizhandeyongshi->setChecked(false);
    ui->checkBox_fenzhandemengshi->setChecked(false);
    ui->checkBox_lizhandeshengzhe->setChecked(false);
    ui->checkBox_qianzhandezhishi->setChecked(false);
    ui->checkBox_leiguangyishan->setChecked(false);
    ui->checkBox_chaojuemiji->setChecked(false);
    ui->checkBox_baihuayingji->setChecked(false);
    ui->checkBox_xuanlangongji->setChecked(false);
    ui->checkBox_lianzhanliansheng->setChecked(false);
    ui->checkBox_batouqimie->setChecked(false);
    ui->checkBox_ganjinshajue->setChecked(false);
    ui->checkBox_baolieguogan->setChecked(false);
    ui->checkBox_zuiqiangzhijian->setChecked(false);
    ui->checkBox_zhijingzhizhu->setChecked(false);
    ui->checkBox_qiyaozhixianshi->setChecked(false);
    ui->checkBox_wushuangzhilieshi->setChecked(false);
    ui->checkBox_zuhejidashi->setChecked(false);
    ui->checkBox_chaoyiliusouchaguan->setChecked(false);
    ui->checkBox_ganliandesouchaguan->setChecked(false);
    ui->checkBox_chuanshuodesouchaguan->setChecked(false);
    ui->checkBox_dzhizhuisuizhe->setChecked(false);
    ui->checkBox_jiemingzhenxiangzhe->setChecked(false);
    ui->checkBox_hongzhitaofazhe->setChecked(false);
    ui->checkBox_gangzhizhuisuizhe->setChecked(false);
    ui->checkBox_dzhicanying->setChecked(false);
    ui->checkBox_yuzhao_xindeshenghuo->setChecked(false);
    ui->checkBox_xisaimuliyatongshanghuiyi->setChecked(false);
    ui->checkBox_duanzandexiuxi->setChecked(false);
    ui->checkBox_taidong_zhongshoudekuanghuanjie->setChecked(false);
    ui->checkBox_mingyunweibudekeluosibeier->setChecked(false);
    ui->checkBox_kuayuexuhuandeletu->setChecked(false);
    ui->checkBox_jibianruci_womenye->setChecked(false);
    ui->checkBox_yuailidejiban->setChecked(false);
    ui->checkBox_yutioudejiban->setChecked(false);
    ui->checkBox_yulandidejiban->setChecked(false);
    ui->checkBox_yunuoaierdejiban->setChecked(false);
    ui->checkBox_yuwajidejiban->setChecked(false);
    ui->checkBox_yulixiadejiban->setChecked(false);
    ui->checkBox_yudadelidejiban->setChecked(false);
    ui->checkBox_chuanzhidesinian_buduandejiban->setChecked(false);
}

void MainWindow::on_pushButton_item_tree_expand_all_clicked()
{
    ui->treeWidge_item->expandAll();
}

void MainWindow::on_pushButton_item_tree_collapse_all_clicked()
{
    ui->treeWidge_item->collapseAll();
}

void MainWindow::on_pushButton_set_selected_items_amount_clicked()
{
    gui_set_item_treewidger_number_of_item();
}

void MainWindow::on_pushButton_fight_manual_tree_expand_all_clicked()
{
    ui->treeWidget_fight_manual->expandAll();
}

void MainWindow::on_pushButton_fight_manual_tree_collapse_all_clicked()
{
    ui->treeWidget_fight_manual->collapseAll();
}

void MainWindow::on_pushButton_fight_manual_selected_open_all_clicked()
{
    bool check_status = true;
    ui->checkBox_fight_manual_selected_hp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_lv->setChecked(check_status);
    ui->checkBox_fight_manual_selected_exp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_describe->setChecked(check_status);
    ui->checkBox_fight_manual_selected_resistant->setChecked(check_status);
    ui->checkBox_fight_manual_selected_yjp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_data->setChecked(check_status);
    ui->checkBox_fight_manual_selected_items->setChecked(check_status);
    ui->checkBox_fight_manual_selected_di->setChecked(check_status);
    ui->checkBox_fight_manual_selected_shui->setChecked(check_status);
    ui->checkBox_fight_manual_selected_huo->setChecked(check_status);
    ui->checkBox_fight_manual_selected_feng->setChecked(check_status);
    ui->checkBox_fight_manual_selected_shi->setChecked(check_status);
    ui->checkBox_fight_manual_selected_kong->setChecked(check_status);
    ui->checkBox_fight_manual_selected_huan->setChecked(check_status);
}

void MainWindow::on_pushButton_fight_manual_selected_close_all_clicked()
{
    bool check_status = false;
    ui->checkBox_fight_manual_selected_hp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_lv->setChecked(check_status);
    ui->checkBox_fight_manual_selected_exp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_describe->setChecked(check_status);
    ui->checkBox_fight_manual_selected_resistant->setChecked(check_status);
    ui->checkBox_fight_manual_selected_yjp->setChecked(check_status);
    ui->checkBox_fight_manual_selected_data->setChecked(check_status);
    ui->checkBox_fight_manual_selected_items->setChecked(check_status);
    ui->checkBox_fight_manual_selected_di->setChecked(check_status);
    ui->checkBox_fight_manual_selected_shui->setChecked(check_status);
    ui->checkBox_fight_manual_selected_huo->setChecked(check_status);
    ui->checkBox_fight_manual_selected_feng->setChecked(check_status);
    ui->checkBox_fight_manual_selected_shi->setChecked(check_status);
    ui->checkBox_fight_manual_selected_kong->setChecked(check_status);
    ui->checkBox_fight_manual_selected_huan->setChecked(check_status);
}

void MainWindow::on_pushButton_fight_manual_apply_to_selected_clicked()
{
    gui_set_fight_manual_treewigdet_selected();
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    change_not_save = true;
    tabWidget_current_page = index;
}

void MainWindow::on_spinBox_time_h_editingFinished()
{
    quint32 time_h = 0,time_m = 0,time_s = 0;

    time_h = ui->spinBox_time_h->value();
    time_m = ui->spinBox_time_m->value();
    time_s = ui->spinBox_time_s->value();

    quint32 savedata_time_s = (time_h * 3600) + (time_m * 60) +time_s;
    ui->spinBox_all_time_s->setValue(savedata_time_s);
}

void MainWindow::on_spinBox_time_m_editingFinished()
{
    quint32 time_h = 0,time_m = 0,time_s = 0;

    time_h = ui->spinBox_time_h->value();
    time_m = ui->spinBox_time_m->value();
    time_s = ui->spinBox_time_s->value();

    quint32 savedata_time_s = (time_h * 3600) + (time_m * 60) +time_s;
    ui->spinBox_all_time_s->setValue(savedata_time_s);
}

void MainWindow::on_spinBox_time_s_editingFinished()
{
    quint32 time_h = 0,time_m = 0,time_s = 0;

    time_h = ui->spinBox_time_h->value();
    time_m = ui->spinBox_time_m->value();
    time_s = ui->spinBox_time_s->value();

    quint32 savedata_time_s = (time_h * 3600) + (time_m * 60) +time_s;
    ui->spinBox_all_time_s->setValue(savedata_time_s);
}

void MainWindow::on_spinBox_all_time_s_valueChanged(int arg1)
{
    quint32 savedata_time_s = arg1;
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
}


void MainWindow::on_pushButton_test_clicked()
{
    QStringList crystalline_hole_core;
    crystalline_hole_core
            << "力量"
            << "盾牌"
            << "妖精"
            << "利爪"
            << "白金"
            << "幻象"
            << "战斧"
            << "法则"
            << "羽翼"
            << "神佑"
            << "王权"
            << "魅影"
            << "守护"
            << "无限"
            << "小丑"
            << "罪恶"
            << "草薤"
            << "纹章"
            << "灵猫"
            << "骑士"
            << "贤者"
            << "草薤"
               ;

    QStringList crystalline_hole_lv;
    crystalline_hole_lv
            << "未开孔"
            << "等级1"
            << "等级2"
            << "未知"
               ;
    ui->comboBox_crystalline_hole_Lloyd_1_lv->addItems(crystalline_hole_lv);
    ui->comboBox_crystalline_hole_Lloyd_1_lv->setMaxVisibleItems(crystalline_hole_lv.size());
    ui->comboBox_crystalline_hole_Lloyd_1_lv->setCurrentIndex(crystalline_hole_lv.size()-1);
}

void MainWindow::on_pushButton_test_fuck_clicked()
{
    //savedata_skill_setup();
    //savedata_skill_fight_read(gui_get_user_savedata_dat_file_path_from_gui());
    //bzh_ank_se_dialog_skill_select(this).exec();
    //ui->treeWidge_item->
}

