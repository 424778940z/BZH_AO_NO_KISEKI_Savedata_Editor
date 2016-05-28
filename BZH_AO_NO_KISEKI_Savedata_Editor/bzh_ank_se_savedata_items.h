#ifndef BZH_ANK_SE_SAVEDATA_ITEMS_H
#define BZH_ANK_SE_SAVEDATA_ITEMS_H

#include "bzh_ank_se_define.h"

void MainWindow::savedata_items_read(QString savedata_file_path)
{
    gui_textbrowser_status_operate("读取物品数据...",false,false);

    quint16 item_code = 0x0000;
    quint16 number_of_item = 0x0000;
    quint64 pos = offset_items_list_start;
    int temp_time_sign = 0;

    //读取前清空所有物品数量
    for(int i = 0;i < tree_item_children_list.size();i++)
    {
        for(int j = 0;j < tree_item_children_list.at(i)->childCount();j++)
        {
            tree_item_children_list.at(i)->child(j)->setText(2,"0");
        }
    }

    while(1)
    {
        //检测是否到尾部
        if(pos > offset_items_list_end)
        {
            break;
        }
        //物品代码
        item_code = savedata_binary_read_quint16(savedata_file_path,pos);
        pos += 0x02;

        //物品个数
        number_of_item = savedata_binary_read_quint16(savedata_file_path,pos);
        pos += 0x02;

        //道具
            //普通
            if(item_code >= 0x01f4 && item_code <= 0x021d)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_props_normal.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_props_normal.at(temp_time_sign))
                    {
                        tree_item_props_normal->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //料理
            if(item_code >= 0x0190 && item_code <= 0x01D9)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_props_cooking.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_props_cooking.at(temp_time_sign))
                    {
                        tree_item_props_cooking->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
        //装备
            //武器
                //练习用武器
                if(item_code == 0x0009)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_generic.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_generic.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_generic->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //罗伊德
                if(item_code >= 0x03E8 && item_code <= 0x03F6)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Lloyd.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Lloyd.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Lloyd->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //艾莉
                if(item_code >= 0x03FD && item_code <= 0x0409)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Elie.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Elie.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Elie->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //提欧
                if(item_code >= 0x0413 && item_code <= 0x041D)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Tio.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Tio.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Tio->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //兰迪
                if(item_code >= 0x0425 && item_code <= 0x0431)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Randy.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Randy.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Randy->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //瓦吉
                if(item_code >= 0x0439 && item_code <= 0x0445)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Lazy.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Lazy.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Lazy->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //诺埃尔
                if(item_code >= 0x044C && item_code <= 0x0459)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Noel.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Noel.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Noel->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //莉夏
                if(item_code >= 0x0460 && item_code <= 0x0464)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Rixia.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Rixia.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Rixia->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //达德利
                if(item_code >= 0x0465 && item_code <= 0x0469)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Dudley.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Dudley.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Dudley->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //亚里欧斯
                if(item_code == 0x046A)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Arios.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Arios.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Arios->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
                //蔡特
                if(item_code >= 0x046F && item_code <= 0x0474)
                {
                    for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_weapon_Zeit.size();temp_time_sign++)
                    {
                        if(item_code == list_code_item_equipment_weapon_Zeit.at(temp_time_sign))
                        {
                            tree_item_equipment_weapon_Zeit->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                            break;
                        }
                    }
                    continue;
                }
            //服装
            if((item_code == 0x0477) || (item_code >= 0x05DC && item_code <= 0x05FC))
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_clothes.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_equipment_clothes.at(temp_time_sign))
                    {
                        tree_item_equipment_clothes->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //鞋子
            if((item_code == 0x0478) || (item_code >= 0x0640 && item_code <= 0x065A))
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_shoes.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_equipment_shoes.at(temp_time_sign))
                    {
                        tree_item_equipment_shoes->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //饰品
            if((item_code >= 0x001E && item_code <= 0x0063) || (item_code >= 0x0398 && item_code <= 0x03A1))
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_equipment_jewelry.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_equipment_jewelry.at(temp_time_sign))
                    {
                        tree_item_equipment_jewelry->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
        //回路
            //普通
            if(item_code != 0x0087 && item_code >= 0x0064 && item_code <= 0x00C6)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_circuit_normal.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_circuit_normal.at(temp_time_sign))
                    {
                        tree_item_circuit_normal->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //核心
            if(item_code >= 0x00DC && item_code <= 0x00F1)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_circuit_core.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_circuit_core.at(temp_time_sign))
                    {
                        tree_item_circuit_core->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //Debug
            if((item_code == 0x0087) || (item_code >= 0x00CB && item_code <= 0x00D8))
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_circuit_debug.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_circuit_debug.at(temp_time_sign))
                    {
                        tree_item_circuit_debug->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
        //事件
            //剧情
            if((item_code >= 0x0320 && item_code <= 0x0347) || (item_code >= 0x035C && item_code <= 0x035E) || (item_code >= 0x0375 && item_code <= 0x0396))
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_event_story.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_event_story.at(temp_time_sign))
                    {
                        tree_item_event_story->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //家具
            if(item_code >= 0x0348 && item_code <= 0x0358)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_event_furnishing.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_event_furnishing.at(temp_time_sign))
                    {
                        tree_item_event_furnishing->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //导力车配件和痛车
            if(item_code >= 0x035F && item_code <= 0x0374)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_event_car.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_event_car.at(temp_time_sign))
                    {
                        tree_item_event_car->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
        //食材
        if(item_code >= 0x012C && item_code <= 0x014A)
        {
            for(temp_time_sign = 0;temp_time_sign <= list_code_item_food.size();temp_time_sign++)
            {
                if(item_code == list_code_item_food.at(temp_time_sign))
                {
                    tree_item_food->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                    break;
                }
            }
            continue;
        }
        //书籍
        if((item_code >= 0x0001 && item_code <= 0x0011) || (item_code >= 0x02bc && item_code <= 0x02FC))
        {
            for(temp_time_sign = 0;temp_time_sign <= list_code_item_book.size();temp_time_sign++)
            {
                if(item_code == list_code_item_book.at(temp_time_sign))
                {
                    tree_item_book->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                    break;
                }
            }
            continue;
        }
        //垂钓
            //鱼饵
            if(item_code >= 0x0186 && item_code <= 0x018c)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_fishing_bait.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_fishing_bait.at(temp_time_sign))
                    {
                        tree_item_fishing_bait->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //鱼
            if(item_code >= 0x015E && item_code <= 0x017C)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_fishing_fish.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_fishing_fish.at(temp_time_sign))
                    {
                        tree_item_fishing_fish->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
            //钓竿
            if(item_code >= 0x0014 && item_code <= 0x0018)
            {
                for(temp_time_sign = 0;temp_time_sign <= list_code_item_fishing_rod.size();temp_time_sign++)
                {
                    if(item_code == list_code_item_fishing_rod.at(temp_time_sign))
                    {
                        tree_item_fishing_rod->child(temp_time_sign)->setText(2,QString::number(number_of_item,10));
                        break;
                    }
                }
                continue;
            }
    }

    gui_textbrowser_status_operate("完成",true,false);
}

void MainWindow::savedata_items_write(QString savedata_file_path)
{
    gui_textbrowser_status_operate("写入物品数据...",false,false);

    quint16 item_code = 0x0000;
    quint16 number_of_item = 0x0000;
    quint64 pos = offset_items_list_start;
    int temp_time_sign = 0;
    bool buffer;

    //道具
        //普通
        for(temp_time_sign = 0;temp_time_sign < tree_item_props_normal->childCount();temp_time_sign++)
        {
            item_code = list_code_item_props_normal.at(temp_time_sign);
            number_of_item = tree_item_props_normal->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //料理
        for(temp_time_sign = 0;temp_time_sign < tree_item_props_cooking->childCount();temp_time_sign++)
        {
            item_code = list_code_item_props_cooking.at(temp_time_sign);
            number_of_item = tree_item_props_cooking->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
    //装备
        //武器
            //通用
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_generic->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_generic.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_generic->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //罗伊德
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Lloyd->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Lloyd.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Lloyd->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //艾莉
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Elie->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Elie.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Elie->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //提欧
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Tio->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Tio.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Tio->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //兰迪
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Randy->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Randy.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Randy->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //瓦吉
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Lazy->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Lazy.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Lazy->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //诺埃尔
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Noel->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Noel.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Noel->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //莉夏
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Rixia->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Rixia.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Rixia->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //达德利
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Dudley->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Dudley.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Dudley->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //亚里欧斯
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Arios->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Arios.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Arios->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
            //蔡特
            for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_weapon_Zeit->childCount();temp_time_sign++)
            {
                item_code = list_code_item_equipment_weapon_Zeit.at(temp_time_sign);
                number_of_item = tree_item_equipment_weapon_Zeit->child(temp_time_sign)->text(2).toUInt(&buffer,10);
                if(number_of_item == 0)
                {
                    continue;
                }
                else
                {
                    savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                    pos += 0x02;
                    savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                    pos += 0x02;
                }
            }
        //服装
        for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_clothes->childCount();temp_time_sign++)
        {
            item_code = list_code_item_equipment_clothes.at(temp_time_sign);
            number_of_item = tree_item_equipment_clothes->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //鞋子
        for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_shoes->childCount();temp_time_sign++)
        {
            item_code = list_code_item_equipment_shoes.at(temp_time_sign);
            number_of_item = tree_item_equipment_shoes->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //饰品
        for(temp_time_sign = 0;temp_time_sign < tree_item_equipment_jewelry->childCount();temp_time_sign++)
        {
            item_code = list_code_item_equipment_jewelry.at(temp_time_sign);
            number_of_item = tree_item_equipment_jewelry->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
    //回路
        //普通
        for(temp_time_sign = 0;temp_time_sign < tree_item_circuit_normal->childCount();temp_time_sign++)
        {
            item_code = list_code_item_circuit_normal.at(temp_time_sign);
            number_of_item = tree_item_circuit_normal->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //核心
        for(temp_time_sign = 0;temp_time_sign < tree_item_circuit_core->childCount();temp_time_sign++)
        {
            item_code = list_code_item_circuit_core.at(temp_time_sign);
            number_of_item = tree_item_circuit_core->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //Debug
        for(temp_time_sign = 0;temp_time_sign < tree_item_circuit_debug->childCount();temp_time_sign++)
        {
            item_code = list_code_item_circuit_debug.at(temp_time_sign);
            number_of_item = tree_item_circuit_debug->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
    //事件
        //剧情
        for(temp_time_sign = 0;temp_time_sign < tree_item_event_story->childCount();temp_time_sign++)
        {
            item_code = list_code_item_event_story.at(temp_time_sign);
            number_of_item = tree_item_event_story->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //家具
        for(temp_time_sign = 0;temp_time_sign < tree_item_event_furnishing->childCount();temp_time_sign++)
        {
            item_code = list_code_item_event_furnishing.at(temp_time_sign);
            number_of_item = tree_item_event_furnishing->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //导力车配件和痛车
        for(temp_time_sign = 0;temp_time_sign < tree_item_event_car->childCount();temp_time_sign++)
        {
            item_code = list_code_item_event_car.at(temp_time_sign);
            number_of_item = tree_item_event_car->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
    //食材
    for(temp_time_sign = 0;temp_time_sign < tree_item_food->childCount();temp_time_sign++)
    {
        item_code = list_code_item_food.at(temp_time_sign);
        number_of_item = tree_item_food->child(temp_time_sign)->text(2).toUInt(&buffer,10);
        if(number_of_item == 0)
        {
            continue;
        }
        else
        {
            savedata_binary_write_quint16(savedata_file_path,pos,item_code);
            pos += 0x02;
            savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
            pos += 0x02;
        }
    }
    //书籍
    for(temp_time_sign = 0;temp_time_sign < tree_item_book->childCount();temp_time_sign++)
    {
        item_code = list_code_item_book.at(temp_time_sign);
        number_of_item = tree_item_book->child(temp_time_sign)->text(2).toUInt(&buffer,10);
        if(number_of_item == 0)
        {
            continue;
        }
        else
        {
            savedata_binary_write_quint16(savedata_file_path,pos,item_code);
            pos += 0x02;
            savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
            pos += 0x02;
        }
    }
    //垂钓
        //鱼饵
        for(temp_time_sign = 0;temp_time_sign < tree_item_fishing_bait->childCount();temp_time_sign++)
        {
            item_code = list_code_item_fishing_bait.at(temp_time_sign);
            number_of_item = tree_item_fishing_bait->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //鱼
        for(temp_time_sign = 0;temp_time_sign < tree_item_fishing_fish->childCount();temp_time_sign++)
        {
            item_code = list_code_item_fishing_fish.at(temp_time_sign);
            number_of_item = tree_item_fishing_fish->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }
        //钓竿
        for(temp_time_sign = 0;temp_time_sign < tree_item_fishing_rod->childCount();temp_time_sign++)
        {
            item_code = list_code_item_fishing_rod.at(temp_time_sign);
            number_of_item = tree_item_fishing_rod->child(temp_time_sign)->text(2).toUInt(&buffer,10);
            if(number_of_item == 0)
            {
                continue;
            }
            else
            {
                savedata_binary_write_quint16(savedata_file_path,pos,item_code);
                pos += 0x02;
                savedata_binary_write_quint16(savedata_file_path,pos,number_of_item);
                pos += 0x02;
            }
        }

    //填充剩余无物品区段
    for(;pos <= offset_items_list_end;pos += 0x02)
    {
        savedata_binary_write_quint16(savedata_file_path,pos,0x0000);
        savedata_binary_write_quint16(savedata_file_path,pos + 0x02,0x0000);
    }

    gui_textbrowser_status_operate("完成",true,false);
}

#endif // BZH_ANK_SE_SAVEDATA_ITEMS_H
