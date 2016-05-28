#ifndef BZH_ANK_SE_CODE_DEFINE_TEAM_ROLE_DISPLAY_H
#define BZH_ANK_SE_CODE_DEFINE_TEAM_ROLE_DISPLAY_H

#include "mainwindow.h"

quint16 code_team_role_Lloyd = 0x0000;
quint16 code_team_role_Elie = 0x0001;
quint16 code_team_role_Tio = 0x0002;
quint16 code_team_role_Randy = 0x0003;
quint16 code_team_role_Lazy = 0x0004;
quint16 code_team_role_Rixia = 0x0005;
quint16 code_team_role_Zeit = 0x0006;
quint16 code_team_role_Arios = 0x0007;
quint16 code_team_role_Noel = 0x0008;
quint16 code_team_role_Dudley = 0x0009;
quint16 code_team_role_Garcia = 0x000a;
quint16 code_team_role_monster = 0x000f;
quint16 code_team_role_nobody = 0x00ff;

QList<quint16> list_code_team_rote;

void setup_list_code_team_rote()
{
    list_code_team_rote.append(code_team_role_Lloyd);
    list_code_team_rote.append(code_team_role_Elie);
    list_code_team_rote.append(code_team_role_Tio);
    list_code_team_rote.append(code_team_role_Randy);
    list_code_team_rote.append(code_team_role_Lazy);
    list_code_team_rote.append(code_team_role_Rixia);
    list_code_team_rote.append(code_team_role_Zeit);
    list_code_team_rote.append(code_team_role_Arios);
    list_code_team_rote.append(code_team_role_Noel);
    list_code_team_rote.append(code_team_role_Dudley);
    list_code_team_rote.append(code_team_role_Garcia);
    list_code_team_rote.append(code_team_role_monster);
    list_code_team_rote.append(code_team_role_nobody);
    list_code_team_rote.append(0xffff);
}

quint16 code_role_display_Lloyd = 0x0000;
quint16 code_role_display_Elie = 0x0001;
quint16 code_role_display_Tio = 0x0002;
quint16 code_role_display_Randy = 0x0003;
quint16 code_role_display_Lazy_initial_stage = 0x0004;
quint16 code_role_display_Lazy_late_stage = 0x001f;
quint16 code_role_display_Yin = 0x0005;
quint16 code_role_display_Rixia = 0x0020;
quint16 code_role_display_Zeit = 0x0006;
quint16 code_role_display_Arios = 0x0007;
quint16 code_role_display_Noel = 0x0008;
quint16 code_role_display_Dudley = 0x0009;
quint16 code_role_display_Garcia = 0x000a;

quint16 code_role_display_monster = 0x000f;

quint16 code_role_display_Arios_npc = 0x000b;
quint16 code_role_display_Lloyd_npc1 = 0x000c;
quint16 code_role_display_Lloyd_npc2 = 0x000e;

quint16 code_role_display_Raymond = 0x00a0;
quint16 code_role_display_Qin = 0x00a1;
quint16 code_role_display_Shirley = 0x00a2;
quint16 code_role_display_KeA = 0x00a4;

QList<quint16> list_code_rote_display;

void setup_list_code_rote_display()
{
    list_code_rote_display.append(code_role_display_Lloyd);
    list_code_rote_display.append(code_role_display_Elie);
    list_code_rote_display.append(code_role_display_Tio);
    list_code_rote_display.append(code_role_display_Randy);
    list_code_rote_display.append(code_role_display_Lazy_initial_stage);
    list_code_rote_display.append(code_role_display_Lazy_late_stage);
    list_code_rote_display.append(code_role_display_Yin);
    list_code_rote_display.append(code_role_display_Rixia);
    list_code_rote_display.append(code_role_display_Zeit);
    list_code_rote_display.append(code_role_display_Arios);
    list_code_rote_display.append(code_role_display_Noel);
    list_code_rote_display.append(code_role_display_Dudley);
    list_code_rote_display.append(code_role_display_Garcia);
    list_code_rote_display.append(code_role_display_monster);
    list_code_rote_display.append(code_role_display_Arios_npc);
    list_code_rote_display.append(code_role_display_Lloyd_npc1);
    list_code_rote_display.append(code_role_display_Lloyd_npc2);
    list_code_rote_display.append(code_role_display_Raymond);
    list_code_rote_display.append(code_role_display_Qin);
    list_code_rote_display.append(code_role_display_Shirley);
    list_code_rote_display.append(code_role_display_KeA);
}

#endif // BZH_ANK_SE_CODE_DEFINE_TEAM_ROLE_DISPLAY_H
