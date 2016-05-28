#-------------------------------------------------
#
# Project created by QtCreator 2013-04-28T02:23:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BZH_AO_NO_KISEKI_Savedata_Editor
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    bzh_ank_se_dialog_skill_select.cpp

HEADERS  += mainwindow.h \
    bzh_ank_se_define.h \
    bzh_ank_se_offset_define.h \
    bzh_ank_se_gui.h \
    bzh_ank_se_binary_rw.h \
    bzh_ank_se_code_define.h \
    bzh_ank_se_savedata_items.h \
    bzh_ank_se_savedata_manual.h \
    bzh_ank_se_savedata_other.h \
    bzh_ank_se_savedata_base.h \
    bzh_ank_se_savedata_checksum.h \
    bzh_ank_se_text_rw.h \
    bzh_ank_se_config.h \
    bzh_ank_se_savedata_skill.h \
    bzh_ank_se_text_define_skill.h \
    bzh_ank_se_text_define_manua.h \
    bzh_ank_se_text_define_item.h \
    bzh_ank_se_code_define_base.h \
    bzh_ank_se_code_define_item.h \
    bzh_ank_se_code_define_manual.h \
    bzh_ank_se_code_define_team_role_display.h \
    bzh_ank_se_text_define.h \
    bzh_ank_se_code_define_skill.h \
    bzh_ank_se_dialog_skill_select.h \
    bzn_ank_se_savedata_achievement_team_role_display_time_of_combat_skill.h

FORMS    += mainwindow.ui \
    bzh_ank_se_dialog_skill_select.ui

RESOURCES += bzh_ao_no_kiseki_se.qrc

RC_FILE += \
    icon.rc
