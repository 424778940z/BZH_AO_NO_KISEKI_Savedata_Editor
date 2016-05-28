#ifndef BZH_ANK_SE_CODE_DEFINE_SKILL_H
#define BZH_ANK_SE_CODE_DEFINE_SKILL_H

#include "mainwindow.h"

QList< QList<quint16> > list_code_s_break_skills;

QList<quint16> list_code_s_break_skills_Lloyd;
QList<quint16> list_code_s_break_skills_Elie;
QList<quint16> list_code_s_break_skills_Tio;
QList<quint16> list_code_s_break_skills_Randy;
QList<quint16> list_code_s_break_skills_Lazy;
QList<quint16> list_code_s_break_skills_Rixia;
//QList<quint16> list_code_s_break_skills_Zeit;
QList<quint16> list_code_s_break_skills_Arios;
QList<quint16> list_code_s_break_skills_Noel;
QList<quint16> list_code_s_break_skills_Dudley;
QList<quint16> list_code_s_break_skills_Garcia;

void setup_list_code_s_break_skills()
{
    //猛虎冲锋
    list_code_s_break_skills_Lloyd.append(0x0118);
    //升龙旭日
    list_code_s_break_skills_Lloyd.append(0x0119);
    //陨星粉碎
    list_code_s_break_skills_Lloyd.append(0x011a);
    //猛虎冲锋II
    list_code_s_break_skills_Lloyd.append(0x011b);
    //升龙旭日II
    list_code_s_break_skills_Lloyd.append(0x011c);

    //极光之雨
    list_code_s_break_skills_Elie.append(0x011d);
    //大气能量炮
    list_code_s_break_skills_Elie.append(0x011e);
    //神圣十字波
    list_code_s_break_skills_Elie.append(0x011f);
    //极光之雨II
    list_code_s_break_skills_Elie.append(0x0120);
    //大气能量炮II
    list_code_s_break_skills_Elie.append(0x0121);

    //以太爆裂射
    list_code_s_break_skills_Tio.append(0x0122);
    //虚无领域
    list_code_s_break_skills_Tio.append(0x0123);
    //星灵装甲
    list_code_s_break_skills_Tio.append(0x0124);
    //以太爆裂射II
    list_code_s_break_skills_Tio.append(0x0125);

    //赤炎飓风
    list_code_s_break_skills_Randy.append(0x0127);
    //死亡天蝎
    list_code_s_break_skills_Randy.append(0x0128);
    //狂战士
    list_code_s_break_skills_Randy.append(0x0129);
    //赤炎飓风II
    list_code_s_break_skills_Randy.append(0x012a);
    //死亡天蝎II
    list_code_s_break_skills_Randy.append(0x012b);

    //致命天堂
    list_code_s_break_skills_Lazy.append(0x012c);
    //空虚手臂
    list_code_s_break_skills_Lazy.append(0x012d);
    //致命天堂II
    list_code_s_break_skills_Lazy.append(0x012f);

    //幻月之舞
    list_code_s_break_skills_Rixia.append(0x0131);
    //真·幻月之舞
    list_code_s_break_skills_Rixia.append(0x0134);

    //风神裂波
    list_code_s_break_skills_Arios.append(0x013b);
    //终之太刀-黑皇-
    list_code_s_break_skills_Arios.append(0x013c);

    //暴击风暴
    list_code_s_break_skills_Noel.append(0x0140);
    //武装军势
    list_code_s_break_skills_Noel.append(0x0141);
    //暴击风暴II
    list_code_s_break_skills_Noel.append(0x0143);

    //正义之拳
    list_code_s_break_skills_Dudley.append(0x0145);
    //正义制裁
    list_code_s_break_skills_Dudley.append(0x0146);
    //正义之拳II
    list_code_s_break_skills_Dudley.append(0x0148);

    //杀戮驱驰
    list_code_s_break_skills_Garcia.append(0x014a);

    list_code_s_break_skills.append(list_code_s_break_skills_Lloyd);
    list_code_s_break_skills.append(list_code_s_break_skills_Elie);
    list_code_s_break_skills.append(list_code_s_break_skills_Tio);
    list_code_s_break_skills.append(list_code_s_break_skills_Randy);
    list_code_s_break_skills.append(list_code_s_break_skills_Lazy);
    list_code_s_break_skills.append(list_code_s_break_skills_Rixia);
    //list_code_s_break_skills.append(list_code_s_break_skills_Zeit);
    list_code_s_break_skills.append(list_code_s_break_skills_Arios);
    list_code_s_break_skills.append(list_code_s_break_skills_Noel);
    list_code_s_break_skills.append(list_code_s_break_skills_Dudley);
    list_code_s_break_skills.append(list_code_s_break_skills_Garcia);
}

#endif // BZH_ANK_SE_CODE_DEFINE_SKILL_H
