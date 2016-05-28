#ifndef BZH_ANK_SE_TEXT_DEFINE_ITEM_H
#define BZH_ANK_SE_TEXT_DEFINE_ITEM_H

#include "mainwindow.h"

//模型描述
//物品文本按照分类分别列出清单
//物品描述按照分类分别列出清单
//物品代码按照分类分别列出清单
//文本清单,描述清单和代码清单的序号是一致统一的关系
//物品代码是分类排列且连续的,故先按照代码段筛选类别,再筛选对应物品

QStringList list_name_item_props_normal;
QStringList list_name_item_props_cooking;

QStringList list_name_item_equipment_weapon_generic;
QStringList list_name_item_equipment_weapon_Lloyd;
QStringList list_name_item_equipment_weapon_Elie;
QStringList list_name_item_equipment_weapon_Tio;
QStringList list_name_item_equipment_weapon_Randy;
QStringList list_name_item_equipment_weapon_Lazy;
QStringList list_name_item_equipment_weapon_Noel;
QStringList list_name_item_equipment_weapon_Rixia;
QStringList list_name_item_equipment_weapon_Dudley;
QStringList list_name_item_equipment_weapon_Arios;
QStringList list_name_item_equipment_weapon_Zeit;

QStringList list_name_item_equipment_clothes;
QStringList list_name_item_equipment_shoes;
QStringList list_name_item_equipment_jewelry;

QStringList list_name_item_circuit_normal;
QStringList list_name_item_circuit_core;
QStringList list_name_item_circuit_debug;

QStringList list_name_item_event_story;
QStringList list_name_item_event_furnishing;
QStringList list_name_item_event_car;

QStringList list_name_item_food;
QStringList list_name_item_book;

QStringList list_name_item_fishing_bait;
QStringList list_name_item_fishing_fish;
QStringList list_name_item_fishing_rod;

/**************************************************************************************************/

QStringList list_describe_item_props_normal;
QStringList list_describe_item_props_cooking;

QStringList list_describe_item_equipment_weapon_generic;
QStringList list_describe_item_equipment_weapon_Lloyd;
QStringList list_describe_item_equipment_weapon_Elie;
QStringList list_describe_item_equipment_weapon_Tio;
QStringList list_describe_item_equipment_weapon_Randy;
QStringList list_describe_item_equipment_weapon_Lazy;
QStringList list_describe_item_equipment_weapon_Noel;
QStringList list_describe_item_equipment_weapon_Rixia;
QStringList list_describe_item_equipment_weapon_Dudley;
QStringList list_describe_item_equipment_weapon_Arios;
QStringList list_describe_item_equipment_weapon_Zeit;

QStringList list_describe_item_equipment_clothes;
QStringList list_describe_item_equipment_shoes;
QStringList list_describe_item_equipment_jewelry;

QStringList list_describe_item_circuit_normal;
QStringList list_describe_item_circuit_core;
QStringList list_describe_item_circuit_debug;

QStringList list_describe_item_event_story;
QStringList list_describe_item_event_furnishing;
QStringList list_describe_item_event_car;

QStringList list_describe_item_food;
QStringList list_describe_item_book;

QStringList list_describe_item_fishing_bait;
QStringList list_describe_item_fishing_fish;
QStringList list_describe_item_fishing_rod;

/**************************************************************************************************/

QList<QTreeWidgetItem *> tree_item_root_list;

QList<QTreeWidgetItem *> tree_item_list_props_normal;
QList<QTreeWidgetItem *> tree_item_list_props_cooking;

QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_generic;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Lloyd;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Elie;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Tio;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Randy;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Lazy;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Noel;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Rixia;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Dudley;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Arios;
QList<QTreeWidgetItem *> tree_item_list_equipment_weapon_Zeit;

QList<QTreeWidgetItem *> tree_item_list_equipment_clothes;
QList<QTreeWidgetItem *> tree_item_list_equipment_shoes;
QList<QTreeWidgetItem *> tree_item_list_equipment_jewelry;

QList<QTreeWidgetItem *> tree_item_list_circuit_normal;
QList<QTreeWidgetItem *> tree_item_list_circuit_core;
QList<QTreeWidgetItem *> tree_item_list_circuit_debug;

QList<QTreeWidgetItem *> tree_item_list_event_story;
QList<QTreeWidgetItem *> tree_item_list_event_furnishing;
QList<QTreeWidgetItem *> tree_item_list_event_car;

QList<QTreeWidgetItem *> tree_item_list_food;
QList<QTreeWidgetItem *> tree_item_list_book;

QList<QTreeWidgetItem *> tree_item_list_fishing_bait;
QList<QTreeWidgetItem *> tree_item_list_fishing_fish;
QList<QTreeWidgetItem *> tree_item_list_fishing_rod;

/**************************************************************************************************/

//道具
QTreeWidgetItem *tree_item_props;
//普通
QTreeWidgetItem *tree_item_props_normal;
//料理
QTreeWidgetItem *tree_item_props_cooking;
//装备
QTreeWidgetItem *tree_item_equipment;
//武器
QTreeWidgetItem *tree_item_equipment_weapon;
//通用
QTreeWidgetItem *tree_item_equipment_weapon_generic;
//罗伊德
QTreeWidgetItem *tree_item_equipment_weapon_Lloyd;
//艾莉
QTreeWidgetItem *tree_item_equipment_weapon_Elie;
//提欧
QTreeWidgetItem *tree_item_equipment_weapon_Tio;
//兰迪
QTreeWidgetItem *tree_item_equipment_weapon_Randy;
//瓦吉
QTreeWidgetItem *tree_item_equipment_weapon_Lazy;
//诺埃尔
QTreeWidgetItem *tree_item_equipment_weapon_Noel;
//莉夏
QTreeWidgetItem *tree_item_equipment_weapon_Rixia;
//达德利
QTreeWidgetItem *tree_item_equipment_weapon_Dudley;
//亚里欧斯
QTreeWidgetItem *tree_item_equipment_weapon_Arios;
//蔡特
QTreeWidgetItem *tree_item_equipment_weapon_Zeit;
//服装
QTreeWidgetItem *tree_item_equipment_clothes;
//鞋子
QTreeWidgetItem *tree_item_equipment_shoes;
//饰品
QTreeWidgetItem *tree_item_equipment_jewelry;
//回路
QTreeWidgetItem *tree_item_circuit;
//普通
QTreeWidgetItem *tree_item_circuit_normal;
//核心
QTreeWidgetItem *tree_item_circuit_core;
//Debug
QTreeWidgetItem *tree_item_circuit_debug;
 //事件
QTreeWidgetItem *tree_item_event;
//剧情
QTreeWidgetItem *tree_item_event_story;
//家具
QTreeWidgetItem *tree_item_event_furnishing;
//导力车配件和痛车
QTreeWidgetItem *tree_item_event_car;
 //食材
QTreeWidgetItem *tree_item_food;
//书籍
QTreeWidgetItem *tree_item_book;
//垂钓
QTreeWidgetItem *tree_item_fishing;
//鱼饵
QTreeWidgetItem *tree_item_fishing_bait;
//鱼
QTreeWidgetItem *tree_item_fishing_fish;
//钓竿
QTreeWidgetItem *tree_item_fishing_rod;

/**************************************************************************************************/

QList<QTreeWidgetItem *> tree_item_children_list;

/**************************************************************************************************/

void setup_list_name_items()
{
    list_name_item_props_normal
            << "回复药"
            << "中回复药"
            << "大回复药"
            << "全回复药"
            << "EP填充剂I"
            << "EP填充剂II"
            << "EP填充剂III"
            << "复苏药"
            << "圣灵药"
            << "圣灵药·改"
            << "还魂粉"
            << "还魂胶囊"
            << "解毒药"
            << "软化膏"
            << "绝缘胶带"
            << "解冻暖炉"
            << "舒缓凝胶"
            << "冷却喷雾"
            << "眼药"
            << "提神薄荷"
            << "苏醒药"
            << "镇静剂"
            << "S-药片"
            << "痊愈之药"
            << "爆灵宝玉"
            << "烟雾弹"
            << "战斗探测器"
            << "枫糖蛋糕"
            << "赏月面包"
            << "奶油菠萝包"
            << "贝奈特绝品"
            << "极厚猪排三明治"
            << "最终旅途"
            << "咪西包子"
            << "咪雪丸子"
            << "罐装果汁"
            << "罐装咖啡"
            << "强壮苦番茄猪骨汤"
            << "暖心猪骨汤"
            << "运动汽水X"
            << "苦西红柿苏打"
               ;

    list_name_item_props_cooking
            << "天上面[日轮]"
            << "微苦担担面"
            << "极苦面[断头]"
            << "神仙麻婆[麒麟]"
            << "药膳麻婆豆腐"
            << "炼狱麻婆[阎魔]"
            << "天下一品炒饭"
            << "龙老炒饭"
            << "杂色锅巴饭"
            << "极品牛排[刚]"
            << "精力牛排"
            << "顽固肉排[岩]"
            << "三日久煮炖菜"
            << "久煮炖菜"
            << "混沌久煮[浊]"
            << "大地锅[烂漫]"
            << "大饱口福锅"
            << "男人料理[山]"
            << "天河锅[瑞云]"
            << "芳醇潮锅"
            << "男人料理[川]"
            << "特快炸鱼[疾]"
            << "炸鱼排"
            << "箭之鱼"
            << "丰盛蛋包饭"
            << "大师蛋包饭"
            << "激辣炸弹蛋包饭"
            << "翠玉面[治愈]"
            << "香草面"
            << "细针面"
            << "双层汉堡"
            << "午餐汉堡"
            << "苦味汉堡"
            << "四味奶酪比萨"
            << "热酪比萨"
            << "四重番茄比萨"
            << "强效三明治"
            << "鲜美三明治"
            << "守护三明治"
            << "真心饭盒[诚]"
            << "行乐午餐饭盒"
            << "不可思议盒饭[仰天]"
            << "辉煌汤"
            << "奶油浓汤"
            << "奇妙汤"
            << "奇幻糖果"
            << "七色棉花糖"
            << "秘密棉花糖"
            << "天上甜点[夜月]"
            << "香甜巧克力蛋糕"
            << "反射巧克力蛋糕"
            << "宝物甜点[白雪]"
            << "溜滑杏仁豆腐"
            << "爽弹布丁"
            << "冰凉甜点[七彩]"
            << "混合冰激凌"
            << "痊愈冰激凌"
            << "绝品甜点[瞬动]"
            << "轻快爆米花"
            << "隐秘爆米花"
            << "玉露[绿风]"
            << "考究抹茶拿铁"
            << "良药[熊竹]"
            << "甘露[紫绀]"
            << "铃铛草莓果汁"
            << "紫色液体"
            << "黑茶[梦魇杀手]"
            << "浓厚卡布奇诺"
            << "褐色液体"
            << "秘水[桃源乡]"
            << "桃色紫薇"
            << "粉红液体"
            << "失败作[引以为戒]"
            << "猫食"
               ;

    list_name_item_equipment_weapon_generic
            << "练习用武器"
               ;
    list_name_item_equipment_weapon_Lloyd
            << "强力破坏者·改"
            << "双钉棍"
            << "螺纹双棍"
            << "罪恶制裁者"
            << "集团破坏者"
            << "猛虎棍"
            << "玄象棍"
            << "钢管旋棍"
            << "捕捉者"
            << "裂地棍"
            << "神圣五芒星"
            << "七星击"
            << "零·破坏者"
            << "雷神之佑"
            << "无限之光"
               ;
    list_name_item_equipment_weapon_Elie
            << "倾国"
            << "喜悦"
            << "红色樱草II"
            << "丝绒之吻"
            << "纯真女皇"
            << "高洁圣女"
            << "银色密雨"
            << "神恩"
            << "暗灰小丑"
            << "千金·烙印"
            << "血色光辉"
            << "纯白圣枪"
            << "能天使威光"
               ;
    list_name_item_equipment_weapon_Tio
            << "探索者"
            << "聚魔杖"
            << "高纯能量"
            << "光辉之翼"
            << "精神同步"
            << "魔导加速器"
            << "先导者"
            << "黑暗搏动"
            << "星之脉冲"
            << "天启"
            << "宇宙崩坏"
               ;
    list_name_item_equipment_weapon_Randy
            << "全力冲击"
            << "格斗战斧"
            << "巨象震慑者"
            << "终结粉碎者"
            << "高热蒸汽"
            << "白银冲击枪"
            << "黑暗制造者"
            << "破坏神·改"
            << "终极冲击"
            << "邪恶粉碎者"
            << "天灾"
            << "屠龙深渊"
               ;
    list_name_item_equipment_weapon_Lazy
            << "皮拳套"
            << "罪恶拳套"
            << "合金拳套"
            << "音速狂潮"
            << "螺旋冲击"
            << "漆黑螫刺"
            << "王者拳套"
            << "彗星拳套"
            << "范式谜爪"
            << "戒律护手"
            << "灵光护手"
            << "乐园"
            << "七耀圣腕"
               ;
    list_name_item_equipment_weapon_Rixia
            << "八尺乌"
            << "黑鸫"
            << "降魔不知火"
            << "灵剑·奠邪"
            << "曳影之剑"
               ;
    list_name_item_equipment_weapon_Zeit
            << "亚麻拳套"
            << "尖钉项圈"
               ;
    list_name_item_equipment_weapon_Arios
            << "利剑『隼风』"
               ;
    list_name_item_equipment_weapon_Noel
            << "交叉火力"
            << "岩石尘碎"
            << "闪光甲虫"
            << "圣十字"
            << "野马"
            << "M8公猫"
            << "杀戮黄蜂"
            << "三重风暴"
            << "无畏之枪"
            << "白隼"
            << "第五爆裂枪"
            << "挚爱恋人"
            << "雷电魔枪"
            << "日耀弧光"
               ;
    list_name_item_equipment_weapon_Dudley
            << "皇帝"
            << "黑鹰"
            << "龙神"
            << "恶魔"
            << "制裁"
               ;


    list_name_item_equipment_clothes
            << "皮革背带"
            << "纤维夹克"
            << "强化牛仔服"
            << "弹性大衣"
            << "荆棘夹克"
            << "水珠连衣裙"
            << "机动战斗服"
            << "符文长袍"
            << "野战套装"
            << "向日葵斗篷"
            << "求生背心"
            << "牛仔皮衣"
            << "影丸外套"
            << "祭司法衣"
            << "军风大衣"
            << "龙华树之服"
            << "钛金铠甲"
            << "晚礼服"
            << "神圣法袍"
            << "邪恶胸甲"
            << "七龙装甲"
            << "星辰羽衣"
            << "暴风长袍"
            << "七耀神威圣铠"
            << "七耀极星圣衣"
            << "勇猛夹克"
            << "纯净礼裙"
            << "智慧斗篷"
            << "野性大衣"
            << "盟约法衣"
            << "增幅战斗装"
            << "规则西装"
            << "歼天幻舞装"
            << "动力服Z"
               ;
    list_name_item_equipment_shoes
            << "护腿甲"
            << "钉鞋"
            << "远足鞋"
            << "加速跑鞋"
            << "田园鞋"
            << "珐琅凉鞋"
            << "军用靴"
            << "弹簧跑鞋"
            << "影丸雪踏"
            << "白色帆布鞋"
            << "斯托雷加越野鞋"
            << "檀木树脂靴"
            << "黑靴"
            << "纤足高跟鞋"
            << "军用作战靴"
            << "骑士护腿"
            << "都市皮鞋"
            << "柔光凉鞋"
            << "金属强化鞋"
            << "超能跑鞋"
            << "辉光护腿"
            << "缭乱七彩靴"
            << "虚空护腿"
            << "天神战斗靴"
            << "神宠高跟鞋"
            << "金耀翔天鞋"
            << "银耀星影鞋"
            << "斯托雷加Ω"
               ;
    list_name_item_equipment_jewelry
            << "珊瑚戒指+"
            << "英雄戒指+"
            << "夜光眼镜+"
            << "凉爽项链+"
            << "打火机+"
            << "幻彩围巾+"
            << "叮当耳环+"
            << "钢手镯+"
            << "花之瓶+"
            << "坚硬肉干"
            << "海刃奖牌"
            << "水狂奖牌"
            << "龙宫奖牌"
            << "银螭奖牌"
            << "钓皇奖牌"
            << "狙击枪管"
            << "影丸头巾"
            << "咪西尾巴"
            << "咪西帽子"
            << "咪雪爪子"
            << "咪雪缎带"
            << "进击刻印"
            << "超·必胜扎头巾"
            << "超·斗魂腰带"
            << "正义徽章"
            << "幸运刻印"
            << "光晓之冠"
            << "盘古之冠"
            << "馥郁香波"
            << "银胸针"
            << "珊瑚戒指"
            << "英雄戒指"
            << "夜光眼镜"
            << "凉爽项链"
            << "打火机"
            << "幻彩围巾"
            << "叮当耳环"
            << "钢手镯"
            << "花之瓶"
            << "神圣之链"
            << "云之使者"
            << "月亮灵摆"
            << "太阳灵摆"
            << "星辰灵摆"
            << "加长枪管"
            << "规律徽章"
            << "勇气徽章"
            << "闪光徽章"
            << "必胜扎头巾"
            << "斗魂腰带"
            << "星杯挂坠"
            << "银之链"
            << "月灵玉"
            << "咪雪挂饰"
            << "土人偶"
            << "寂静之蓝"
            << "激情之红"
            << "常青之绿"
            << "深邃之黄"
            << "草帽"
            << "安全头盔"
            << "医用手套"
            << "睡猫硬币"
            << "跳蛙硬币"
            << "神圣挂坠"
            << "五彩风车"
            << "翠耀石挂饰"
            << "苍耀石挂饰"
            << "红耀石挂饰"
            << "琥耀石挂饰"
            << "金耀石挂饰"
            << "修利的帽子"
            << "芙兰的护符"
            << "舞姬的发饰"
            << "勇士之心"
            << "零之神珠"
               ;

    list_name_item_circuit_normal
            << "HP1"
            << "HP2"
            << "HP3"
            << "水耀珠"
            << "EP1"
            << "EP2"
            << "EP3"
            << "银耀珠"
            << "攻击1"
            << "攻击2"
            << "攻击3"
            << "红耀珠"
            << "防御1"
            << "防御2"
            << "防御3"
            << "琥耀珠"
            << "精神1"
            << "精神2"
            << "精神3"
            << "白耀珠"
            << "魔防1"
            << "魔防2"
            << "魔防3"
            << "苍耀珠"
            << "命中1"
            << "命中2"
            << "命中3"
            << "光耀珠"
            << "回避1"
            << "回避2"
            << "回避3"
            << "翠耀珠"
            << "移动1"
            << "移动2"
            << "风耀珠"
            << "行动力1"
            << "行动力2"
            << "行动力3"
            << "黑耀珠"
            << "妨害1"
            << "妨害2"
            << "绝耀珠"
            << "驱动1"
            << "驱动2"
            << "刻耀珠"
            << "省EP1"
            << "省EP2"
            << "省EP3"
            << "金耀珠"
            << "毒之刃"
            << "石化之刃"
            << "封魔之刃"
            << "冻结之刃"
            << "封技之刃"
            << "炎伤之刃"
            << "暗之刃"
            << "睡眠之刃"
            << "混乱之刃"
            << "毒之刃2"
            << "石化之刃2"
            << "封魔之刃2"
            << "冻结之刃2"
            << "封技之刃2"
            << "炎伤之刃2"
            << "暗之刃2"
            << "睡眠之刃2"
            << "混乱之刃2"
            << "破剑之牙"
            << "破盾之牙"
            << "破言之牙"
            << "破灵之牙"
            << "破迅之牙"
            << "破脚之牙"
            << "镇星铃"
            << "辰星铃"
            << "焰星铃"
            << "岁星铃"
            << "冥王铃"
            << "天王铃"
            << "明王铃"
            << "耀脉"
            << "机功"
            << "虎威"
            << "治愈"
            << "丹精"
            << "炼气"
            << "龙眼"
            << "恶戏"
            << "脱兔"
            << "美臭"
            << "幸运"
            << "缚魔"
            << "鹰目"
            << "天眼"
            << "范围"
            << "情报"
            << "探知"
            << "幻胧"
               ;

    list_name_item_circuit_core
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

    list_name_item_circuit_debug
            << "Unkonw-----"
            << "物理吸收"
            << "魔法吸收"
            << "物理反射"
            << "魔法反射"
            << "100%毒之刃"
            << "100%石化之刃"
            << "100%封魔之刃"
            << "100%冻结之刃"
            << "100%封技之刃"
            << "100%炎伤之刃"
            << "100%黑暗之刃"
            << "100%睡眠之刃"
            << "100%混乱之刃"
            << "100%即死之刃"
               ;


    list_name_item_event_story
            << "受损的警察徽章"
            << "伊梅尔达馆的钥匙"
            << "地下空间B区域的钥匙"
            << "旧矿山的钥匙"
            << "lBC认证卡片"
            << "梅琳的伞"
            << "IBC贵宾卡片"
            << "废弃材料"
            << "纯白之石[中]"
            << "纯白之石[小]"
            << "纯白之石[大]"
            << "尼克鲁的问诊表"
            << "迪诺的问诊表"
            << "库雷斯队员的问诊表"
            << "沉重货物"
            << "易碎品的小包裹"
            << "发往住宅街的送货单"
            << "蓝花"
            << "结晶碎片"
            << "罗赞贝尔克人偶．C"
            << "罗赞贝尔克人偶．R"
            << "罗赞贝尔克人偶．M"
            << "罗赞贝尔克人偶．S"
            << "波波碰！β版"
            << "小箱子"
            << "月之宝珠"
            << "星之光玉"
            << "苦西红柿酱"
            << "选秀活动特别奖纪念盾[艾莉]"
            << "选秀活动特别奖纪念盾[提欧]"
            << "选秀活动特别奖纪念盾[诺埃尔]"
            << "绀碧竿"
            << "琥珀轴"
            << "翡翠线"
            << "红莲钩"
            << "支援科车辆钥匙"
            << "米修拉姆·奇幻乐园游乐券"
            << "临时认证卡片"
            << "金属探测器"
            << "银耀石钥匙"
            << "金耀石钥匙"
            << "黑耀石钥匙"
            << "红色卡片钥匙"
            << "U材料"
            << "塞姆里亚石碎片"
            << "神圣布料"
            << "塞姆里亚石"
               ;

    list_name_item_event_furnishing
            << "迷你沙袋"
            << "特里斯坦号"
            << "优雅衣镜"
            << "八音盒"
            << "影丸储蓄罐"
            << "咪雪玩偶"
            << "冲浪板"
            << "点唱机"
            << "竞赛旗"
            << "小径自行车"
            << "安乐椅"
            << "迷你水族馆"
            << "古怪靠垫"
            << "波波靠垫"
            << "黑泰迪熊"
            << "苦番茄人玩偶"
            << "ZWEI2企鹅"
               ;

    list_name_item_event_car
            << "挡泥板"
            << "侧踏板"
            << "尾翼"
            << "前保险杠"
            << "警灯"
            << "强化轮圈"
            << "HP回复装置"
            << "EP回复装置"
            << "CP回复装置"
            << "CPD主题"
            << "咪西主题"
            << "人物主题E"
            << "人物主题T"
            << "天空色彩"
            << "高贵色彩"
            << "魅力色彩"
            << "狂野色彩"
            << "凉爽色彩"
            << "警备色彩"
            << "轻快色彩"
            << "闪耀色彩"
            << "深暗色彩"
               ;


    list_name_item_food
            << "魔兽兽肉"
            << "魔兽鱼肉"
            << "魔兽之壳"
            << "魔兽之卵"
            << "魔兽羽翼"
            << "魔兽之种"
            << "魔兽明胶"
            << "发芽糙米"
            << "五谷味增"
            << "百药精酒"
            << "朝摘香叶"
            << "清绿香草"
            << "胡椒粒"
            << "热辣椒"
            << "香油"
            << "蜂蜜糖浆"
            << "粗碎岩盐"
            << "新磨小麦粉"
            << "新鲜牛奶"
            << "新鲜奶酪"
            << "新鲜鸡蛋"
            << "铃铛草莓"
            << "黑暗菇"
            << "七彩豆"
            << "国王马铃薯"
            << "万能青葱"
            << "迷你胡萝卜"
            << "苦西红柿"
            << "雪花里脊肉"
            << "新鲜白鱼肉"
               ;

    list_name_item_book
            << "调查手册"
            << "料理手册"
            << "钓鱼手册"
            << "战斗手册"
            << "自治州地图"
            << "克洛斯贝尔市的地图"
            << "战术书·击"
            << "战术书·十"
            << "战术书·苍"
            << "战术书·袭"
            << "战术书·虚"
            << "战术书·爆"
            << "战术书·里"
            << "战术书·升"
            << "克洛斯贝尔时代周刊①"
            << "克洛斯贝尔时代周刊②"
            << "克洛斯贝尔时代周刊③"
            << "克洛斯贝尔时代周刊号外"
            << "克洛斯贝尔时代周刊④"
            << "克洛斯贝尔时代周刊⑤"
            << "克洛斯贝尔时代周刊⑥"
            << "克洛斯贝尔时代周刊⑦"
            << "克洛斯贝尔时代周刊⑧"
            << "黑市医生格伦 1卷"
            << "黑市医生格伦 2卷"
            << "黑市医生格伦 3卷"
            << "黑市医生格伦 4卷"
            << "黑市医生格伦 5卷"
            << "黑市医生格伦 6卷"
            << "黑市医生格伦 7卷"
            << "黑市医生格伦 8卷"
            << "黑市医生格伦 9卷"
            << "黑市医生格伦 10卷"
            << "黑市医生格伦 11卷"
            << "黑市医生格伦 12卷"
            << "黑市医生格伦 13卷"
            << "黑市医生格伦 14卷"
            << "铁道爱好者的推荐"
            << "玛尔克与森林深处的魔女们·上"
            << "玛尔克与森林深处的魔女们·中"
            << "玛尔克与森林深处的魔女们·下"
            << "改变大陆的美人们"
            << "有效利用五分钟零散时间"
            << "克洛斯贝尔怪谈全集"
            << "彩虹·Funbook"
            << "圣女与白狼·上"
            << "圣女与白狼·下"
            << "克洛斯贝尔时代周刊⑴"
            << "克洛斯贝尔时代周刊⑵"
            << "克洛斯贝尔时代周刊⑶"
            << "克洛斯贝尔时代周刊⑷"
            << "克洛斯贝尔时代周刊⑸"
            << "克洛斯贝尔时代周刊⑹"
            << "克洛斯贝尔时代周刊⑺"
            << "克洛斯贝尔时代周刊⑻"
            << "克洛斯贝尔时代周刊⑨"
            << "克洛斯贝尔时代周刊号外"
            << "克洛斯贝尔时代周刊⑽"
            << "克洛斯贝尔时代周刊⑾"
            << "沐浴阳光的阿尼艾斯 1卷"
            << "沐浴阳光的阿尼艾斯 2卷"
            << "沐浴阳光的阿尼艾斯 3卷"
            << "沐浴阳光的阿尼艾斯 4卷"
            << "沐浴阳光的阿尼艾斯 5卷"
            << "沐浴阳光的阿尼艾斯 6卷"
            << "沐浴阳光的阿尼艾斯 7卷"
            << "沐浴阳光的阿尼艾斯 8卷"
            << "沐浴阳光的阿尼艾斯 9卷"
            << "沐浴阳光的阿尼艾斯 10卷"
            << "沐浴阳光的阿尼艾斯 11卷"
            << "沐浴阳光的阿尼艾斯 12卷"
            << "沐浴阳光的阿尼艾斯 13卷"
            << "沐浴阳光的阿尼艾斯 14卷"
            << "幻兽调查报告书"
               ;

    list_name_item_fishing_bait
            << "鲑鱼卵"
            << "熬炼丸子"
            << "红虫"
            << "蚯蚓"
            << "熬炼丸子DX"
            << "虹丸EX"
            << "垂钓大礼包"
               ;
    list_name_item_fishing_fish
            << "斗鱼"
            << "雪花蟹"
            << "蓝带神仙鱼"
            << "银伞鱼"
            << "阿尔摩里卡鲫鱼"
            << "乌龟"
            << "橙河鱼"
            << "岩穴鱼"
            << "虹鳟鱼"
            << "食人鱼"
            << "鲤鱼"
            << "大口鲈鱼"
            << "黑鲑"
            << "角斗鱼"
            << "冷水鱼"
            << "小鲵"
            << "鲑鱼"
            << "金龙鱼"
            << "鳗鲡"
            << "钢壳龟"
            << "巨血蟹"
            << "珍珠龙鱼"
            << "巨鲶"
            << "金鲑"
            << "大鲵"
            << "锦鲤"
            << "翠耀神仙鱼"
            << "琥耀岩穴鱼"
            << "红耀食人鱼"
            << "苍耀巨龙鱼"
            << "巨骨龙鱼皇"
               ;
			   
    list_name_item_fishing_rod
            << "初级杆"
            << "小巧射手"
            << "竹竿"
            << "钢竿侵略者"
            << "水中支配者"
               ;

}

void setup_list_describe_items()
{

}

void MainWindow::setup_list_tree_items()
{
    //道具
    tree_item_props = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("道具")));
        //普通
        tree_item_props_normal = new QTreeWidgetItem(tree_item_props,QStringList(QString("普通")));
        //料理
        tree_item_props_cooking = new QTreeWidgetItem(tree_item_props,QStringList(QString("料理")));
    //装备
    tree_item_equipment = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("装备")));
        //武器
        tree_item_equipment_weapon = new QTreeWidgetItem(tree_item_equipment,QStringList(QString("武器")));
            //通用
            tree_item_equipment_weapon_generic = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("通用")));
            //罗伊德
            tree_item_equipment_weapon_Lloyd = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("罗伊德")));
            //艾莉
            tree_item_equipment_weapon_Elie = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("艾莉")));
            //提欧
            tree_item_equipment_weapon_Tio = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("提欧")));
            //兰迪
            tree_item_equipment_weapon_Randy = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("兰迪")));
            //瓦吉
            tree_item_equipment_weapon_Lazy = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("瓦吉")));
            //诺埃尔
            tree_item_equipment_weapon_Noel = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("诺埃尔")));
            //莉夏
            tree_item_equipment_weapon_Rixia = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("莉夏")));
            //达德利
            tree_item_equipment_weapon_Dudley = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("达德利")));
            //亚里欧斯
            tree_item_equipment_weapon_Arios = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("亚里欧斯")));
            //蔡特
            tree_item_equipment_weapon_Zeit = new QTreeWidgetItem(tree_item_equipment_weapon,QStringList(QString("蔡特")));
        //服装
        tree_item_equipment_clothes = new QTreeWidgetItem(tree_item_equipment,QStringList(QString("服装")));
        //鞋子
        tree_item_equipment_shoes = new QTreeWidgetItem(tree_item_equipment,QStringList(QString("鞋子")));
        //饰品
        tree_item_equipment_jewelry = new QTreeWidgetItem(tree_item_equipment,QStringList(QString("饰品")));
    //回路
    tree_item_circuit = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("回路")));
        //普通
        tree_item_circuit_normal = new QTreeWidgetItem(tree_item_circuit,QStringList(QString("普通")));
        //核心
        tree_item_circuit_core = new QTreeWidgetItem(tree_item_circuit,QStringList(QString("核心")));
        //Debug
        tree_item_circuit_debug = new QTreeWidgetItem(tree_item_circuit,QStringList(QString("Debug")));
     //事件
    tree_item_event = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("事件")));
        //剧情
        tree_item_event_story = new QTreeWidgetItem(tree_item_event,QStringList(QString("剧情")));
        //家具
        tree_item_event_furnishing = new QTreeWidgetItem(tree_item_event,QStringList(QString("家具")));
        //导力车配件和痛车
        tree_item_event_car = new QTreeWidgetItem(tree_item_event,QStringList(QString("导力车配件和痛车")));
     //食材
    tree_item_food = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("食材")));
    //书籍
    tree_item_book = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("书籍")));
    //垂钓
    tree_item_fishing = new QTreeWidgetItem(ui->treeWidge_item,QStringList(QString("垂钓")));
        //鱼饵
        tree_item_fishing_bait = new QTreeWidgetItem(tree_item_fishing,QStringList(QString("鱼饵")));
        //鱼
        tree_item_fishing_fish = new QTreeWidgetItem(tree_item_fishing,QStringList(QString("鱼")));
        //钓竿
        tree_item_fishing_rod = new QTreeWidgetItem(tree_item_fishing,QStringList(QString("钓竿")));

    tree_item_root_list
            << tree_item_props
                << tree_item_props_normal
                << tree_item_props_cooking
            << tree_item_equipment
                << tree_item_equipment_weapon
                    << tree_item_equipment_weapon_generic
                    << tree_item_equipment_weapon_Lloyd
                    << tree_item_equipment_weapon_Elie
                    << tree_item_equipment_weapon_Tio
                    << tree_item_equipment_weapon_Randy
                    << tree_item_equipment_weapon_Lazy
                    << tree_item_equipment_weapon_Noel
                    << tree_item_equipment_weapon_Rixia
                    << tree_item_equipment_weapon_Dudley
                    << tree_item_equipment_weapon_Arios
                    << tree_item_equipment_weapon_Zeit
                << tree_item_equipment_clothes
                << tree_item_equipment_shoes
                << tree_item_equipment_jewelry
            << tree_item_circuit
                << tree_item_circuit_normal
                << tree_item_circuit_core
                << tree_item_circuit_debug
            << tree_item_event
                << tree_item_event_story
                << tree_item_event_furnishing
                << tree_item_event_car
            << tree_item_food
            << tree_item_book
            << tree_item_fishing
                << tree_item_fishing_bait
                << tree_item_fishing_fish
                << tree_item_fishing_rod
                           ;

    foreach(QTreeWidgetItem *tree_item,tree_item_root_list)
    {
        tree_item->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsDragEnabled);
    }

    /***********************************************************************************************/

    //回复药
    QTreeWidgetItem *tree_item_props_normal_huifuyao = new QTreeWidgetItem(tree_item_props_normal);
    //中回复药
    QTreeWidgetItem *tree_item_props_normal_zhonghuifuyao = new QTreeWidgetItem(tree_item_props_normal);
    //大回复药
    QTreeWidgetItem *tree_item_props_normal_dahuifuyao = new QTreeWidgetItem(tree_item_props_normal);
    //全回复药
    QTreeWidgetItem *tree_item_props_normal_quanhuifuyao = new QTreeWidgetItem(tree_item_props_normal);
    //EP填充剂I
    QTreeWidgetItem *tree_item_props_normal_rp_tianchongjiI = new QTreeWidgetItem(tree_item_props_normal);
    //EP填充剂II
    QTreeWidgetItem *tree_item_props_normal_rp_tianchongjiII = new QTreeWidgetItem(tree_item_props_normal);
    //EP填充剂III
    QTreeWidgetItem *tree_item_props_normal_rp_tianchongjiIII = new QTreeWidgetItem(tree_item_props_normal);
    //复苏药
    QTreeWidgetItem *tree_item_props_normal_fusuyao = new QTreeWidgetItem(tree_item_props_normal);
    //圣灵药
    QTreeWidgetItem *tree_item_props_normal_shenglingyao = new QTreeWidgetItem(tree_item_props_normal);
    //圣灵药·改
    QTreeWidgetItem *tree_item_props_normal_shenglingyao_gai = new QTreeWidgetItem(tree_item_props_normal);
    //还魂粉
    QTreeWidgetItem *tree_item_props_normal_huanhunfen = new QTreeWidgetItem(tree_item_props_normal);
    //还魂胶囊
    QTreeWidgetItem *tree_item_props_normal_huanhunjiaonang = new QTreeWidgetItem(tree_item_props_normal);
    //解毒药
    QTreeWidgetItem *tree_item_props_normal_jieduyao = new QTreeWidgetItem(tree_item_props_normal);
    //软化膏
    QTreeWidgetItem *tree_item_props_normal_ruanhuagao = new QTreeWidgetItem(tree_item_props_normal);
    //绝缘胶带
    QTreeWidgetItem *tree_item_props_normal_jueyuanjiaodai = new QTreeWidgetItem(tree_item_props_normal);
    //解冻暖炉
    QTreeWidgetItem *tree_item_props_normal_jiedongnuanlu = new QTreeWidgetItem(tree_item_props_normal);
    //舒缓凝胶
    QTreeWidgetItem *tree_item_props_normal_shuhuanningjiao = new QTreeWidgetItem(tree_item_props_normal);
    //冷却喷雾
    QTreeWidgetItem *tree_item_props_normal_lengquepenwu = new QTreeWidgetItem(tree_item_props_normal);
    //眼药
    QTreeWidgetItem *tree_item_props_normal_yanyao = new QTreeWidgetItem(tree_item_props_normal);
    //提神薄荷
    QTreeWidgetItem *tree_item_props_normal_tishenbohe = new QTreeWidgetItem(tree_item_props_normal);
    //苏醒药
    QTreeWidgetItem *tree_item_props_normal_suxingyao = new QTreeWidgetItem(tree_item_props_normal);
    //镇静剂
    QTreeWidgetItem *tree_item_props_normal_zhenjingji = new QTreeWidgetItem(tree_item_props_normal);
    //S-药片
    QTreeWidgetItem *tree_item_props_normal_s_yaopian = new QTreeWidgetItem(tree_item_props_normal);
    //痊愈之药
    QTreeWidgetItem *tree_item_props_normal_quanyuzhiyao = new QTreeWidgetItem(tree_item_props_normal);
    //爆灵宝玉
    QTreeWidgetItem *tree_item_props_normal_baolingbaoyu = new QTreeWidgetItem(tree_item_props_normal);
    //烟雾弹
    QTreeWidgetItem *tree_item_props_normal_yanwudan = new QTreeWidgetItem(tree_item_props_normal);
    //战斗探测器
    QTreeWidgetItem *tree_item_props_normal_zhandoutanceqi = new QTreeWidgetItem(tree_item_props_normal);
    //枫糖蛋糕
    QTreeWidgetItem *tree_item_props_normal_fengtangdangao = new QTreeWidgetItem(tree_item_props_normal);
    //赏月面包
    QTreeWidgetItem *tree_item_props_normal_shangyuemianbao = new QTreeWidgetItem(tree_item_props_normal);
    //奶油菠萝包
    QTreeWidgetItem *tree_item_props_normal_naiyouboluobao = new QTreeWidgetItem(tree_item_props_normal);
    //贝奈特绝品
    QTreeWidgetItem *tree_item_props_normal_beinaitejuepin = new QTreeWidgetItem(tree_item_props_normal);
    //极厚猪排三明治
    QTreeWidgetItem *tree_item_props_normal_jihouzhupaisanmingzhi = new QTreeWidgetItem(tree_item_props_normal);
    //最终旅途
    QTreeWidgetItem *tree_item_props_normal_zuizhonglvtu = new QTreeWidgetItem(tree_item_props_normal);
    //咪西包子
    QTreeWidgetItem *tree_item_props_normal_mixibaozi = new QTreeWidgetItem(tree_item_props_normal);
    //咪雪丸子
    QTreeWidgetItem *tree_item_props_normal_mixuewanzi = new QTreeWidgetItem(tree_item_props_normal);
    //罐装果汁
    QTreeWidgetItem *tree_item_props_normal_guanzhuangguozhi = new QTreeWidgetItem(tree_item_props_normal);
    //罐装咖啡
    QTreeWidgetItem *tree_item_props_normal_guanzhuangkafei = new QTreeWidgetItem(tree_item_props_normal);
    //强壮苦番茄猪骨汤
    QTreeWidgetItem *tree_item_props_normal_qiangzhuangkufanqiezhugutang = new QTreeWidgetItem(tree_item_props_normal);
    //暖心猪骨汤
    QTreeWidgetItem *tree_item_props_normal_nuanxinzhugutang = new QTreeWidgetItem(tree_item_props_normal);
    //运动汽水X
    QTreeWidgetItem *tree_item_props_normal_yundongqishuix = new QTreeWidgetItem(tree_item_props_normal);
    //苦西红柿苏打
    QTreeWidgetItem *tree_item_props_normal_kuxihongshisuda = new QTreeWidgetItem(tree_item_props_normal);


    //天上面[日轮]
    QTreeWidgetItem *tree_item_props_cooking_tianshangmian_rilun = new QTreeWidgetItem(tree_item_props_cooking);
    //微苦担担面
    QTreeWidgetItem *tree_item_props_cooking_weikudandanmian = new QTreeWidgetItem(tree_item_props_cooking);
    //极苦面[断头]
    QTreeWidgetItem *tree_item_props_cooking_jikumian_duantou = new QTreeWidgetItem(tree_item_props_cooking);
    //神仙麻婆[麒麟]
    QTreeWidgetItem *tree_item_props_cooking_shenxianmapo_qilin = new QTreeWidgetItem(tree_item_props_cooking);
    //药膳麻婆豆腐
    QTreeWidgetItem *tree_item_props_cooking_yaoshanmapodoufu = new QTreeWidgetItem(tree_item_props_cooking);
    //炼狱麻婆[阎魔]
    QTreeWidgetItem *tree_item_props_cooking_lianyumapo_yanmo = new QTreeWidgetItem(tree_item_props_cooking);
    //天下一品炒饭
    QTreeWidgetItem *tree_item_props_cooking_tianxiayipinchaofan = new QTreeWidgetItem(tree_item_props_cooking);
    //龙老炒饭
    QTreeWidgetItem *tree_item_props_cooking_longlaochaofan = new QTreeWidgetItem(tree_item_props_cooking);
    //杂色锅巴饭
    QTreeWidgetItem *tree_item_props_cooking_zaseguobafan = new QTreeWidgetItem(tree_item_props_cooking);
    //极品牛排[刚]
    QTreeWidgetItem *tree_item_props_cooking_jipinniupai_gang = new QTreeWidgetItem(tree_item_props_cooking);
    //精力牛排
    QTreeWidgetItem *tree_item_props_cooking_jingliniupai = new QTreeWidgetItem(tree_item_props_cooking);
    //顽固肉排[岩]
    QTreeWidgetItem *tree_item_props_cooking_wanguroupai_yan = new QTreeWidgetItem(tree_item_props_cooking);
    //三日久煮炖菜
    QTreeWidgetItem *tree_item_props_cooking_sanrijiuzhuduncai = new QTreeWidgetItem(tree_item_props_cooking);
    //久煮炖菜
    QTreeWidgetItem *tree_item_props_cooking_jiuzhuduncan = new QTreeWidgetItem(tree_item_props_cooking);
    //混沌久煮[浊]
    QTreeWidgetItem *tree_item_props_cooking_hundunjiuzhu_zhuo = new QTreeWidgetItem(tree_item_props_cooking);
    //大地锅[烂漫]
    QTreeWidgetItem *tree_item_props_cooking_dadiguo_lanman = new QTreeWidgetItem(tree_item_props_cooking);
    //大饱口福锅
    QTreeWidgetItem *tree_item_props_cooking_dabaokoufuguo = new QTreeWidgetItem(tree_item_props_cooking);
    //男人料理[山]
    QTreeWidgetItem *tree_item_props_cooking_nanrenliaoli_shan = new QTreeWidgetItem(tree_item_props_cooking);
    //天河锅[瑞云]
    QTreeWidgetItem *tree_item_props_cooking_tianheguo_xiangyun = new QTreeWidgetItem(tree_item_props_cooking);
    //芳醇潮锅
    QTreeWidgetItem *tree_item_props_cooking_fangchunchaoguo = new QTreeWidgetItem(tree_item_props_cooking);
    //男人料理[川]
    QTreeWidgetItem *tree_item_props_cooking_nanrenliaoli_chuan = new QTreeWidgetItem(tree_item_props_cooking);
    //特快炸鱼[疾]
    QTreeWidgetItem *tree_item_props_cooking_tekuaizhayu = new QTreeWidgetItem(tree_item_props_cooking);
    //炸鱼排
    QTreeWidgetItem *tree_item_props_cooking_zhayupai = new QTreeWidgetItem(tree_item_props_cooking);
    //箭之鱼
    QTreeWidgetItem *tree_item_props_cooking_jianzhiyu = new QTreeWidgetItem(tree_item_props_cooking);
    //丰盛蛋包饭
    QTreeWidgetItem *tree_item_props_cooking_fengshengdanbaofan = new QTreeWidgetItem(tree_item_props_cooking);
    //大师蛋包饭
    QTreeWidgetItem *tree_item_props_cooking_dashidanbaofan = new QTreeWidgetItem(tree_item_props_cooking);
    //激辣炸弹蛋包饭
    QTreeWidgetItem *tree_item_props_cooking_jilazhadandanbaofan = new QTreeWidgetItem(tree_item_props_cooking);
    //翠玉面[治愈]
    QTreeWidgetItem *tree_item_props_cooking_cuiyumian_zhiyu = new QTreeWidgetItem(tree_item_props_cooking);
    //香草面
    QTreeWidgetItem *tree_item_props_cooking_xiangcaomian = new QTreeWidgetItem(tree_item_props_cooking);
    //细针面
    QTreeWidgetItem *tree_item_props_cooking_zhenximian = new QTreeWidgetItem(tree_item_props_cooking);
    //双层汉堡
    QTreeWidgetItem *tree_item_props_cooking_shuangcenghanbao = new QTreeWidgetItem(tree_item_props_cooking);
    //午餐汉堡
    QTreeWidgetItem *tree_item_props_cooking_wucanhanbao = new QTreeWidgetItem(tree_item_props_cooking);
    //苦味汉堡
    QTreeWidgetItem *tree_item_props_cooking_kuweihanbao = new QTreeWidgetItem(tree_item_props_cooking);
    //四味奶酪比萨
    QTreeWidgetItem *tree_item_props_cooking_siweunailaobisa = new QTreeWidgetItem(tree_item_props_cooking);
    //热酪比萨
    QTreeWidgetItem *tree_item_props_cooking_nailaobisa = new QTreeWidgetItem(tree_item_props_cooking);
    //四重番茄比萨
    QTreeWidgetItem *tree_item_props_cooking_sichongfanqiebisa = new QTreeWidgetItem(tree_item_props_cooking);
    //强效三明治
    QTreeWidgetItem *tree_item_props_cooking_qiangxiaosanmingzhi = new QTreeWidgetItem(tree_item_props_cooking);
    //鲜美三明治
    QTreeWidgetItem *tree_item_props_cooking_xianmeisanmingzhi = new QTreeWidgetItem(tree_item_props_cooking);
    //守护三明治
    QTreeWidgetItem *tree_item_props_cooking_shouhusanmingzhi = new QTreeWidgetItem(tree_item_props_cooking);
    //真心饭盒[诚]
    QTreeWidgetItem *tree_item_props_cooking_zhenxinfanhe_cheng = new QTreeWidgetItem(tree_item_props_cooking);
    //行乐午餐饭盒
    QTreeWidgetItem *tree_item_props_cooking_xingleniuwucanfanhe = new QTreeWidgetItem(tree_item_props_cooking);
    //不可思议盒饭[仰天]
    QTreeWidgetItem *tree_item_props_cooking_bukesiyihefan_yangtian = new QTreeWidgetItem(tree_item_props_cooking);
    //辉煌汤
    QTreeWidgetItem *tree_item_props_cooking_huihuangtang = new QTreeWidgetItem(tree_item_props_cooking);
    //奶油浓汤
    QTreeWidgetItem *tree_item_props_cooking_naiyounongtang = new QTreeWidgetItem(tree_item_props_cooking);
    //奇妙汤
    QTreeWidgetItem *tree_item_props_cooking_qimiaotang = new QTreeWidgetItem(tree_item_props_cooking);
    //奇幻糖果
    QTreeWidgetItem *tree_item_props_cooking_qihuantangguo = new QTreeWidgetItem(tree_item_props_cooking);
    //七色棉花糖
    QTreeWidgetItem *tree_item_props_cooking_qisemianhuatang = new QTreeWidgetItem(tree_item_props_cooking);
    //秘密棉花糖
    QTreeWidgetItem *tree_item_props_cooking_mimibaomihua = new QTreeWidgetItem(tree_item_props_cooking);
    //天上甜点[夜月]
    QTreeWidgetItem *tree_item_props_cooking_tianshangtiandian_yeyue = new QTreeWidgetItem(tree_item_props_cooking);
    //香甜巧克力蛋糕
    QTreeWidgetItem *tree_item_props_cooking_xiangtianqiaokelidangao = new QTreeWidgetItem(tree_item_props_cooking);
    //反射巧克力蛋糕
    QTreeWidgetItem *tree_item_props_cooking_fansheqiaokelidangao = new QTreeWidgetItem(tree_item_props_cooking);
    //宝物甜点[白雪]
    QTreeWidgetItem *tree_item_props_cooking_baowutiandian_baixue = new QTreeWidgetItem(tree_item_props_cooking);
    //溜滑杏仁豆腐
    QTreeWidgetItem *tree_item_props_cooking_hualiuxingrendoufu = new QTreeWidgetItem(tree_item_props_cooking);
    //爽弹布丁
    QTreeWidgetItem *tree_item_props_cooking_shuangtanbuding = new QTreeWidgetItem(tree_item_props_cooking);
    //冰凉甜点[七彩]
    QTreeWidgetItem *tree_item_props_cooking_bingliangtiandian_qicai = new QTreeWidgetItem(tree_item_props_cooking);
    //混合冰激凌
    QTreeWidgetItem *tree_item_props_cooking_hunhebingjiling = new QTreeWidgetItem(tree_item_props_cooking);
    //痊愈冰激凌
    QTreeWidgetItem *tree_item_props_cooking_zhiyubingjiling = new QTreeWidgetItem(tree_item_props_cooking);
    //绝品甜点[瞬动]
    QTreeWidgetItem *tree_item_props_cooking_juepintiandian_shundong = new QTreeWidgetItem(tree_item_props_cooking);
    //轻快爆米花
    QTreeWidgetItem *tree_item_props_cooking_qingkuaibaomihua = new QTreeWidgetItem(tree_item_props_cooking);
    //隐秘爆米花
    QTreeWidgetItem *tree_item_props_cooking_yinmibaomihua = new QTreeWidgetItem(tree_item_props_cooking);
    //玉露[绿风]
    QTreeWidgetItem *tree_item_props_cooking_yulu_lvfeng = new QTreeWidgetItem(tree_item_props_cooking);
    //考究抹茶拿铁
    QTreeWidgetItem *tree_item_props_cooking_kaojiumochanatie = new QTreeWidgetItem(tree_item_props_cooking);
    //良药[熊竹]
    QTreeWidgetItem *tree_item_props_cooking_liangyao_xingzhu = new QTreeWidgetItem(tree_item_props_cooking);
    //甘露[紫绀]
    QTreeWidgetItem *tree_item_props_cooking_ganlu_zigan = new QTreeWidgetItem(tree_item_props_cooking);
    //铃铛草莓果汁
    QTreeWidgetItem *tree_item_props_cooking_lingdangcaomeiguozhi = new QTreeWidgetItem(tree_item_props_cooking);
    //紫色液体
    QTreeWidgetItem *tree_item_props_cooking_ziseyeti = new QTreeWidgetItem(tree_item_props_cooking);
    //黑茶[梦魇杀手]
    QTreeWidgetItem *tree_item_props_cooking_heicha_mengyanshashou = new QTreeWidgetItem(tree_item_props_cooking);
    //浓厚卡布奇诺
    QTreeWidgetItem *tree_item_props_cooking_nonghoukabuqinuo = new QTreeWidgetItem(tree_item_props_cooking);
    //褐色液体
    QTreeWidgetItem *tree_item_props_cooking_juseyeti = new QTreeWidgetItem(tree_item_props_cooking);
    //秘水[桃源乡]
    QTreeWidgetItem *tree_item_props_cooking_mishui_taoyuanxiang = new QTreeWidgetItem(tree_item_props_cooking);
    //桃色紫薇
    QTreeWidgetItem *tree_item_props_cooking_taoseziwei = new QTreeWidgetItem(tree_item_props_cooking);
    //粉红液体
    QTreeWidgetItem *tree_item_props_cooking_fenhongyeti = new QTreeWidgetItem(tree_item_props_cooking);
    //失败作[引以为戒]
    QTreeWidgetItem *tree_item_props_cooking_shibaizuo_yinyiweijie = new QTreeWidgetItem(tree_item_props_cooking);
    //猫食
    QTreeWidgetItem *tree_item_props_cooking_maoshi = new QTreeWidgetItem(tree_item_props_cooking);

    /***********************************************************************************************/

    //练习用武器
    QTreeWidgetItem *tree_item_equipment_weapon_lianxiyongwuqi = new QTreeWidgetItem(tree_item_equipment_weapon_generic);

    //强力破坏者·改
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_qianglipohuaizhe_gai = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //双钉棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_shuangdinggun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //螺纹双棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_luoxuanshuanggun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //罪恶制裁者
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_zuiezhicaizhe = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //集团破坏者
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_jituanpohuaizhe = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //猛虎棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_menghugun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //玄象棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_xuanxianggun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //钢管旋棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_gangguanxuangun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //捕捉者
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_buzhuozhe = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //裂地棍
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_liedigun = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //神圣五芒星
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_shenshengwumangxin = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //七星击
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_qixingji = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //零·破坏者
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_ling_pohuaizhe = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //雷神之佑
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_leishenzhiyou = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);
    //无限之光
    QTreeWidgetItem *tree_item_equipment_weapon_Lloyd_wuxianzhiguang = new QTreeWidgetItem(tree_item_equipment_weapon_Lloyd);

    //倾国
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_qingguo = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //喜悦
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_xiyue = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //红色樱草II
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_honseyingcangII = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //丝绒之吻
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_sirongzhiwen = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //纯真女皇
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_chunzhennvhuang = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //高洁圣女
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_gaojieshengnv = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //银色密雨
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_yinsemiyu = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //神恩
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_shenen = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //暗灰小丑
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_huianxiaochou = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //千金·烙印
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_qianjin_laoyin = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //血色光辉
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_xueseguanghui = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //纯白圣枪
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_chunbaishengqiang = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);
    //能天使威光
    QTreeWidgetItem *tree_item_equipment_weapon_Elie_nengtianshiweiguang = new QTreeWidgetItem(tree_item_equipment_weapon_Elie);

    //探索者
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_tansuozhe = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //聚魔杖
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_jumozhang = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //高纯能量
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_gaochunnengliang = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //光辉之翼
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_guanghuizhiyi = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //精神同步
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_jingshentongbu = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //魔导加速器
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_modaojiasuqi = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //先导者
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_xiandaozhe = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //黑暗搏动
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_heianbodong = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //星之脉冲
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_xingzhimaichong = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //天启
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_tianqi = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);
    //宇宙崩坏
    QTreeWidgetItem *tree_item_equipment_weapon_Tio_yuzhoubenghuai = new QTreeWidgetItem(tree_item_equipment_weapon_Tio);

    //全力冲击
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_quannengchongji = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //格斗战斧
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_gedouzhanfu = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //巨象震慑者
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_juxiangzhenshezhi = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //终结粉碎者
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_zhongjiefensuizhe = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //高热蒸汽
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_gaorezhengqi = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //白银冲击枪
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_baiyinchongjiqiang = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //黑暗制造者
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_heianzhizaozhe = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //破坏神·改
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_pohuaishen_gai = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //终极冲击
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_zhongjichongji = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //邪恶粉碎者
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_xieefensuizhe = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //天灾
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_tianzai = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);
    //屠龙深渊
    QTreeWidgetItem *tree_item_equipment_weapon_Randy_tulongshenyuan = new QTreeWidgetItem(tree_item_equipment_weapon_Randy);

    //皮拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_piquantao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //罪恶拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_zuiequantao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //合金拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_hejinquantao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //音速狂潮
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_yinsukuangchao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //螺旋冲击
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_luoxuanchongji = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //漆黑螫刺
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_qiheizheci = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //王者拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_wangzhequantao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //彗星拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_huixingquantao = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //范式谜爪
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_fanshimizhua = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //戒律护手
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_jielvhushou = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //灵光护手
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_lingguanghushou = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //乐园
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_leyuan = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);
    //七耀圣腕
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_qiyaoshenwan = new QTreeWidgetItem(tree_item_equipment_weapon_Lazy);

    //交叉火力
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_jiaochahuoli = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //岩石尘碎
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_yanshijisui = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //闪光甲虫
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_shanguangjiachong = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //圣十字
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_shengshizi = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //野马
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_yema = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //M8公猫
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_m8gongmao = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //杀戮黄蜂
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_shaluhuangfeng = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //三重风暴
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_sanchongfengbao = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //无畏之枪
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_wuweizhiqiang = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //白隼
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_baisun = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //第五爆裂枪
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_diwubaolieqiang = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //挚爱恋人
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_zhiailianren = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //雷电魔枪
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_leidianmoqiang = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);
    //日耀弧光
    QTreeWidgetItem *tree_item_equipment_weapon_Noel_riyaohuguang = new QTreeWidgetItem(tree_item_equipment_weapon_Noel);

    //八尺乌
    QTreeWidgetItem *tree_item_equipment_weapon_Rixia_bachiniao = new QTreeWidgetItem(tree_item_equipment_weapon_Rixia);
    //黑鸫
    QTreeWidgetItem *tree_item_equipment_weapon_Rixia_heiya = new QTreeWidgetItem(tree_item_equipment_weapon_Rixia);
    //降魔不知火
    QTreeWidgetItem *tree_item_equipment_weapon_Rixia_xiangmobuzhihuo = new QTreeWidgetItem(tree_item_equipment_weapon_Rixia);
    //灵剑·奠邪
    QTreeWidgetItem *tree_item_equipment_weapon_Rixia_lingjian_dianxie = new QTreeWidgetItem(tree_item_equipment_weapon_Rixia);
    //曳影之剑
    QTreeWidgetItem *tree_item_equipment_weapon_Rixia_zhuaiyingzhijian = new QTreeWidgetItem(tree_item_equipment_weapon_Rixia);

    //皇帝
    QTreeWidgetItem *tree_item_equipment_weapon_Dudley_huangdi = new QTreeWidgetItem(tree_item_equipment_weapon_Dudley);
    //黑鹰
    QTreeWidgetItem *tree_item_equipment_weapon_Dudley_heiying = new QTreeWidgetItem(tree_item_equipment_weapon_Dudley);
    //龙神
    QTreeWidgetItem *tree_item_equipment_weapon_Dudley_longshen = new QTreeWidgetItem(tree_item_equipment_weapon_Dudley);
    //恶魔
    QTreeWidgetItem *tree_item_equipment_weapon_Dudley_emo = new QTreeWidgetItem(tree_item_equipment_weapon_Dudley);
    //制裁
    QTreeWidgetItem *tree_item_equipment_weapon_Dudley_zhicai = new QTreeWidgetItem(tree_item_equipment_weapon_Dudley);

    //利剑『隼风』
    QTreeWidgetItem *tree_item_equipment_weapon_Arios_lijian_sunfeng = new QTreeWidgetItem(tree_item_equipment_weapon_Arios);

    //亚麻拳套
    QTreeWidgetItem *tree_item_equipment_weapon_Lazy_yamaquantao = new QTreeWidgetItem(tree_item_equipment_weapon_Zeit);
    //尖钉项圈
    QTreeWidgetItem *tree_item_equipment_weapon_Zeit_jiandingxiangquan = new QTreeWidgetItem(tree_item_equipment_weapon_Zeit);

    //皮革背带
    QTreeWidgetItem *tree_item_equipment_clothes_pigebeidai = new QTreeWidgetItem(tree_item_equipment_clothes);
    //纤维夹克
    QTreeWidgetItem *tree_item_equipment_clothes_xianweijiake = new QTreeWidgetItem(tree_item_equipment_clothes);
    //强化牛仔服
    QTreeWidgetItem *tree_item_equipment_clothes_qianghuaniuzaifu = new QTreeWidgetItem(tree_item_equipment_clothes);
    //弹性大衣
    QTreeWidgetItem *tree_item_equipment_clothes_tanxingdayi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //荆棘夹克
    QTreeWidgetItem *tree_item_equipment_clothes_jingjijiake = new QTreeWidgetItem(tree_item_equipment_clothes);
    //水珠连衣裙
    QTreeWidgetItem *tree_item_equipment_clothes_shuizhulianyiqun = new QTreeWidgetItem(tree_item_equipment_clothes);
    //机动战斗服
    QTreeWidgetItem *tree_item_equipment_clothes_jidongzhandoufu = new QTreeWidgetItem(tree_item_equipment_clothes);
    //符文长袍
    QTreeWidgetItem *tree_item_equipment_clothes_fuwenchangpao = new QTreeWidgetItem(tree_item_equipment_clothes);
    //野战套装
    QTreeWidgetItem *tree_item_equipment_clothes_yezhantaozhuang = new QTreeWidgetItem(tree_item_equipment_clothes);
    //向日葵斗篷
    QTreeWidgetItem *tree_item_equipment_clothes_xiangrikuidoupeng = new QTreeWidgetItem(tree_item_equipment_clothes);
    //求生背心
    QTreeWidgetItem *tree_item_equipment_clothes_qiushengbeixin = new QTreeWidgetItem(tree_item_equipment_clothes);
    //牛仔皮衣
    QTreeWidgetItem *tree_item_equipment_clothes_niuzaipiyi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //影丸外套
    QTreeWidgetItem *tree_item_equipment_clothes_yingwanwaitao = new QTreeWidgetItem(tree_item_equipment_clothes);
    //祭司法衣
    QTreeWidgetItem *tree_item_equipment_clothes_jisifayi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //军风大衣
    QTreeWidgetItem *tree_item_equipment_clothes_junfengdayi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //龙华树之服
    QTreeWidgetItem *tree_item_equipment_clothes_longhuashuzhifu = new QTreeWidgetItem(tree_item_equipment_clothes);
    //钛金铠甲
    QTreeWidgetItem *tree_item_equipment_clothes_taijinkaijia = new QTreeWidgetItem(tree_item_equipment_clothes);
    //晚礼服
    QTreeWidgetItem *tree_item_equipment_clothes_wanlifu = new QTreeWidgetItem(tree_item_equipment_clothes);
    //神圣法袍
    QTreeWidgetItem *tree_item_equipment_clothes_shenshengfapao = new QTreeWidgetItem(tree_item_equipment_clothes);
    //邪恶胸甲
    QTreeWidgetItem *tree_item_equipment_clothes_xieexiongjia = new QTreeWidgetItem(tree_item_equipment_clothes);
    //七龙装甲
    QTreeWidgetItem *tree_item_equipment_clothes_qilongzhuangjia = new QTreeWidgetItem(tree_item_equipment_clothes);
    //星辰羽衣
    QTreeWidgetItem *tree_item_equipment_clothes_xingchenyuyi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //暴风长袍
    QTreeWidgetItem *tree_item_equipment_clothes_baofengchangpao = new QTreeWidgetItem(tree_item_equipment_clothes);
    //七耀神威圣铠
    QTreeWidgetItem *tree_item_equipment_clothes_qiyaoshenweishengkai = new QTreeWidgetItem(tree_item_equipment_clothes);
    //七耀极星圣衣
    QTreeWidgetItem *tree_item_equipment_clothes_qiyaojixingshengyi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //勇猛夹克
    QTreeWidgetItem *tree_item_equipment_clothes_yongmengjiake = new QTreeWidgetItem(tree_item_equipment_clothes);
    //纯净礼裙
    QTreeWidgetItem *tree_item_equipment_clothes_chunjingliqun = new QTreeWidgetItem(tree_item_equipment_clothes);
    //智慧斗篷
    QTreeWidgetItem *tree_item_equipment_clothes_zhihuidoupeng = new QTreeWidgetItem(tree_item_equipment_clothes);
    //野性大衣
    QTreeWidgetItem *tree_item_equipment_clothes_yexingdayi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //盟约法衣
    QTreeWidgetItem *tree_item_equipment_clothes_mengyuefayi = new QTreeWidgetItem(tree_item_equipment_clothes);
    //增幅战斗装
    QTreeWidgetItem *tree_item_equipment_clothes_zengfuzhandouzhuang = new QTreeWidgetItem(tree_item_equipment_clothes);
    //规则西装
    QTreeWidgetItem *tree_item_equipment_clothes_guizexizhuang = new QTreeWidgetItem(tree_item_equipment_clothes);
    //歼天幻舞装
    QTreeWidgetItem *tree_item_equipment_clothes_jianmiehuantianzhuang = new QTreeWidgetItem(tree_item_equipment_clothes);
    //动力服Z
    QTreeWidgetItem *tree_item_equipment_clothes_yundongfuZ = new QTreeWidgetItem(tree_item_equipment_clothes);

    //护腿甲
    QTreeWidgetItem *tree_item_equipment_shoes_hutuijia = new QTreeWidgetItem(tree_item_equipment_shoes);
    //钉鞋
    QTreeWidgetItem *tree_item_equipment_shoes_dingxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //远足鞋
    QTreeWidgetItem *tree_item_equipment_shoes_yuanzuxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //加速跑鞋
    QTreeWidgetItem *tree_item_equipment_shoes_jiasupaoxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //田园鞋
    QTreeWidgetItem *tree_item_equipment_shoes_tianyuanxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //珐琅凉鞋
    QTreeWidgetItem *tree_item_equipment_shoes_falangliangxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //军用靴
    QTreeWidgetItem *tree_item_equipment_shoes_junyongxue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //弹簧跑鞋
    QTreeWidgetItem *tree_item_equipment_shoes_tanhuangpaoxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //影丸雪踏
    QTreeWidgetItem *tree_item_equipment_shoes_yingwanxueta = new QTreeWidgetItem(tree_item_equipment_shoes);
    //白色帆布鞋
    QTreeWidgetItem *tree_item_equipment_shoes_baisefanbuxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //斯托雷加越野鞋
    QTreeWidgetItem *tree_item_equipment_shoes_situoleijiayueyexie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //檀木树脂靴
    QTreeWidgetItem *tree_item_equipment_shoes_tanmushuzhixue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //黑靴
    QTreeWidgetItem *tree_item_equipment_shoes_heixue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //纤足高跟鞋
    QTreeWidgetItem *tree_item_equipment_shoes_xianzugaogenxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //军用作战靴
    QTreeWidgetItem *tree_item_equipment_shoes_junyongxuezuozhanxue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //骑士护腿
    QTreeWidgetItem *tree_item_equipment_shoes_qishihutui = new QTreeWidgetItem(tree_item_equipment_shoes);
    //都市皮鞋
    QTreeWidgetItem *tree_item_equipment_shoes_dushipixie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //柔光凉鞋
    QTreeWidgetItem *tree_item_equipment_shoes_rouguangliangxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //金属强化鞋
    QTreeWidgetItem *tree_item_equipment_shoes_jinshuqianghuaxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //超能跑鞋
    QTreeWidgetItem *tree_item_equipment_shoes_chaonengpaoxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //辉光护腿
    QTreeWidgetItem *tree_item_equipment_shoes_huiguanghutui = new QTreeWidgetItem(tree_item_equipment_shoes);
    //缭乱七彩靴
    QTreeWidgetItem *tree_item_equipment_shoes_liaoluanqicaixue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //虚空护腿
    QTreeWidgetItem *tree_item_equipment_shoes_xukonghutui = new QTreeWidgetItem(tree_item_equipment_shoes);
    //天神战斗靴
    QTreeWidgetItem *tree_item_equipment_shoes_tianshenzhandouxue = new QTreeWidgetItem(tree_item_equipment_shoes);
    //神宠高跟鞋
    QTreeWidgetItem *tree_item_equipment_shoes_shenchonggaogenxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //金耀翔天鞋
    QTreeWidgetItem *tree_item_equipment_shoes_jinyaoxiangtianxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //银耀星影鞋
    QTreeWidgetItem *tree_item_equipment_shoes_yingaoxingyingxie = new QTreeWidgetItem(tree_item_equipment_shoes);
    //斯托雷加Ω
    QTreeWidgetItem *tree_item_equipment_shoes_situoleijiaoumu = new QTreeWidgetItem(tree_item_equipment_shoes);

    //珊瑚戒指+
    QTreeWidgetItem *tree_item_equipment_jewelry_shanhujiezhi_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //英雄戒指+
    QTreeWidgetItem *tree_item_equipment_jewelry_yingxiongjiezhi_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //夜光眼镜+
    QTreeWidgetItem *tree_item_equipment_jewelry_yeguangyanjing_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //凉爽项链+
    QTreeWidgetItem *tree_item_equipment_jewelry_liangshuangxianglian_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //打火机+
    QTreeWidgetItem *tree_item_equipment_jewelry_dahuoji_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //幻彩围巾+
    QTreeWidgetItem *tree_item_equipment_jewelry_huancaiweijin_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //叮当耳环+
    QTreeWidgetItem *tree_item_equipment_jewelry_dingdangerhuan_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //钢手镯+
    QTreeWidgetItem *tree_item_equipment_jewelry_gangshouzhuo_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //花之瓶+
    QTreeWidgetItem *tree_item_equipment_jewelry_huazhiping_plus = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //坚硬肉干
    QTreeWidgetItem *tree_item_equipment_jewelry_jianyingrougan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //海刃奖牌
    QTreeWidgetItem *tree_item_equipment_jewelry_hairenjiangpai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //水狂奖牌
    QTreeWidgetItem *tree_item_equipment_jewelry_shuikuangjiangpai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //龙宫奖牌
    QTreeWidgetItem *tree_item_equipment_jewelry_longgongjiangpai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //银螭奖牌
    QTreeWidgetItem *tree_item_equipment_jewelry_yinchijiangpai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //钓皇奖牌
    QTreeWidgetItem *tree_item_equipment_jewelry_diaohuangjiangpai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //狙击枪管
    QTreeWidgetItem *tree_item_equipment_jewelry_jujiqiangguan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //影丸头巾
    QTreeWidgetItem *tree_item_equipment_jewelry_yingwantoujin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //咪西尾巴
    QTreeWidgetItem *tree_item_equipment_jewelry_mixiweiba = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //咪西帽子
    QTreeWidgetItem *tree_item_equipment_jewelry_miximaozi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //咪雪爪子
    QTreeWidgetItem *tree_item_equipment_jewelry_mixuezhuazi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //咪雪缎带
    QTreeWidgetItem *tree_item_equipment_jewelry_mixiduandai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //进击刻印
    QTreeWidgetItem *tree_item_equipment_jewelry_jinjikeyin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //超·必胜扎头巾
    QTreeWidgetItem *tree_item_equipment_jewelry_chao_bishengzhatoujin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //超·斗魂腰带
    QTreeWidgetItem *tree_item_equipment_jewelry_chao_douhunyaodai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //正义徽章
    QTreeWidgetItem *tree_item_equipment_jewelry_zhengyihuizhang = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //幸运刻印
    QTreeWidgetItem *tree_item_equipment_jewelry_xingyunkeyin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //光晓之冠
    QTreeWidgetItem *tree_item_equipment_jewelry_guangxiaozhiguan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //盘古之冠
    QTreeWidgetItem *tree_item_equipment_jewelry_panguzhiguan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //馥郁香波
    QTreeWidgetItem *tree_item_equipment_jewelry_fuyuxiangbo = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //银胸针
    QTreeWidgetItem *tree_item_equipment_jewelry_yinxiongzhen = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //珊瑚戒指
    QTreeWidgetItem *tree_item_equipment_jewelry_shanhujiezhi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //英雄戒指
    QTreeWidgetItem *tree_item_equipment_jewelry_yingxiongjiezhi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //夜光眼镜
    QTreeWidgetItem *tree_item_equipment_jewelry_yeguangyanjing = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //凉爽项链
    QTreeWidgetItem *tree_item_equipment_jewelry_liangshuangxianglian = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //打火机
    QTreeWidgetItem *tree_item_equipment_jewelry_dahuoji = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //幻彩围巾
    QTreeWidgetItem *tree_item_equipment_jewelry_huanyingweijin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //叮当耳环
    QTreeWidgetItem *tree_item_equipment_jewelry_dingdangerhuan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //钢手镯
    QTreeWidgetItem *tree_item_equipment_jewelry_gangshouzhuo = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //花之瓶
    QTreeWidgetItem *tree_item_equipment_jewelry_huazhiping = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //神圣之链
    QTreeWidgetItem *tree_item_equipment_jewelry_shenshengzhilian = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //云之使者
    QTreeWidgetItem *tree_item_equipment_jewelry_yunzhishizhe = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //月亮灵摆
    QTreeWidgetItem *tree_item_equipment_jewelry_yonglianglingbai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //太阳灵摆
    QTreeWidgetItem *tree_item_equipment_jewelry_taiyanglingbai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //星辰灵摆
    QTreeWidgetItem *tree_item_equipment_jewelry_xingchenlingbai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //加长枪管
    QTreeWidgetItem *tree_item_equipment_jewelry_jiachangqiangguan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //规律徽章
    QTreeWidgetItem *tree_item_equipment_jewelry_guilvhuizhang = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //勇气徽章
    QTreeWidgetItem *tree_item_equipment_jewelry_yongqihuizhang = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //闪光徽章
    QTreeWidgetItem *tree_item_equipment_jewelry_shanguanghuizhang = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //必胜扎头巾
    QTreeWidgetItem *tree_item_equipment_jewelry_bishengzhatoujin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //斗魂腰带
    QTreeWidgetItem *tree_item_equipment_jewelry_douhunyaodai = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //星杯挂坠
    QTreeWidgetItem *tree_item_equipment_jewelry_xingbeiguazhui = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //银之链
    QTreeWidgetItem *tree_item_equipment_jewelry_yinzhilian = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //月灵玉
    QTreeWidgetItem *tree_item_equipment_jewelry_yuelingyu = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //咪雪挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_mixiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //土人偶
    QTreeWidgetItem *tree_item_equipment_jewelry_turenou = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //寂静之蓝
    QTreeWidgetItem *tree_item_equipment_jewelry_jijingzhilan = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //激情之红
    QTreeWidgetItem *tree_item_equipment_jewelry_jiqingzhihong = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //常青之绿
    QTreeWidgetItem *tree_item_equipment_jewelry_changqingzhilv = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //深邃之黄
    QTreeWidgetItem *tree_item_equipment_jewelry_shensuizhihuang = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //草帽
    QTreeWidgetItem *tree_item_equipment_jewelry_caomao = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //安全头盔
    QTreeWidgetItem *tree_item_equipment_jewelry_anquantoukui = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //医用手套
    QTreeWidgetItem *tree_item_equipment_jewelry_yigongshoutao = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //睡猫硬币
    QTreeWidgetItem *tree_item_equipment_jewelry_shuimaoyingbi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //跳蛙硬币
    QTreeWidgetItem *tree_item_equipment_jewelry_tiaoxieyingbi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //神圣挂坠
    QTreeWidgetItem *tree_item_equipment_jewelry_shenshengguazhui = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //五彩风车
    QTreeWidgetItem *tree_item_equipment_jewelry_wucaifengche = new QTreeWidgetItem(tree_item_equipment_jewelry);

    //翠耀石挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_heiyaoshiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //苍耀石挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_cangyaoshiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //红耀石挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_hongyaoshiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //琥耀石挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_huyaoshiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //金耀石挂饰
    QTreeWidgetItem *tree_item_equipment_jewelry_jinyaoshiguashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //修利的帽子
    QTreeWidgetItem *tree_item_equipment_jewelry_xiulidemaozi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //芙兰的护符
    QTreeWidgetItem *tree_item_equipment_jewelry_fulandehufu = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //舞姬的发饰
    QTreeWidgetItem *tree_item_equipment_jewelry_wujidefashi = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //勇士之心
    QTreeWidgetItem *tree_item_equipment_jewelry_yongshizhixin = new QTreeWidgetItem(tree_item_equipment_jewelry);
    //零之神珠
    QTreeWidgetItem *tree_item_equipment_jewelry_lingzhishenzhu = new QTreeWidgetItem(tree_item_equipment_jewelry);

    /***********************************************************************************************/

    //HP1
    QTreeWidgetItem *tree_item_circuit_normal_hp1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //HP2
    QTreeWidgetItem *tree_item_circuit_normal_hp2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //HP3
    QTreeWidgetItem *tree_item_circuit_normal_hp3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //水耀珠
    QTreeWidgetItem *tree_item_circuit_normal_shuiyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //EP1
    QTreeWidgetItem *tree_item_circuit_normal_ep1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //EP2
    QTreeWidgetItem *tree_item_circuit_normal_ep2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //EP3
    QTreeWidgetItem *tree_item_circuit_normal_ep3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //银耀珠
    QTreeWidgetItem *tree_item_circuit_normal_yinyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //攻击1
    QTreeWidgetItem *tree_item_circuit_normal_gongji1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //攻击2
    QTreeWidgetItem *tree_item_circuit_normal_gongji2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //攻击3
    QTreeWidgetItem *tree_item_circuit_normal_gongji3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //红耀珠
    QTreeWidgetItem *tree_item_circuit_normal_hongyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //防御1
    QTreeWidgetItem *tree_item_circuit_normal_fangyu1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //防御2
    QTreeWidgetItem *tree_item_circuit_normal_fangyu2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //防御3
    QTreeWidgetItem *tree_item_circuit_normal_fangyu3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //琥耀珠
    QTreeWidgetItem *tree_item_circuit_normal_huyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //精神1
    QTreeWidgetItem *tree_item_circuit_normal_jingshen1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //精神2
    QTreeWidgetItem *tree_item_circuit_normal_jingshen2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //精神3
    QTreeWidgetItem *tree_item_circuit_normal_jingshen3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //白耀珠
    QTreeWidgetItem *tree_item_circuit_normal_baiyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //魔防1
    QTreeWidgetItem *tree_item_circuit_normal_mofang1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //魔防2
    QTreeWidgetItem *tree_item_circuit_normal_mofang2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //魔防3
    QTreeWidgetItem *tree_item_circuit_normal_mofang3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //苍耀珠
    QTreeWidgetItem *tree_item_circuit_normal_cangyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //命中1
    QTreeWidgetItem *tree_item_circuit_normal_mingzhong1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //命中2
    QTreeWidgetItem *tree_item_circuit_normal_mingzhong2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //命中3
    QTreeWidgetItem *tree_item_circuit_normal_mingzhong3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //光耀珠
    QTreeWidgetItem *tree_item_circuit_normal_guangyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //回避1
    QTreeWidgetItem *tree_item_circuit_normal_huibi1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //回避2
    QTreeWidgetItem *tree_item_circuit_normal_huibi2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //回避3
    QTreeWidgetItem *tree_item_circuit_normal_huibi3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //翠耀珠
    QTreeWidgetItem *tree_item_circuit_normal_cuiyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //移动1
    QTreeWidgetItem *tree_item_circuit_normal_yidong1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //移动2
    QTreeWidgetItem *tree_item_circuit_normal_yidong2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //风耀珠
    QTreeWidgetItem *tree_item_circuit_normal_fengyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //行动力1
    QTreeWidgetItem *tree_item_circuit_normal_xingdongli1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //行动力2
    QTreeWidgetItem *tree_item_circuit_normal_xingdongli2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //行动力3
    QTreeWidgetItem *tree_item_circuit_normal_xingdongli3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //黑耀珠
    QTreeWidgetItem *tree_item_circuit_normal_heiyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //妨害1
    QTreeWidgetItem *tree_item_circuit_normal_fangai1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //妨害2
    QTreeWidgetItem *tree_item_circuit_normal_fangai2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //绝耀珠
    QTreeWidgetItem *tree_item_circuit_normal_jueyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //驱动1
    QTreeWidgetItem *tree_item_circuit_normal_qudong1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //驱动2
    QTreeWidgetItem *tree_item_circuit_normal_qudong2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //刻耀珠
    QTreeWidgetItem *tree_item_circuit_normal_keyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);
    //省EP1
    QTreeWidgetItem *tree_item_circuit_normal_sheng_ep1 = new QTreeWidgetItem(tree_item_circuit_normal);
    //省EP2
    QTreeWidgetItem *tree_item_circuit_normal_sheng_ep2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //省EP3
    QTreeWidgetItem *tree_item_circuit_normal_sheng_ep3 = new QTreeWidgetItem(tree_item_circuit_normal);
    //金耀珠
    QTreeWidgetItem *tree_item_circuit_normal_jinyaozhu = new QTreeWidgetItem(tree_item_circuit_normal);

    //毒之刃
    QTreeWidgetItem *tree_item_circuit_normal_duzhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //石化之刃
    QTreeWidgetItem *tree_item_circuit_normal_shihuazhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //封魔之刃
    QTreeWidgetItem *tree_item_circuit_normal_fengmozhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //冻结之刃
    QTreeWidgetItem *tree_item_circuit_normal_dongjiezhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //封技之刃
    QTreeWidgetItem *tree_item_circuit_normal_fengjizhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //炎伤之刃
    QTreeWidgetItem *tree_item_circuit_normal_yanshangzhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //暗之刃
    QTreeWidgetItem *tree_item_circuit_normal_anzhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //睡眠之刃
    QTreeWidgetItem *tree_item_circuit_normal_shuimianzhiren = new QTreeWidgetItem(tree_item_circuit_normal);
    //混乱之刃
    QTreeWidgetItem *tree_item_circuit_normal_hunluanzhiren = new QTreeWidgetItem(tree_item_circuit_normal);

    //毒之刃2
    QTreeWidgetItem *tree_item_circuit_normal_duzhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //石化之刃2
    QTreeWidgetItem *tree_item_circuit_normal_shihuazhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //封魔之刃2
    QTreeWidgetItem *tree_item_circuit_normal_fengmozhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //冻结之刃2
    QTreeWidgetItem *tree_item_circuit_normal_dongjiezhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //封技之刃2
    QTreeWidgetItem *tree_item_circuit_normal_fengjizhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //炎伤之刃2
    QTreeWidgetItem *tree_item_circuit_normal_yanshangzhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //暗之刃2
    QTreeWidgetItem *tree_item_circuit_normal_anzhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //睡眠之刃2
    QTreeWidgetItem *tree_item_circuit_normal_shuimianzhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);
    //混乱之刃2
    QTreeWidgetItem *tree_item_circuit_normal_hunluanzhiren2 = new QTreeWidgetItem(tree_item_circuit_normal);

    //破剑之牙
    QTreeWidgetItem *tree_item_circuit_normal_pojianzhiya = new QTreeWidgetItem(tree_item_circuit_normal);
    //破盾之牙
    QTreeWidgetItem *tree_item_circuit_normal_podunzhiya = new QTreeWidgetItem(tree_item_circuit_normal);
    //破言之牙
    QTreeWidgetItem *tree_item_circuit_normal_poyanzhiya = new QTreeWidgetItem(tree_item_circuit_normal);
    //破灵之牙
    QTreeWidgetItem *tree_item_circuit_normal_polingzhiya = new QTreeWidgetItem(tree_item_circuit_normal);
    //破迅之牙
    QTreeWidgetItem *tree_item_circuit_normal_poxunzhiya = new QTreeWidgetItem(tree_item_circuit_normal);
    //破脚之牙
    QTreeWidgetItem *tree_item_circuit_normal_pojiaozhiya = new QTreeWidgetItem(tree_item_circuit_normal);

    //镇星铃
    QTreeWidgetItem *tree_item_circuit_normal_zhenxingling = new QTreeWidgetItem(tree_item_circuit_normal);
    //辰星铃
    QTreeWidgetItem *tree_item_circuit_normal_chenxingling = new QTreeWidgetItem(tree_item_circuit_normal);
    //焰星铃
    QTreeWidgetItem *tree_item_circuit_normal_yanxingling = new QTreeWidgetItem(tree_item_circuit_normal);
    //岁星铃
    QTreeWidgetItem *tree_item_circuit_normal_suixingling = new QTreeWidgetItem(tree_item_circuit_normal);
    //冥王铃
    QTreeWidgetItem *tree_item_circuit_normal_mingwangling = new QTreeWidgetItem(tree_item_circuit_normal);
    //天王铃
    QTreeWidgetItem *tree_item_circuit_normal_tianwangling = new QTreeWidgetItem(tree_item_circuit_normal);
    //明王铃
    QTreeWidgetItem *tree_item_circuit_normal_riyue_mingwangling = new QTreeWidgetItem(tree_item_circuit_normal);

    //耀脉
    QTreeWidgetItem *tree_item_circuit_normal_yaomai = new QTreeWidgetItem(tree_item_circuit_normal);
    //机功
    QTreeWidgetItem *tree_item_circuit_normal_jigong = new QTreeWidgetItem(tree_item_circuit_normal);
    //虎威
    QTreeWidgetItem *tree_item_circuit_normal_huwei = new QTreeWidgetItem(tree_item_circuit_normal);
    //治愈
    QTreeWidgetItem *tree_item_circuit_normal_zhiyu = new QTreeWidgetItem(tree_item_circuit_normal);
    //丹精
    QTreeWidgetItem *tree_item_circuit_normal_danjing = new QTreeWidgetItem(tree_item_circuit_normal);
    //炼气
    QTreeWidgetItem *tree_item_circuit_normal_lianqi = new QTreeWidgetItem(tree_item_circuit_normal);
    //龙眼
    QTreeWidgetItem *tree_item_circuit_normal_longyan = new QTreeWidgetItem(tree_item_circuit_normal);
    //恶戏
    QTreeWidgetItem *tree_item_circuit_normal_xie = new QTreeWidgetItem(tree_item_circuit_normal);
    //脱兔
    QTreeWidgetItem *tree_item_circuit_normal_tuotu = new QTreeWidgetItem(tree_item_circuit_normal);
    //美臭
    QTreeWidgetItem *tree_item_circuit_normal_choumei = new QTreeWidgetItem(tree_item_circuit_normal);
    //幸运
    QTreeWidgetItem *tree_item_circuit_normal_xingyun = new QTreeWidgetItem(tree_item_circuit_normal);
    //缚魔
    QTreeWidgetItem *tree_item_circuit_normal_fumo = new QTreeWidgetItem(tree_item_circuit_normal);
    //鹰目
    QTreeWidgetItem *tree_item_circuit_normal_yingmu = new QTreeWidgetItem(tree_item_circuit_normal);
    //天眼
    QTreeWidgetItem *tree_item_circuit_normal_tianyan = new QTreeWidgetItem(tree_item_circuit_normal);
    //范围
    QTreeWidgetItem *tree_item_circuit_normal_fanwei = new QTreeWidgetItem(tree_item_circuit_normal);
    //情报
    QTreeWidgetItem *tree_item_circuit_normal_qingbao = new QTreeWidgetItem(tree_item_circuit_normal);
    //探知
    QTreeWidgetItem *tree_item_circuit_normal_tanzhi = new QTreeWidgetItem(tree_item_circuit_normal);
    //幻胧
    QTreeWidgetItem *tree_item_circuit_normal_huanlong = new QTreeWidgetItem(tree_item_circuit_normal);

    //力量
    QTreeWidgetItem *tree_item_circuit_core_liliang = new QTreeWidgetItem(tree_item_circuit_core);
    //盾牌
    QTreeWidgetItem *tree_item_circuit_core_dunpai = new QTreeWidgetItem(tree_item_circuit_core);
    //妖精
    QTreeWidgetItem *tree_item_circuit_core_yaojing = new QTreeWidgetItem(tree_item_circuit_core);
    //利爪
    QTreeWidgetItem *tree_item_circuit_core_lizhua = new QTreeWidgetItem(tree_item_circuit_core);
    //白金
    QTreeWidgetItem *tree_item_circuit_core_baijin = new QTreeWidgetItem(tree_item_circuit_core);
    //幻象
    QTreeWidgetItem *tree_item_circuit_core_huanxiang = new QTreeWidgetItem(tree_item_circuit_core);
    //战斧
    QTreeWidgetItem *tree_item_circuit_core_zhanfu = new QTreeWidgetItem(tree_item_circuit_core);
    //法则
    QTreeWidgetItem *tree_item_circuit_core_faze = new QTreeWidgetItem(tree_item_circuit_core);
    //羽翼
    QTreeWidgetItem *tree_item_circuit_core_yuyi = new QTreeWidgetItem(tree_item_circuit_core);
    //神佑
    QTreeWidgetItem *tree_item_circuit_core_shenyou = new QTreeWidgetItem(tree_item_circuit_core);
    //王权
    QTreeWidgetItem *tree_item_circuit_core_wangquan = new QTreeWidgetItem(tree_item_circuit_core);
    //魅影
    QTreeWidgetItem *tree_item_circuit_core_meiying = new QTreeWidgetItem(tree_item_circuit_core);
    //守护
    QTreeWidgetItem *tree_item_circuit_core_shouhu = new QTreeWidgetItem(tree_item_circuit_core);
    //无限
    QTreeWidgetItem *tree_item_circuit_core_wuxian = new QTreeWidgetItem(tree_item_circuit_core);
    //小丑
    QTreeWidgetItem *tree_item_circuit_core_xiaochou = new QTreeWidgetItem(tree_item_circuit_core);
    //罪恶
    QTreeWidgetItem *tree_item_circuit_core_zuie = new QTreeWidgetItem(tree_item_circuit_core);
    //草薤
    QTreeWidgetItem *tree_item_circuit_core_caojian = new QTreeWidgetItem(tree_item_circuit_core);
    //纹章
    QTreeWidgetItem *tree_item_circuit_core_wenzhang = new QTreeWidgetItem(tree_item_circuit_core);
    //灵猫
    QTreeWidgetItem *tree_item_circuit_core_lingmao = new QTreeWidgetItem(tree_item_circuit_core);
    //骑士
    QTreeWidgetItem *tree_item_circuit_core_qishi = new QTreeWidgetItem(tree_item_circuit_core);
    //贤者
    QTreeWidgetItem *tree_item_circuit_core_xianzhe = new QTreeWidgetItem(tree_item_circuit_core);
    //草薤
    QTreeWidgetItem *tree_item_circuit_core_caojian_other = new QTreeWidgetItem(tree_item_circuit_core);

    //-----
    QTreeWidgetItem *tree_item_circuit_debug_unkonw_ = new QTreeWidgetItem(tree_item_circuit_debug);
    //物理吸收
    QTreeWidgetItem *tree_item_circuit_debug_wulixishou = new QTreeWidgetItem(tree_item_circuit_debug);
    //魔法吸收
    QTreeWidgetItem *tree_item_circuit_debug_mofaxishou = new QTreeWidgetItem(tree_item_circuit_debug);
    //物理反射
    QTreeWidgetItem *tree_item_circuit_debug_wulifanshe = new QTreeWidgetItem(tree_item_circuit_debug);
    //魔法反射
    QTreeWidgetItem *tree_item_circuit_debug_mofafanshe = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%毒之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_duzhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%石化之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_shihuazhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%封魔之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_fengmozhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%冻结之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_dongjiezhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%封技之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_fengjizhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%炎伤之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_yanshangzhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%黑暗之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_heianzhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%睡眠之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_shuimianzhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%混乱之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_hunluanzhiren = new QTreeWidgetItem(tree_item_circuit_debug);
    //100%即死之刃
    QTreeWidgetItem *tree_item_circuit_debug_fixed_jisizhiren = new QTreeWidgetItem(tree_item_circuit_debug);

    /***********************************************************************************************/

    //受损的警察徽章
    QTreeWidgetItem *tree_item_event_story_shousundejingchahuizhang = new QTreeWidgetItem(tree_item_event_story);
    //伊梅尔达馆的钥匙
    QTreeWidgetItem *tree_item_event_story_yimeierdaguandedeyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //地下空间B区域的钥匙
    QTreeWidgetItem *tree_item_event_story_dixiakongjian_b_quyudeyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //旧矿山的钥匙
    QTreeWidgetItem *tree_item_event_story_jiukuangshandeyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //lBC认证卡片
    QTreeWidgetItem *tree_item_event_story_ibc_renzhengkapian = new QTreeWidgetItem(tree_item_event_story);
    //梅琳的伞
    QTreeWidgetItem *tree_item_event_story_meilindesan = new QTreeWidgetItem(tree_item_event_story);
    //IBC贵宾卡片
    QTreeWidgetItem *tree_item_event_story_ibc_guibinka = new QTreeWidgetItem(tree_item_event_story);
    //废弃材料
    QTreeWidgetItem *tree_item_event_story_feiqicailiao = new QTreeWidgetItem(tree_item_event_story);
    //纯白之石[大]
    QTreeWidgetItem *tree_item_event_story_chunbaizhishi_da = new QTreeWidgetItem(tree_item_event_story);
    //纯白之石[中]
    QTreeWidgetItem *tree_item_event_story_chunbaizhishi_zhong = new QTreeWidgetItem(tree_item_event_story);
    //纯白之石[小]
    QTreeWidgetItem *tree_item_event_story_chunbaizhishi_xiao = new QTreeWidgetItem(tree_item_event_story);
    //尼克鲁的问诊表
    QTreeWidgetItem *tree_item_event_story_nikeludewenzhenbiao = new QTreeWidgetItem(tree_item_event_story);
    //迪诺的问诊表
    QTreeWidgetItem *tree_item_event_story_ninuodewenzhenbiao = new QTreeWidgetItem(tree_item_event_story);
    //库雷斯队员的问诊表
    QTreeWidgetItem *tree_item_event_story_kuleisiduiyuandewenzhenbiao = new QTreeWidgetItem(tree_item_event_story);
    //沉重货物
    QTreeWidgetItem *tree_item_event_story_chenzhonghuowu = new QTreeWidgetItem(tree_item_event_story);
    //易碎品的小包裹
    QTreeWidgetItem *tree_item_event_story_yisuiwupindexiaobaoguo = new QTreeWidgetItem(tree_item_event_story);
    //发往住宅街的送货单
    QTreeWidgetItem *tree_item_event_story_fawangzhuzhaijiedesonghuodan = new QTreeWidgetItem(tree_item_event_story);
    //蓝花
    QTreeWidgetItem *tree_item_event_story_lanhua = new QTreeWidgetItem(tree_item_event_story);
    //结晶碎片
    QTreeWidgetItem *tree_item_event_story_jiejingsuipian = new QTreeWidgetItem(tree_item_event_story);
    //罗赞贝尔克人偶．C
    QTreeWidgetItem *tree_item_event_story_luozanbeierkerenou_c = new QTreeWidgetItem(tree_item_event_story);
    //罗赞贝尔克人偶．R
    QTreeWidgetItem *tree_item_event_story_luozanbeierkerenou_r = new QTreeWidgetItem(tree_item_event_story);
    //罗赞贝尔克人偶．M
    QTreeWidgetItem *tree_item_event_story_luozanbeierkerenou_m = new QTreeWidgetItem(tree_item_event_story);
    //罗赞贝尔克人偶．S
    QTreeWidgetItem *tree_item_event_story_luozanbeierkerenou_s = new QTreeWidgetItem(tree_item_event_story);
    //波波碰！β版
    QTreeWidgetItem *tree_item_event_story_bobopeng_b_ban = new QTreeWidgetItem(tree_item_event_story);
    //小箱子
    QTreeWidgetItem *tree_item_event_story_xiaoxiangzi = new QTreeWidgetItem(tree_item_event_story);
    //月之宝珠
    QTreeWidgetItem *tree_item_event_story_yuezhibaozhu = new QTreeWidgetItem(tree_item_event_story);
    //星之光玉
    QTreeWidgetItem *tree_item_event_story_xingzhibaozhu = new QTreeWidgetItem(tree_item_event_story);
    //苦西红柿酱
    QTreeWidgetItem *tree_item_event_story_kuxihongshijiang = new QTreeWidgetItem(tree_item_event_story);
    //选秀活动特别奖纪念盾[艾莉]
    QTreeWidgetItem *tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_aili = new QTreeWidgetItem(tree_item_event_story);
    //选秀活动特别奖纪念盾[提欧]
    QTreeWidgetItem *tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_tiou = new QTreeWidgetItem(tree_item_event_story);
    //选秀活动特别奖纪念盾[诺埃尔]
    QTreeWidgetItem *tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_nuoaier = new QTreeWidgetItem(tree_item_event_story);
    //绀碧竿
    QTreeWidgetItem *tree_item_event_story_ganbigan = new QTreeWidgetItem(tree_item_event_story);
    //琥珀轴
    QTreeWidgetItem *tree_item_event_story_hupozhou = new QTreeWidgetItem(tree_item_event_story);
    //翡翠线
    QTreeWidgetItem *tree_item_event_story_feicuixian = new QTreeWidgetItem(tree_item_event_story);
    //红莲钩
    QTreeWidgetItem *tree_item_event_story_hongliangou = new QTreeWidgetItem(tree_item_event_story);
    //支援科车辆钥匙
    QTreeWidgetItem *tree_item_event_story_zhiyuankecheliangyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //米修拉姆·奇幻乐园游乐券
    QTreeWidgetItem *tree_item_event_story_mixiulamu_qihuanleyuanyoulejuan = new QTreeWidgetItem(tree_item_event_story);
    //临时认证卡片
    QTreeWidgetItem *tree_item_event_story_linshirenzhengkapian = new QTreeWidgetItem(tree_item_event_story);
    //金属探测器
    QTreeWidgetItem *tree_item_event_story_jinshutanceqi = new QTreeWidgetItem(tree_item_event_story);
    //银耀石钥匙
    QTreeWidgetItem *tree_item_event_story_yinyaoshiyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //金耀石钥匙
    QTreeWidgetItem *tree_item_event_story_jinyaoshiyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //黑耀石钥匙
    QTreeWidgetItem *tree_item_event_story_heiyaoshiyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //红色卡片钥匙
    QTreeWidgetItem *tree_item_event_story_hongsekapianyaoshi = new QTreeWidgetItem(tree_item_event_story);
    //U材料
    QTreeWidgetItem *tree_item_event_story_u_cailiao = new QTreeWidgetItem(tree_item_event_story);
    //塞姆里亚石碎片
    QTreeWidgetItem *tree_item_event_story_saimuliyashisuipian = new QTreeWidgetItem(tree_item_event_story);
    //神圣布料
    QTreeWidgetItem *tree_item_event_story_shenshengbuliao = new QTreeWidgetItem(tree_item_event_story);
    //塞姆里亚石
    QTreeWidgetItem *tree_item_event_story_saimuliyashi = new QTreeWidgetItem(tree_item_event_story);

    //迷你沙袋
    QTreeWidgetItem *tree_item_event_furnishing_minishadai = new QTreeWidgetItem(tree_item_event_furnishing);
    //特里斯坦号
    QTreeWidgetItem *tree_item_event_furnishing_telisitanhao = new QTreeWidgetItem(tree_item_event_furnishing);
    //优雅衣镜
    QTreeWidgetItem *tree_item_event_furnishing_youyashiyijing = new QTreeWidgetItem(tree_item_event_furnishing);
    //八音盒
    QTreeWidgetItem *tree_item_event_furnishing_bayinhe = new QTreeWidgetItem(tree_item_event_furnishing);
    //影丸储蓄罐
    QTreeWidgetItem *tree_item_event_furnishing_yingwanchuxuguan = new QTreeWidgetItem(tree_item_event_furnishing);
    //咪雪玩偶
    QTreeWidgetItem *tree_item_event_furnishing_mixuewanou = new QTreeWidgetItem(tree_item_event_furnishing);
    //冲浪板
    QTreeWidgetItem *tree_item_event_furnishing_chonglangban = new QTreeWidgetItem(tree_item_event_furnishing);
    //点唱机
    QTreeWidgetItem *tree_item_event_furnishing_diangeji = new QTreeWidgetItem(tree_item_event_furnishing);
    //竞赛旗
    QTreeWidgetItem *tree_item_event_furnishing_jingsaiqi = new QTreeWidgetItem(tree_item_event_furnishing);
    //小径自行车
    QTreeWidgetItem *tree_item_event_furnishing_xiaojingzixingche = new QTreeWidgetItem(tree_item_event_furnishing);
    //安乐椅
    QTreeWidgetItem *tree_item_event_furnishing_anleyi = new QTreeWidgetItem(tree_item_event_furnishing);
    //迷你水族馆
    QTreeWidgetItem *tree_item_event_furnishing_minishuizuguan = new QTreeWidgetItem(tree_item_event_furnishing);
    //古怪靠垫
    QTreeWidgetItem *tree_item_event_furnishing_guguaikaodian = new QTreeWidgetItem(tree_item_event_furnishing);
    //波波靠垫
    QTreeWidgetItem *tree_item_event_furnishing_bobokaodian = new QTreeWidgetItem(tree_item_event_furnishing);
    //黑泰迪熊
    QTreeWidgetItem *tree_item_event_furnishing_heitaidixuong = new QTreeWidgetItem(tree_item_event_furnishing);
    //苦番茄人玩偶
    QTreeWidgetItem *tree_item_event_furnishing_kufanqiewanou = new QTreeWidgetItem(tree_item_event_furnishing);
    //ZWEI2企鹅
    QTreeWidgetItem *tree_item_event_furnishing_zwei2_qie = new QTreeWidgetItem(tree_item_event_furnishing);

    //挡泥板
    QTreeWidgetItem *tree_item_event_car_dangniban = new QTreeWidgetItem(tree_item_event_car);
    //侧踏板
    QTreeWidgetItem *tree_item_event_car_cetaban = new QTreeWidgetItem(tree_item_event_car);
    //尾翼
    QTreeWidgetItem *tree_item_event_car_weiyi = new QTreeWidgetItem(tree_item_event_car);
    //前保险杠
    QTreeWidgetItem *tree_item_event_car_qianbaoxiangang = new QTreeWidgetItem(tree_item_event_car);
    //警灯
    QTreeWidgetItem *tree_item_event_car_jingddeng = new QTreeWidgetItem(tree_item_event_car);
    //强化轮圈
    QTreeWidgetItem *tree_item_event_car_qianghualunquan = new QTreeWidgetItem(tree_item_event_car);
    //HP回复装置
    QTreeWidgetItem *tree_item_event_car_hp_huifuzhuangzhi = new QTreeWidgetItem(tree_item_event_car);
    //EP回复装置
    QTreeWidgetItem *tree_item_event_car_ep_huifuzhuangzhi = new QTreeWidgetItem(tree_item_event_car);
    //CP回复装置
    QTreeWidgetItem *tree_item_event_car_cp_huifuzhuangzhi = new QTreeWidgetItem(tree_item_event_car);
    //CPD主题
    QTreeWidgetItem *tree_item_event_car_cpd_zhuti = new QTreeWidgetItem(tree_item_event_car);
    //咪西主题
    QTreeWidgetItem *tree_item_event_car_mixizhuti = new QTreeWidgetItem(tree_item_event_car);
    //人物主题E
    QTreeWidgetItem *tree_item_event_car_renwuzhuti_e = new QTreeWidgetItem(tree_item_event_car);
    //人物主题T
    QTreeWidgetItem *tree_item_event_car_renwuzhuti_t = new QTreeWidgetItem(tree_item_event_car);
    //天空色彩
    QTreeWidgetItem *tree_item_event_car_tiankongsecai = new QTreeWidgetItem(tree_item_event_car);
    //高贵色彩
    QTreeWidgetItem *tree_item_event_car_gaoguisecai = new QTreeWidgetItem(tree_item_event_car);
    //魅力色彩
    QTreeWidgetItem *tree_item_event_car_meilisecai = new QTreeWidgetItem(tree_item_event_car);
    //狂野色彩
    QTreeWidgetItem *tree_item_event_car_kuangyesecai = new QTreeWidgetItem(tree_item_event_car);
    //凉爽色彩
    QTreeWidgetItem *tree_item_event_car_liangshuangsecai = new QTreeWidgetItem(tree_item_event_car);
    //警备色彩
    QTreeWidgetItem *tree_item_event_car_jingbeisecai = new QTreeWidgetItem(tree_item_event_car);
    //轻快色彩
    QTreeWidgetItem *tree_item_event_car_qingkuaisecai = new QTreeWidgetItem(tree_item_event_car);
    //闪耀色彩
    QTreeWidgetItem *tree_item_event_car_shanyaosecai = new QTreeWidgetItem(tree_item_event_car);
    //深暗色彩
    QTreeWidgetItem *tree_item_event_car_shenansecai = new QTreeWidgetItem(tree_item_event_car);

    /***********************************************************************************************/

    //魔兽兽肉
    QTreeWidgetItem *tree_item_food_moshoushourou = new QTreeWidgetItem(tree_item_food);
    //魔兽鱼肉
    QTreeWidgetItem *tree_item_food_moshouyurou = new QTreeWidgetItem(tree_item_food);
    //魔兽之壳
    QTreeWidgetItem *tree_item_food_moshouzhike = new QTreeWidgetItem(tree_item_food);
    //魔兽之卵
    QTreeWidgetItem *tree_item_food_moshouzhiluan = new QTreeWidgetItem(tree_item_food);
    //魔兽羽翼
    QTreeWidgetItem *tree_item_food_moshouyuyi = new QTreeWidgetItem(tree_item_food);
    //魔兽之种
    QTreeWidgetItem *tree_item_food_moshouzhizhong = new QTreeWidgetItem(tree_item_food);
    //魔兽明胶
    QTreeWidgetItem *tree_item_food_moshoumingjiao = new QTreeWidgetItem(tree_item_food);
    //发芽糙米
    QTreeWidgetItem *tree_item_food_fayacaomi = new QTreeWidgetItem(tree_item_food);
    //五谷味增
    QTreeWidgetItem *tree_item_food_wuguweizeng = new QTreeWidgetItem(tree_item_food);
    //百药精酒
    QTreeWidgetItem *tree_item_food_baiyaoqingjiu = new QTreeWidgetItem(tree_item_food);
    //朝摘香叶
    QTreeWidgetItem *tree_item_food_zhaozhaixiangye = new QTreeWidgetItem(tree_item_food);
    //清绿香草
    QTreeWidgetItem *tree_item_food_qinglvxiangcao = new QTreeWidgetItem(tree_item_food);
    //胡椒粒
    QTreeWidgetItem *tree_item_food_hujiaoli = new QTreeWidgetItem(tree_item_food);
    //热辣椒
    QTreeWidgetItem *tree_item_food_relajiao = new QTreeWidgetItem(tree_item_food);
    //香油
    QTreeWidgetItem *tree_item_food_xiangyou = new QTreeWidgetItem(tree_item_food);
    //蜂蜜糖浆
    QTreeWidgetItem *tree_item_food_fengmitangjiang = new QTreeWidgetItem(tree_item_food);
    //粗碎岩盐
    QTreeWidgetItem *tree_item_food_cusuiyanyan = new QTreeWidgetItem(tree_item_food);
    //新磨小麦粉
    QTreeWidgetItem *tree_item_food_xinmoxiaomaifen = new QTreeWidgetItem(tree_item_food);
    //新鲜牛奶
    QTreeWidgetItem *tree_item_food_xinxianniunai = new QTreeWidgetItem(tree_item_food);
    //新鲜奶酪
    QTreeWidgetItem *tree_item_food_xinxiannailao = new QTreeWidgetItem(tree_item_food);
    //新鲜鸡蛋
    QTreeWidgetItem *tree_item_food_xinxianjidan = new QTreeWidgetItem(tree_item_food);
    //铃铛草莓
    QTreeWidgetItem *tree_item_food_lingdangcaomei = new QTreeWidgetItem(tree_item_food);
    //黑暗菇
    QTreeWidgetItem *tree_item_food_heiangu = new QTreeWidgetItem(tree_item_food);
    //七彩豆
    QTreeWidgetItem *tree_item_food_qicaidou = new QTreeWidgetItem(tree_item_food);
    //国王马铃薯
    QTreeWidgetItem *tree_item_food_guowangmalingshu = new QTreeWidgetItem(tree_item_food);
    //万能青葱
    QTreeWidgetItem *tree_item_food_wannengqingcong = new QTreeWidgetItem(tree_item_food);
    //迷你胡萝卜
    QTreeWidgetItem *tree_item_food_minihuluobu = new QTreeWidgetItem(tree_item_food);
    //苦西红柿
    QTreeWidgetItem *tree_item_food_kuxihongshi = new QTreeWidgetItem(tree_item_food);
    //雪花里脊肉
    QTreeWidgetItem *tree_item_food_xuehualijirou = new QTreeWidgetItem(tree_item_food);
    //新鲜白鱼肉
    QTreeWidgetItem *tree_item_food_xinxianbaiyurou = new QTreeWidgetItem(tree_item_food);

    /***********************************************************************************************/

    //调查手册
    QTreeWidgetItem *tree_item_book_diaochashouce = new QTreeWidgetItem(tree_item_book);
    //料理手册
    QTreeWidgetItem *tree_item_book_liaolishouce = new QTreeWidgetItem(tree_item_book);
    //钓鱼手册
    QTreeWidgetItem *tree_item_book_diaoyushouce = new QTreeWidgetItem(tree_item_book);
    //战斗手册
    QTreeWidgetItem *tree_item_book_zhandoushouce = new QTreeWidgetItem(tree_item_book);
    //自治州地图
    QTreeWidgetItem *tree_item_book_zizhizhouditu = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔市的地图
    QTreeWidgetItem *tree_item_book_keluosibeiershideditu = new QTreeWidgetItem(tree_item_book);
    //战术书·击
    QTreeWidgetItem *tree_item_book_zhanshushu_ji = new QTreeWidgetItem(tree_item_book);
    //战术书·十
    QTreeWidgetItem *tree_item_book_zhanshushu_shi = new QTreeWidgetItem(tree_item_book);
    //战术书·苍
    QTreeWidgetItem *tree_item_book_zhanshushu_cang = new QTreeWidgetItem(tree_item_book);
    //战术书·袭
    QTreeWidgetItem *tree_item_book_zhanshushu_xi = new QTreeWidgetItem(tree_item_book);
    //战术书·虚
    QTreeWidgetItem *tree_item_book_zhanshushu_xu = new QTreeWidgetItem(tree_item_book);
    //战术书·爆
    QTreeWidgetItem *tree_item_book_zhanshushu_bao = new QTreeWidgetItem(tree_item_book);
    //战术书·里
    QTreeWidgetItem *tree_item_book_zhanshushu_li = new QTreeWidgetItem(tree_item_book);
    //战术书·升
    QTreeWidgetItem *tree_item_book_zhanshushu_sheng = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊①
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_1 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊②
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_2 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊③
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_3 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊号外
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_haowai = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊④
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_4 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑤
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_5 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑥
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_6 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑦
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_7 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑧
    QTreeWidgetItem *tree_item_book_old_keluosibeiershidaizhoukan_8 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 1卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_1 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 2卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_2 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 3卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_3 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 4卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_4 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 5卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_5 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 6卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_6 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 7卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_7 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 8卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_8 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 9卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_9 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 10卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_10 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 11卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_11 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 12卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_12 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 13卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_13 = new QTreeWidgetItem(tree_item_book);
    //黑市医生格伦 14卷
    QTreeWidgetItem *tree_item_book_heishiyishenggelun_14 = new QTreeWidgetItem(tree_item_book);
    //铁道爱好者的推荐
    QTreeWidgetItem *tree_item_book_tiedaoaihaozhedetuijian = new QTreeWidgetItem(tree_item_book);
    //玛尔克与森林深处的魔女们·上
    QTreeWidgetItem *tree_item_book_maerkeyusenlinshenchudemonvmen_shang = new QTreeWidgetItem(tree_item_book);
    //玛尔克与森林深处的魔女们·中
    QTreeWidgetItem *tree_item_book_maerkeyusenlinshenchudemonvmen_zhong = new QTreeWidgetItem(tree_item_book);
    //玛尔克与森林深处的魔女们·下
    QTreeWidgetItem *tree_item_book_maerkeyusenlinshenchudemonvmen_xia = new QTreeWidgetItem(tree_item_book);
    //改变大陆的美人们
    QTreeWidgetItem *tree_item_book_gaibiandaludemeirenmen = new QTreeWidgetItem(tree_item_book);
    //有效利用五分钟零散时间
    QTreeWidgetItem *tree_item_book_youxiaoliyongwufenzhonglingsanshijian = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔怪谈全集
    QTreeWidgetItem *tree_item_book_keluosibeierguaitanquanji = new QTreeWidgetItem(tree_item_book);
    //彩虹·Funbook
    QTreeWidgetItem *tree_item_book_caihong_fanbook = new QTreeWidgetItem(tree_item_book);
    //圣女与白狼·上
    QTreeWidgetItem *tree_item_book_shengnvyubailang_shang = new QTreeWidgetItem(tree_item_book);
    //圣女与白狼·下
    QTreeWidgetItem *tree_item_book_shengnvyubailang_xia = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑴
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_1 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑵
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_2 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑶
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_3 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑷
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_4 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑸
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_5 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑹
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_6 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑺
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_7 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑻
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_8 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑨
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_9 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊号外
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_haowai = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑽
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_10 = new QTreeWidgetItem(tree_item_book);
    //克洛斯贝尔时代周刊⑾
    QTreeWidgetItem *tree_item_book_keluosibeiershidaizhoukan_11 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 1卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_1 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 2卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_2 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 3卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_3 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 4卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_4 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 5卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_5 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 6卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_6 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 7卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_7 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 8卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_8 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 9卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_9 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 10卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_10 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 11卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_11 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 12卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_12 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 13卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_13 = new QTreeWidgetItem(tree_item_book);
    //沐浴阳光的阿尼艾斯 14卷
    QTreeWidgetItem *tree_item_book_muyuyangguangdeainiaisi_14 = new QTreeWidgetItem(tree_item_book);
    //幻兽调查报告书
    QTreeWidgetItem *tree_item_book_huanshoudiaochabaogaoshu = new QTreeWidgetItem(tree_item_book);

    /***********************************************************************************************/

    //鲑鱼卵
    QTreeWidgetItem *tree_item_fishing_bait_guiyuluan = new QTreeWidgetItem(tree_item_fishing_bait);
    //熬炼丸子
    QTreeWidgetItem *tree_item_fishing_bait_aolianwanzi = new QTreeWidgetItem(tree_item_fishing_bait);
    //红虫
    QTreeWidgetItem *tree_item_fishing_bait_hongchong = new QTreeWidgetItem(tree_item_fishing_bait);
    //蚯蚓
    QTreeWidgetItem *tree_item_fishing_bait_qiuyin = new QTreeWidgetItem(tree_item_fishing_bait);
    //熬炼丸子DX
    QTreeWidgetItem *tree_item_fishing_bait_alianwanziex = new QTreeWidgetItem(tree_item_fishing_bait);
    //虹丸EX
    QTreeWidgetItem *tree_item_fishing_bait_hongwanex = new QTreeWidgetItem(tree_item_fishing_bait);
    //垂钓大礼包
    QTreeWidgetItem *tree_item_fishing_bait_chuidiaodalibao = new QTreeWidgetItem(tree_item_fishing_bait);

    //斗鱼
    QTreeWidgetItem *tree_item_fishing_fish_douyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //雪花蟹
    QTreeWidgetItem *tree_item_fishing_fish_xuehuaxie = new QTreeWidgetItem(tree_item_fishing_fish);
    //蓝带神仙鱼
    QTreeWidgetItem *tree_item_fishing_fish_landaishenxianyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //银伞鱼
    QTreeWidgetItem *tree_item_fishing_fish_yinsanyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //阿尔摩里卡鲫鱼
    QTreeWidgetItem *tree_item_fishing_fish_aermolikajiyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //乌龟
    QTreeWidgetItem *tree_item_fishing_fish_wugui = new QTreeWidgetItem(tree_item_fishing_fish);
    //橙河鱼
    QTreeWidgetItem *tree_item_fishing_fish_chengheyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //岩穴鱼
    QTreeWidgetItem *tree_item_fishing_fish_yanxueyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //虹鳟鱼
    QTreeWidgetItem *tree_item_fishing_fish_hongzunyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //食人鱼
    QTreeWidgetItem *tree_item_fishing_fish_shirenyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //鲤鱼
    QTreeWidgetItem *tree_item_fishing_fish_liyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //大口鲈鱼
    QTreeWidgetItem *tree_item_fishing_fish_dakouluyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //黑鲑
    QTreeWidgetItem *tree_item_fishing_fish_heigui = new QTreeWidgetItem(tree_item_fishing_fish);
    //角斗鱼
    QTreeWidgetItem *tree_item_fishing_fish_jiaodouyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //冷水鱼
    QTreeWidgetItem *tree_item_fishing_fish_lengshuiyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //小鲵
    QTreeWidgetItem *tree_item_fishing_fish_xiaoni = new QTreeWidgetItem(tree_item_fishing_fish);
    //鲑鱼
    QTreeWidgetItem *tree_item_fishing_fish_guiyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //金龙鱼
    QTreeWidgetItem *tree_item_fishing_fish_jinlongyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //鳗鲡
    QTreeWidgetItem *tree_item_fishing_fish_manli = new QTreeWidgetItem(tree_item_fishing_fish);
    //钢壳龟
    QTreeWidgetItem *tree_item_fishing_fish_gangkegui = new QTreeWidgetItem(tree_item_fishing_fish);
    //巨血蟹
    QTreeWidgetItem *tree_item_fishing_fish_juxuegui = new QTreeWidgetItem(tree_item_fishing_fish);
    //珍珠龙鱼
    QTreeWidgetItem *tree_item_fishing_fish_zhenzhulongyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //巨鲶
    QTreeWidgetItem *tree_item_fishing_fish_junian = new QTreeWidgetItem(tree_item_fishing_fish);
    //金鲑
    QTreeWidgetItem *tree_item_fishing_fish_jingui = new QTreeWidgetItem(tree_item_fishing_fish);
    //大鲵
    QTreeWidgetItem *tree_item_fishing_fish_dani = new QTreeWidgetItem(tree_item_fishing_fish);
    //锦鲤
    QTreeWidgetItem *tree_item_fishing_fish_jinli = new QTreeWidgetItem(tree_item_fishing_fish);
    //翠耀神仙鱼
    QTreeWidgetItem *tree_item_fishing_fish_cuiyaoshenxianyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //琥耀岩穴鱼
    QTreeWidgetItem *tree_item_fishing_fish_huyaoyanxueyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //红耀食人鱼
    QTreeWidgetItem *tree_item_fishing_fish_hongyaoshirenyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //苍耀巨龙鱼
    QTreeWidgetItem *tree_item_fishing_fish_cangyaojulongyu = new QTreeWidgetItem(tree_item_fishing_fish);
    //巨骨龙鱼皇
    QTreeWidgetItem *tree_item_fishing_fish_jugulongyuhuang = new QTreeWidgetItem(tree_item_fishing_fish);

    //初级杆
    QTreeWidgetItem *tree_item_fishing_rod_chujigan = new QTreeWidgetItem(tree_item_fishing_rod);
    //小巧射手
    QTreeWidgetItem *tree_item_fishing_rod_xiaoqiaosheshou = new QTreeWidgetItem(tree_item_fishing_rod);
    //竹竿
    QTreeWidgetItem *tree_item_fishing_rod_zhugan = new QTreeWidgetItem(tree_item_fishing_rod);
    //钢竿侵略者
    QTreeWidgetItem *tree_item_fishing_rod_gangganqinluezhe = new QTreeWidgetItem(tree_item_fishing_rod);
    //水中支配者
    QTreeWidgetItem *tree_item_fishing_rod_shuizhongzhipeizhe = new QTreeWidgetItem(tree_item_fishing_rod);


    /*******************************************************************************************************************************************/

    tree_item_list_props_normal
            << tree_item_props_normal_huifuyao
            << tree_item_props_normal_zhonghuifuyao
            << tree_item_props_normal_dahuifuyao
            << tree_item_props_normal_quanhuifuyao
            << tree_item_props_normal_rp_tianchongjiI
            << tree_item_props_normal_rp_tianchongjiII
            << tree_item_props_normal_rp_tianchongjiIII
            << tree_item_props_normal_fusuyao
            << tree_item_props_normal_shenglingyao
            << tree_item_props_normal_shenglingyao_gai
            << tree_item_props_normal_huanhunfen
            << tree_item_props_normal_huanhunjiaonang
            << tree_item_props_normal_jieduyao
            << tree_item_props_normal_ruanhuagao
            << tree_item_props_normal_jueyuanjiaodai
            << tree_item_props_normal_jiedongnuanlu
            << tree_item_props_normal_shuhuanningjiao
            << tree_item_props_normal_lengquepenwu
            << tree_item_props_normal_yanyao
            << tree_item_props_normal_tishenbohe
            << tree_item_props_normal_suxingyao
            << tree_item_props_normal_zhenjingji
            << tree_item_props_normal_s_yaopian
            << tree_item_props_normal_quanyuzhiyao
            << tree_item_props_normal_baolingbaoyu
            << tree_item_props_normal_yanwudan
            << tree_item_props_normal_zhandoutanceqi
            << tree_item_props_normal_fengtangdangao
            << tree_item_props_normal_shangyuemianbao
            << tree_item_props_normal_naiyouboluobao
            << tree_item_props_normal_beinaitejuepin
            << tree_item_props_normal_jihouzhupaisanmingzhi
            << tree_item_props_normal_zuizhonglvtu
            << tree_item_props_normal_mixibaozi
            << tree_item_props_normal_mixuewanzi
            << tree_item_props_normal_guanzhuangguozhi
            << tree_item_props_normal_guanzhuangkafei
            << tree_item_props_normal_qiangzhuangkufanqiezhugutang
            << tree_item_props_normal_nuanxinzhugutang
            << tree_item_props_normal_yundongqishuix
            << tree_item_props_normal_kuxihongshisuda
               ;

    tree_item_list_props_cooking
            << tree_item_props_cooking_tianshangmian_rilun
            << tree_item_props_cooking_weikudandanmian
            << tree_item_props_cooking_jikumian_duantou
            << tree_item_props_cooking_shenxianmapo_qilin
            << tree_item_props_cooking_yaoshanmapodoufu
            << tree_item_props_cooking_lianyumapo_yanmo
            << tree_item_props_cooking_tianxiayipinchaofan
            << tree_item_props_cooking_longlaochaofan
            << tree_item_props_cooking_zaseguobafan
            << tree_item_props_cooking_jipinniupai_gang
            << tree_item_props_cooking_jingliniupai
            << tree_item_props_cooking_wanguroupai_yan
            << tree_item_props_cooking_sanrijiuzhuduncai
            << tree_item_props_cooking_jiuzhuduncan
            << tree_item_props_cooking_hundunjiuzhu_zhuo
            << tree_item_props_cooking_dadiguo_lanman
            << tree_item_props_cooking_dabaokoufuguo
            << tree_item_props_cooking_nanrenliaoli_shan
            << tree_item_props_cooking_tianheguo_xiangyun
            << tree_item_props_cooking_fangchunchaoguo
            << tree_item_props_cooking_nanrenliaoli_chuan
            << tree_item_props_cooking_tekuaizhayu
            << tree_item_props_cooking_zhayupai
            << tree_item_props_cooking_jianzhiyu
            << tree_item_props_cooking_fengshengdanbaofan
            << tree_item_props_cooking_dashidanbaofan
            << tree_item_props_cooking_jilazhadandanbaofan
            << tree_item_props_cooking_cuiyumian_zhiyu
            << tree_item_props_cooking_xiangcaomian
            << tree_item_props_cooking_zhenximian
            << tree_item_props_cooking_shuangcenghanbao
            << tree_item_props_cooking_wucanhanbao
            << tree_item_props_cooking_kuweihanbao
            << tree_item_props_cooking_siweunailaobisa
            << tree_item_props_cooking_nailaobisa
            << tree_item_props_cooking_sichongfanqiebisa
            << tree_item_props_cooking_qiangxiaosanmingzhi
            << tree_item_props_cooking_xianmeisanmingzhi
            << tree_item_props_cooking_shouhusanmingzhi
            << tree_item_props_cooking_zhenxinfanhe_cheng
            << tree_item_props_cooking_xingleniuwucanfanhe
            << tree_item_props_cooking_bukesiyihefan_yangtian
            << tree_item_props_cooking_huihuangtang
            << tree_item_props_cooking_naiyounongtang
            << tree_item_props_cooking_qimiaotang
            << tree_item_props_cooking_qihuantangguo
            << tree_item_props_cooking_qisemianhuatang
            << tree_item_props_cooking_mimibaomihua
            << tree_item_props_cooking_tianshangtiandian_yeyue
            << tree_item_props_cooking_xiangtianqiaokelidangao
            << tree_item_props_cooking_fansheqiaokelidangao
            << tree_item_props_cooking_baowutiandian_baixue
            << tree_item_props_cooking_hualiuxingrendoufu
            << tree_item_props_cooking_shuangtanbuding
            << tree_item_props_cooking_bingliangtiandian_qicai
            << tree_item_props_cooking_hunhebingjiling
            << tree_item_props_cooking_zhiyubingjiling
            << tree_item_props_cooking_juepintiandian_shundong
            << tree_item_props_cooking_qingkuaibaomihua
            << tree_item_props_cooking_yinmibaomihua
            << tree_item_props_cooking_yulu_lvfeng
            << tree_item_props_cooking_kaojiumochanatie
            << tree_item_props_cooking_liangyao_xingzhu
            << tree_item_props_cooking_ganlu_zigan
            << tree_item_props_cooking_lingdangcaomeiguozhi
            << tree_item_props_cooking_ziseyeti
            << tree_item_props_cooking_heicha_mengyanshashou
            << tree_item_props_cooking_nonghoukabuqinuo
            << tree_item_props_cooking_juseyeti
            << tree_item_props_cooking_mishui_taoyuanxiang
            << tree_item_props_cooking_taoseziwei
            << tree_item_props_cooking_fenhongyeti
            << tree_item_props_cooking_shibaizuo_yinyiweijie
            << tree_item_props_cooking_maoshi
               ;

    tree_item_list_equipment_weapon_generic
            << tree_item_equipment_weapon_lianxiyongwuqi
               ;

    tree_item_list_equipment_weapon_Lloyd
            << tree_item_equipment_weapon_Lloyd_qianglipohuaizhe_gai
            << tree_item_equipment_weapon_Lloyd_shuangdinggun
            << tree_item_equipment_weapon_Lloyd_luoxuanshuanggun
            << tree_item_equipment_weapon_Lloyd_zuiezhicaizhe
            << tree_item_equipment_weapon_Lloyd_jituanpohuaizhe
            << tree_item_equipment_weapon_Lloyd_menghugun
            << tree_item_equipment_weapon_Lloyd_xuanxianggun
            << tree_item_equipment_weapon_Lloyd_gangguanxuangun
            << tree_item_equipment_weapon_Lloyd_buzhuozhe
            << tree_item_equipment_weapon_Lloyd_liedigun
            << tree_item_equipment_weapon_Lloyd_shenshengwumangxin
            << tree_item_equipment_weapon_Lloyd_qixingji
            << tree_item_equipment_weapon_Lloyd_ling_pohuaizhe
            << tree_item_equipment_weapon_Lloyd_leishenzhiyou
            << tree_item_equipment_weapon_Lloyd_wuxianzhiguang
               ;

    tree_item_list_equipment_weapon_Elie
            << tree_item_equipment_weapon_Elie_qingguo
            << tree_item_equipment_weapon_Elie_xiyue
            << tree_item_equipment_weapon_Elie_honseyingcangII
            << tree_item_equipment_weapon_Elie_sirongzhiwen
            << tree_item_equipment_weapon_Elie_chunzhennvhuang
            << tree_item_equipment_weapon_Elie_gaojieshengnv
            << tree_item_equipment_weapon_Elie_yinsemiyu
            << tree_item_equipment_weapon_Elie_shenen
            << tree_item_equipment_weapon_Elie_huianxiaochou
            << tree_item_equipment_weapon_Elie_qianjin_laoyin
            << tree_item_equipment_weapon_Elie_xueseguanghui
            << tree_item_equipment_weapon_Elie_chunbaishengqiang
            << tree_item_equipment_weapon_Elie_nengtianshiweiguang
               ;

    tree_item_list_equipment_weapon_Tio
            << tree_item_equipment_weapon_Tio_tansuozhe
            << tree_item_equipment_weapon_Tio_jumozhang
            << tree_item_equipment_weapon_Tio_gaochunnengliang
            << tree_item_equipment_weapon_Tio_guanghuizhiyi
            << tree_item_equipment_weapon_Tio_jingshentongbu
            << tree_item_equipment_weapon_Tio_modaojiasuqi
            << tree_item_equipment_weapon_Tio_xiandaozhe
            << tree_item_equipment_weapon_Tio_heianbodong
            << tree_item_equipment_weapon_Tio_xingzhimaichong
            << tree_item_equipment_weapon_Tio_tianqi
            << tree_item_equipment_weapon_Tio_yuzhoubenghuai
               ;

    tree_item_list_equipment_weapon_Randy
            << tree_item_equipment_weapon_Randy_quannengchongji
            << tree_item_equipment_weapon_Randy_gedouzhanfu
            << tree_item_equipment_weapon_Randy_juxiangzhenshezhi
            << tree_item_equipment_weapon_Randy_zhongjiefensuizhe
            << tree_item_equipment_weapon_Randy_gaorezhengqi
            << tree_item_equipment_weapon_Randy_baiyinchongjiqiang
            << tree_item_equipment_weapon_Randy_heianzhizaozhe
            << tree_item_equipment_weapon_Randy_pohuaishen_gai
            << tree_item_equipment_weapon_Randy_zhongjichongji
            << tree_item_equipment_weapon_Randy_xieefensuizhe
            << tree_item_equipment_weapon_Randy_tianzai
            << tree_item_equipment_weapon_Randy_tulongshenyuan
               ;

    tree_item_list_equipment_weapon_Lazy
            << tree_item_equipment_weapon_Lazy_piquantao
            << tree_item_equipment_weapon_Lazy_zuiequantao
            << tree_item_equipment_weapon_Lazy_hejinquantao
            << tree_item_equipment_weapon_Lazy_yinsukuangchao
            << tree_item_equipment_weapon_Lazy_luoxuanchongji
            << tree_item_equipment_weapon_Lazy_qiheizheci
            << tree_item_equipment_weapon_Lazy_wangzhequantao
            << tree_item_equipment_weapon_Lazy_huixingquantao
            << tree_item_equipment_weapon_Lazy_fanshimizhua
            << tree_item_equipment_weapon_Lazy_jielvhushou
            << tree_item_equipment_weapon_Lazy_lingguanghushou
            << tree_item_equipment_weapon_Lazy_leyuan
            << tree_item_equipment_weapon_Lazy_qiyaoshenwan
               ;

    tree_item_list_equipment_weapon_Rixia
            << tree_item_equipment_weapon_Rixia_bachiniao
            << tree_item_equipment_weapon_Rixia_heiya
            << tree_item_equipment_weapon_Rixia_xiangmobuzhihuo
            << tree_item_equipment_weapon_Rixia_lingjian_dianxie
            << tree_item_equipment_weapon_Rixia_zhuaiyingzhijian
               ;

    tree_item_list_equipment_weapon_Zeit
            << tree_item_equipment_weapon_Lazy_yamaquantao
            << tree_item_equipment_weapon_Zeit_jiandingxiangquan
               ;

    tree_item_list_equipment_weapon_Arios
            << tree_item_equipment_weapon_Arios_lijian_sunfeng
               ;

    tree_item_list_equipment_weapon_Noel
            << tree_item_equipment_weapon_Noel_jiaochahuoli
            << tree_item_equipment_weapon_Noel_yanshijisui
            << tree_item_equipment_weapon_Noel_shanguangjiachong
            << tree_item_equipment_weapon_Noel_shengshizi
            << tree_item_equipment_weapon_Noel_yema
            << tree_item_equipment_weapon_Noel_m8gongmao
            << tree_item_equipment_weapon_Noel_shaluhuangfeng
            << tree_item_equipment_weapon_Noel_sanchongfengbao
            << tree_item_equipment_weapon_Noel_wuweizhiqiang
            << tree_item_equipment_weapon_Noel_baisun
            << tree_item_equipment_weapon_Noel_diwubaolieqiang
            << tree_item_equipment_weapon_Noel_zhiailianren
            << tree_item_equipment_weapon_Noel_leidianmoqiang
            << tree_item_equipment_weapon_Noel_riyaohuguang
               ;

    tree_item_list_equipment_weapon_Dudley
            << tree_item_equipment_weapon_Dudley_huangdi
            << tree_item_equipment_weapon_Dudley_heiying
            << tree_item_equipment_weapon_Dudley_longshen
            << tree_item_equipment_weapon_Dudley_emo
            << tree_item_equipment_weapon_Dudley_zhicai
               ;

    tree_item_list_equipment_clothes
            << tree_item_equipment_clothes_pigebeidai
            << tree_item_equipment_clothes_xianweijiake
            << tree_item_equipment_clothes_qianghuaniuzaifu
            << tree_item_equipment_clothes_tanxingdayi
            << tree_item_equipment_clothes_jingjijiake
            << tree_item_equipment_clothes_shuizhulianyiqun
            << tree_item_equipment_clothes_jidongzhandoufu
            << tree_item_equipment_clothes_fuwenchangpao
            << tree_item_equipment_clothes_yezhantaozhuang
            << tree_item_equipment_clothes_xiangrikuidoupeng
            << tree_item_equipment_clothes_qiushengbeixin
            << tree_item_equipment_clothes_niuzaipiyi
            << tree_item_equipment_clothes_yingwanwaitao
            << tree_item_equipment_clothes_jisifayi
            << tree_item_equipment_clothes_junfengdayi
            << tree_item_equipment_clothes_longhuashuzhifu
            << tree_item_equipment_clothes_taijinkaijia
            << tree_item_equipment_clothes_wanlifu
            << tree_item_equipment_clothes_shenshengfapao
            << tree_item_equipment_clothes_xieexiongjia
            << tree_item_equipment_clothes_qilongzhuangjia
            << tree_item_equipment_clothes_xingchenyuyi
            << tree_item_equipment_clothes_baofengchangpao
            << tree_item_equipment_clothes_qiyaoshenweishengkai
            << tree_item_equipment_clothes_qiyaojixingshengyi
            << tree_item_equipment_clothes_yongmengjiake
            << tree_item_equipment_clothes_chunjingliqun
            << tree_item_equipment_clothes_zhihuidoupeng
            << tree_item_equipment_clothes_yexingdayi
            << tree_item_equipment_clothes_mengyuefayi
            << tree_item_equipment_clothes_zengfuzhandouzhuang
            << tree_item_equipment_clothes_guizexizhuang
            << tree_item_equipment_clothes_jianmiehuantianzhuang
            << tree_item_equipment_clothes_yundongfuZ
               ;

    tree_item_list_equipment_shoes
            << tree_item_equipment_shoes_hutuijia
            << tree_item_equipment_shoes_dingxie
            << tree_item_equipment_shoes_yuanzuxie
            << tree_item_equipment_shoes_jiasupaoxie
            << tree_item_equipment_shoes_tianyuanxie
            << tree_item_equipment_shoes_falangliangxie
            << tree_item_equipment_shoes_junyongxue
            << tree_item_equipment_shoes_tanhuangpaoxie
            << tree_item_equipment_shoes_yingwanxueta
            << tree_item_equipment_shoes_baisefanbuxie
            << tree_item_equipment_shoes_situoleijiayueyexie
            << tree_item_equipment_shoes_tanmushuzhixue
            << tree_item_equipment_shoes_heixue
            << tree_item_equipment_shoes_xianzugaogenxie
            << tree_item_equipment_shoes_junyongxuezuozhanxue
            << tree_item_equipment_shoes_qishihutui
            << tree_item_equipment_shoes_dushipixie
            << tree_item_equipment_shoes_rouguangliangxie
            << tree_item_equipment_shoes_jinshuqianghuaxie
            << tree_item_equipment_shoes_chaonengpaoxie
            << tree_item_equipment_shoes_huiguanghutui
            << tree_item_equipment_shoes_liaoluanqicaixue
            << tree_item_equipment_shoes_xukonghutui
            << tree_item_equipment_shoes_tianshenzhandouxue
            << tree_item_equipment_shoes_shenchonggaogenxie
            << tree_item_equipment_shoes_jinyaoxiangtianxie
            << tree_item_equipment_shoes_yingaoxingyingxie
            << tree_item_equipment_shoes_situoleijiaoumu
               ;

    tree_item_list_equipment_jewelry
            << tree_item_equipment_jewelry_shanhujiezhi_plus
            << tree_item_equipment_jewelry_yingxiongjiezhi_plus
            << tree_item_equipment_jewelry_yeguangyanjing_plus
            << tree_item_equipment_jewelry_liangshuangxianglian_plus
            << tree_item_equipment_jewelry_dahuoji_plus
            << tree_item_equipment_jewelry_huancaiweijin_plus
            << tree_item_equipment_jewelry_dingdangerhuan_plus
            << tree_item_equipment_jewelry_gangshouzhuo_plus
            << tree_item_equipment_jewelry_huazhiping_plus
            << tree_item_equipment_jewelry_jianyingrougan
            << tree_item_equipment_jewelry_hairenjiangpai
            << tree_item_equipment_jewelry_shuikuangjiangpai
            << tree_item_equipment_jewelry_longgongjiangpai
            << tree_item_equipment_jewelry_yinchijiangpai
            << tree_item_equipment_jewelry_diaohuangjiangpai
            << tree_item_equipment_jewelry_jujiqiangguan
            << tree_item_equipment_jewelry_yingwantoujin
            << tree_item_equipment_jewelry_mixiweiba
            << tree_item_equipment_jewelry_miximaozi
            << tree_item_equipment_jewelry_mixuezhuazi
            << tree_item_equipment_jewelry_mixiduandai
            << tree_item_equipment_jewelry_jinjikeyin
            << tree_item_equipment_jewelry_chao_bishengzhatoujin
            << tree_item_equipment_jewelry_chao_douhunyaodai
            << tree_item_equipment_jewelry_zhengyihuizhang
            << tree_item_equipment_jewelry_xingyunkeyin
            << tree_item_equipment_jewelry_guangxiaozhiguan
            << tree_item_equipment_jewelry_panguzhiguan
            << tree_item_equipment_jewelry_fuyuxiangbo
            << tree_item_equipment_jewelry_yinxiongzhen
            << tree_item_equipment_jewelry_shanhujiezhi
            << tree_item_equipment_jewelry_yingxiongjiezhi
            << tree_item_equipment_jewelry_yeguangyanjing
            << tree_item_equipment_jewelry_liangshuangxianglian
            << tree_item_equipment_jewelry_dahuoji
            << tree_item_equipment_jewelry_huanyingweijin
            << tree_item_equipment_jewelry_dingdangerhuan
            << tree_item_equipment_jewelry_gangshouzhuo
            << tree_item_equipment_jewelry_huazhiping
            << tree_item_equipment_jewelry_shenshengzhilian
            << tree_item_equipment_jewelry_yunzhishizhe
            << tree_item_equipment_jewelry_yonglianglingbai
            << tree_item_equipment_jewelry_taiyanglingbai
            << tree_item_equipment_jewelry_xingchenlingbai
            << tree_item_equipment_jewelry_jiachangqiangguan
            << tree_item_equipment_jewelry_guilvhuizhang
            << tree_item_equipment_jewelry_yongqihuizhang
            << tree_item_equipment_jewelry_shanguanghuizhang
            << tree_item_equipment_jewelry_bishengzhatoujin
            << tree_item_equipment_jewelry_douhunyaodai
            << tree_item_equipment_jewelry_xingbeiguazhui
            << tree_item_equipment_jewelry_yinzhilian
            << tree_item_equipment_jewelry_yuelingyu
            << tree_item_equipment_jewelry_mixiguashi
            << tree_item_equipment_jewelry_turenou
            << tree_item_equipment_jewelry_jijingzhilan
            << tree_item_equipment_jewelry_jiqingzhihong
            << tree_item_equipment_jewelry_changqingzhilv
            << tree_item_equipment_jewelry_shensuizhihuang
            << tree_item_equipment_jewelry_caomao
            << tree_item_equipment_jewelry_anquantoukui
            << tree_item_equipment_jewelry_yigongshoutao
            << tree_item_equipment_jewelry_shuimaoyingbi
            << tree_item_equipment_jewelry_tiaoxieyingbi
            << tree_item_equipment_jewelry_shenshengguazhui
            << tree_item_equipment_jewelry_wucaifengche
            << tree_item_equipment_jewelry_heiyaoshiguashi
            << tree_item_equipment_jewelry_cangyaoshiguashi
            << tree_item_equipment_jewelry_hongyaoshiguashi
            << tree_item_equipment_jewelry_huyaoshiguashi
            << tree_item_equipment_jewelry_jinyaoshiguashi
            << tree_item_equipment_jewelry_xiulidemaozi
            << tree_item_equipment_jewelry_fulandehufu
            << tree_item_equipment_jewelry_wujidefashi
            << tree_item_equipment_jewelry_yongshizhixin
            << tree_item_equipment_jewelry_lingzhishenzhu
               ;

    tree_item_list_circuit_normal
            << tree_item_circuit_normal_hp1
            << tree_item_circuit_normal_hp2
            << tree_item_circuit_normal_hp3
            << tree_item_circuit_normal_shuiyaozhu
            << tree_item_circuit_normal_ep1
            << tree_item_circuit_normal_ep2
            << tree_item_circuit_normal_ep3
            << tree_item_circuit_normal_yinyaozhu
            << tree_item_circuit_normal_gongji1
            << tree_item_circuit_normal_gongji2
            << tree_item_circuit_normal_gongji3
            << tree_item_circuit_normal_hongyaozhu
            << tree_item_circuit_normal_fangyu1
            << tree_item_circuit_normal_fangyu2
            << tree_item_circuit_normal_fangyu3
            << tree_item_circuit_normal_huyaozhu
            << tree_item_circuit_normal_jingshen1
            << tree_item_circuit_normal_jingshen2
            << tree_item_circuit_normal_jingshen3
            << tree_item_circuit_normal_baiyaozhu
            << tree_item_circuit_normal_mofang1
            << tree_item_circuit_normal_mofang2
            << tree_item_circuit_normal_mofang3
            << tree_item_circuit_normal_cangyaozhu
            << tree_item_circuit_normal_mingzhong1
            << tree_item_circuit_normal_mingzhong2
            << tree_item_circuit_normal_mingzhong3
            << tree_item_circuit_normal_guangyaozhu
            << tree_item_circuit_normal_huibi1
            << tree_item_circuit_normal_huibi2
            << tree_item_circuit_normal_huibi3
            << tree_item_circuit_normal_cuiyaozhu
            << tree_item_circuit_normal_yidong1
            << tree_item_circuit_normal_yidong2
            << tree_item_circuit_normal_fengyaozhu
            << tree_item_circuit_normal_xingdongli1
            << tree_item_circuit_normal_xingdongli2
            << tree_item_circuit_normal_xingdongli3
            << tree_item_circuit_normal_heiyaozhu
            << tree_item_circuit_normal_fangai1
            << tree_item_circuit_normal_fangai2
            << tree_item_circuit_normal_jueyaozhu
            << tree_item_circuit_normal_qudong1
            << tree_item_circuit_normal_qudong2
            << tree_item_circuit_normal_keyaozhu
            << tree_item_circuit_normal_sheng_ep1
            << tree_item_circuit_normal_sheng_ep2
            << tree_item_circuit_normal_sheng_ep3
            << tree_item_circuit_normal_jinyaozhu
            << tree_item_circuit_normal_duzhiren
            << tree_item_circuit_normal_shihuazhiren
            << tree_item_circuit_normal_fengmozhiren
            << tree_item_circuit_normal_dongjiezhiren
            << tree_item_circuit_normal_fengjizhiren
            << tree_item_circuit_normal_yanshangzhiren
            << tree_item_circuit_normal_anzhiren
            << tree_item_circuit_normal_shuimianzhiren
            << tree_item_circuit_normal_hunluanzhiren
            << tree_item_circuit_normal_duzhiren2
            << tree_item_circuit_normal_shihuazhiren2
            << tree_item_circuit_normal_fengmozhiren2
            << tree_item_circuit_normal_dongjiezhiren2
            << tree_item_circuit_normal_fengjizhiren2
            << tree_item_circuit_normal_yanshangzhiren2
            << tree_item_circuit_normal_anzhiren2
            << tree_item_circuit_normal_shuimianzhiren2
            << tree_item_circuit_normal_hunluanzhiren2
            << tree_item_circuit_normal_pojianzhiya
            << tree_item_circuit_normal_podunzhiya
            << tree_item_circuit_normal_poyanzhiya
            << tree_item_circuit_normal_polingzhiya
            << tree_item_circuit_normal_poxunzhiya
            << tree_item_circuit_normal_pojiaozhiya
            << tree_item_circuit_normal_zhenxingling
            << tree_item_circuit_normal_chenxingling
            << tree_item_circuit_normal_yanxingling
            << tree_item_circuit_normal_suixingling
            << tree_item_circuit_normal_mingwangling
            << tree_item_circuit_normal_tianwangling
            << tree_item_circuit_normal_riyue_mingwangling
            << tree_item_circuit_normal_yaomai
            << tree_item_circuit_normal_jigong
            << tree_item_circuit_normal_huwei
            << tree_item_circuit_normal_zhiyu
            << tree_item_circuit_normal_danjing
            << tree_item_circuit_normal_lianqi
            << tree_item_circuit_normal_longyan
            << tree_item_circuit_normal_xie
            << tree_item_circuit_normal_tuotu
            << tree_item_circuit_normal_choumei
            << tree_item_circuit_normal_xingyun
            << tree_item_circuit_normal_fumo
            << tree_item_circuit_normal_yingmu
            << tree_item_circuit_normal_tianyan
            << tree_item_circuit_normal_fanwei
            << tree_item_circuit_normal_qingbao
            << tree_item_circuit_normal_tanzhi
            << tree_item_circuit_normal_huanlong
               ;

    tree_item_list_circuit_core
            << tree_item_circuit_core_liliang
            << tree_item_circuit_core_dunpai
            << tree_item_circuit_core_yaojing
            << tree_item_circuit_core_lizhua
            << tree_item_circuit_core_baijin
            << tree_item_circuit_core_huanxiang
            << tree_item_circuit_core_zhanfu
            << tree_item_circuit_core_faze
            << tree_item_circuit_core_yuyi
            << tree_item_circuit_core_shenyou
            << tree_item_circuit_core_wangquan
            << tree_item_circuit_core_meiying
            << tree_item_circuit_core_shouhu
            << tree_item_circuit_core_wuxian
            << tree_item_circuit_core_xiaochou
            << tree_item_circuit_core_zuie
            << tree_item_circuit_core_caojian
            << tree_item_circuit_core_wenzhang
            << tree_item_circuit_core_lingmao
            << tree_item_circuit_core_qishi
            << tree_item_circuit_core_xianzhe
            << tree_item_circuit_core_caojian_other
               ;

    tree_item_list_circuit_debug
            << tree_item_circuit_debug_unkonw_
            << tree_item_circuit_debug_wulixishou
            << tree_item_circuit_debug_mofaxishou
            << tree_item_circuit_debug_wulifanshe
            << tree_item_circuit_debug_mofafanshe
            << tree_item_circuit_debug_fixed_duzhiren
            << tree_item_circuit_debug_fixed_shihuazhiren
            << tree_item_circuit_debug_fixed_fengmozhiren
            << tree_item_circuit_debug_fixed_dongjiezhiren
            << tree_item_circuit_debug_fixed_fengjizhiren
            << tree_item_circuit_debug_fixed_yanshangzhiren
            << tree_item_circuit_debug_fixed_heianzhiren
            << tree_item_circuit_debug_fixed_shuimianzhiren
            << tree_item_circuit_debug_fixed_hunluanzhiren
            << tree_item_circuit_debug_fixed_jisizhiren
               ;

    tree_item_list_event_story
            << tree_item_event_story_shousundejingchahuizhang
            << tree_item_event_story_yimeierdaguandedeyaoshi
            << tree_item_event_story_dixiakongjian_b_quyudeyaoshi
            << tree_item_event_story_jiukuangshandeyaoshi
            << tree_item_event_story_ibc_renzhengkapian
            << tree_item_event_story_meilindesan
            << tree_item_event_story_ibc_guibinka
            << tree_item_event_story_feiqicailiao
            << tree_item_event_story_chunbaizhishi_da
            << tree_item_event_story_chunbaizhishi_zhong
            << tree_item_event_story_chunbaizhishi_xiao
            << tree_item_event_story_nikeludewenzhenbiao
            << tree_item_event_story_ninuodewenzhenbiao
            << tree_item_event_story_kuleisiduiyuandewenzhenbiao
            << tree_item_event_story_chenzhonghuowu
            << tree_item_event_story_yisuiwupindexiaobaoguo
            << tree_item_event_story_fawangzhuzhaijiedesonghuodan
            << tree_item_event_story_lanhua
            << tree_item_event_story_jiejingsuipian
            << tree_item_event_story_luozanbeierkerenou_c
            << tree_item_event_story_luozanbeierkerenou_r
            << tree_item_event_story_luozanbeierkerenou_m
            << tree_item_event_story_luozanbeierkerenou_s
            << tree_item_event_story_bobopeng_b_ban
            << tree_item_event_story_xiaoxiangzi
            << tree_item_event_story_yuezhibaozhu
            << tree_item_event_story_xingzhibaozhu
            << tree_item_event_story_kuxihongshijiang
            << tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_aili
            << tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_tiou
            << tree_item_event_story_xuanxiuhuodongtebiejiangjiniandun_nuoaier
            << tree_item_event_story_ganbigan
            << tree_item_event_story_hupozhou
            << tree_item_event_story_feicuixian
            << tree_item_event_story_hongliangou
            << tree_item_event_story_zhiyuankecheliangyaoshi
            << tree_item_event_story_mixiulamu_qihuanleyuanyoulejuan
            << tree_item_event_story_linshirenzhengkapian
            << tree_item_event_story_jinshutanceqi
            << tree_item_event_story_yinyaoshiyaoshi
            << tree_item_event_story_jinyaoshiyaoshi
            << tree_item_event_story_heiyaoshiyaoshi
            << tree_item_event_story_hongsekapianyaoshi
            << tree_item_event_story_u_cailiao
            << tree_item_event_story_saimuliyashisuipian
            << tree_item_event_story_shenshengbuliao
            << tree_item_event_story_saimuliyashi
               ;

    tree_item_list_event_furnishing
            << tree_item_event_furnishing_minishadai
            << tree_item_event_furnishing_telisitanhao
            << tree_item_event_furnishing_youyashiyijing
            << tree_item_event_furnishing_bayinhe
            << tree_item_event_furnishing_yingwanchuxuguan
            << tree_item_event_furnishing_mixuewanou
            << tree_item_event_furnishing_chonglangban
            << tree_item_event_furnishing_diangeji
            << tree_item_event_furnishing_jingsaiqi
            << tree_item_event_furnishing_xiaojingzixingche
            << tree_item_event_furnishing_anleyi
            << tree_item_event_furnishing_minishuizuguan
            << tree_item_event_furnishing_guguaikaodian
            << tree_item_event_furnishing_bobokaodian
            << tree_item_event_furnishing_heitaidixuong
            << tree_item_event_furnishing_kufanqiewanou
            << tree_item_event_furnishing_zwei2_qie
               ;

    tree_item_list_event_car
            << tree_item_event_car_dangniban
            << tree_item_event_car_cetaban
            << tree_item_event_car_weiyi
            << tree_item_event_car_qianbaoxiangang
            << tree_item_event_car_jingddeng
            << tree_item_event_car_qianghualunquan
            << tree_item_event_car_hp_huifuzhuangzhi
            << tree_item_event_car_ep_huifuzhuangzhi
            << tree_item_event_car_cp_huifuzhuangzhi
            << tree_item_event_car_cpd_zhuti
            << tree_item_event_car_mixizhuti
            << tree_item_event_car_renwuzhuti_e
            << tree_item_event_car_renwuzhuti_t
            << tree_item_event_car_tiankongsecai
            << tree_item_event_car_gaoguisecai
            << tree_item_event_car_meilisecai
            << tree_item_event_car_kuangyesecai
            << tree_item_event_car_liangshuangsecai
            << tree_item_event_car_jingbeisecai
            << tree_item_event_car_qingkuaisecai
            << tree_item_event_car_shanyaosecai
            << tree_item_event_car_shenansecai
               ;

    tree_item_list_food
            << tree_item_food_moshoushourou
            << tree_item_food_moshouyurou
            << tree_item_food_moshouzhike
            << tree_item_food_moshouzhiluan
            << tree_item_food_moshouyuyi
            << tree_item_food_moshouzhizhong
            << tree_item_food_moshoumingjiao
            << tree_item_food_fayacaomi
            << tree_item_food_wuguweizeng
            << tree_item_food_baiyaoqingjiu
            << tree_item_food_zhaozhaixiangye
            << tree_item_food_qinglvxiangcao
            << tree_item_food_hujiaoli
            << tree_item_food_relajiao
            << tree_item_food_xiangyou
            << tree_item_food_fengmitangjiang
            << tree_item_food_cusuiyanyan
            << tree_item_food_xinmoxiaomaifen
            << tree_item_food_xinxianniunai
            << tree_item_food_xinxiannailao
            << tree_item_food_xinxianjidan
            << tree_item_food_lingdangcaomei
            << tree_item_food_heiangu
            << tree_item_food_qicaidou
            << tree_item_food_guowangmalingshu
            << tree_item_food_wannengqingcong
            << tree_item_food_minihuluobu
            << tree_item_food_kuxihongshi
            << tree_item_food_xuehualijirou
            << tree_item_food_xinxianbaiyurou
               ;

    tree_item_list_book
            << tree_item_book_diaochashouce
            << tree_item_book_liaolishouce
            << tree_item_book_diaoyushouce
            << tree_item_book_zhandoushouce
            << tree_item_book_zizhizhouditu
            << tree_item_book_keluosibeiershideditu
            << tree_item_book_zhanshushu_ji
            << tree_item_book_zhanshushu_shi
            << tree_item_book_zhanshushu_cang
            << tree_item_book_zhanshushu_xi
            << tree_item_book_zhanshushu_xu
            << tree_item_book_zhanshushu_bao
            << tree_item_book_zhanshushu_li
            << tree_item_book_zhanshushu_sheng
            << tree_item_book_old_keluosibeiershidaizhoukan_1
            << tree_item_book_old_keluosibeiershidaizhoukan_2
            << tree_item_book_old_keluosibeiershidaizhoukan_3
            << tree_item_book_old_keluosibeiershidaizhoukan_haowai
            << tree_item_book_old_keluosibeiershidaizhoukan_4
            << tree_item_book_old_keluosibeiershidaizhoukan_5
            << tree_item_book_old_keluosibeiershidaizhoukan_6
            << tree_item_book_old_keluosibeiershidaizhoukan_7
            << tree_item_book_old_keluosibeiershidaizhoukan_8
            << tree_item_book_heishiyishenggelun_1
            << tree_item_book_heishiyishenggelun_2
            << tree_item_book_heishiyishenggelun_3
            << tree_item_book_heishiyishenggelun_4
            << tree_item_book_heishiyishenggelun_5
            << tree_item_book_heishiyishenggelun_6
            << tree_item_book_heishiyishenggelun_7
            << tree_item_book_heishiyishenggelun_8
            << tree_item_book_heishiyishenggelun_9
            << tree_item_book_heishiyishenggelun_10
            << tree_item_book_heishiyishenggelun_11
            << tree_item_book_heishiyishenggelun_12
            << tree_item_book_heishiyishenggelun_13
            << tree_item_book_heishiyishenggelun_14
            << tree_item_book_tiedaoaihaozhedetuijian
            << tree_item_book_maerkeyusenlinshenchudemonvmen_shang
            << tree_item_book_maerkeyusenlinshenchudemonvmen_zhong
            << tree_item_book_maerkeyusenlinshenchudemonvmen_xia
            << tree_item_book_gaibiandaludemeirenmen
            << tree_item_book_youxiaoliyongwufenzhonglingsanshijian
            << tree_item_book_keluosibeierguaitanquanji
            << tree_item_book_caihong_fanbook
            << tree_item_book_shengnvyubailang_shang
            << tree_item_book_shengnvyubailang_xia
            << tree_item_book_keluosibeiershidaizhoukan_1
            << tree_item_book_keluosibeiershidaizhoukan_2
            << tree_item_book_keluosibeiershidaizhoukan_3
            << tree_item_book_keluosibeiershidaizhoukan_4
            << tree_item_book_keluosibeiershidaizhoukan_5
            << tree_item_book_keluosibeiershidaizhoukan_6
            << tree_item_book_keluosibeiershidaizhoukan_7
            << tree_item_book_keluosibeiershidaizhoukan_8
            << tree_item_book_keluosibeiershidaizhoukan_9
            << tree_item_book_keluosibeiershidaizhoukan_haowai
            << tree_item_book_keluosibeiershidaizhoukan_10
            << tree_item_book_keluosibeiershidaizhoukan_11
            << tree_item_book_muyuyangguangdeainiaisi_1
            << tree_item_book_muyuyangguangdeainiaisi_2
            << tree_item_book_muyuyangguangdeainiaisi_3
            << tree_item_book_muyuyangguangdeainiaisi_4
            << tree_item_book_muyuyangguangdeainiaisi_5
            << tree_item_book_muyuyangguangdeainiaisi_6
            << tree_item_book_muyuyangguangdeainiaisi_7
            << tree_item_book_muyuyangguangdeainiaisi_8
            << tree_item_book_muyuyangguangdeainiaisi_9
            << tree_item_book_muyuyangguangdeainiaisi_10
            << tree_item_book_muyuyangguangdeainiaisi_11
            << tree_item_book_muyuyangguangdeainiaisi_12
            << tree_item_book_muyuyangguangdeainiaisi_13
            << tree_item_book_muyuyangguangdeainiaisi_14
            << tree_item_book_huanshoudiaochabaogaoshu
               ;

    tree_item_list_fishing_bait
            << tree_item_fishing_bait_guiyuluan
            << tree_item_fishing_bait_aolianwanzi
            << tree_item_fishing_bait_hongchong
            << tree_item_fishing_bait_qiuyin
            << tree_item_fishing_bait_alianwanziex
            << tree_item_fishing_bait_hongwanex
            << tree_item_fishing_bait_chuidiaodalibao
               ;

    tree_item_list_fishing_fish
            << tree_item_fishing_fish_douyu
            << tree_item_fishing_fish_xuehuaxie
            << tree_item_fishing_fish_landaishenxianyu
            << tree_item_fishing_fish_yinsanyu
            << tree_item_fishing_fish_aermolikajiyu
            << tree_item_fishing_fish_wugui
            << tree_item_fishing_fish_chengheyu
            << tree_item_fishing_fish_yanxueyu
            << tree_item_fishing_fish_hongzunyu
            << tree_item_fishing_fish_shirenyu
            << tree_item_fishing_fish_liyu
            << tree_item_fishing_fish_dakouluyu
            << tree_item_fishing_fish_heigui
            << tree_item_fishing_fish_jiaodouyu
            << tree_item_fishing_fish_lengshuiyu
            << tree_item_fishing_fish_xiaoni
            << tree_item_fishing_fish_guiyu
            << tree_item_fishing_fish_jinlongyu
            << tree_item_fishing_fish_manli
            << tree_item_fishing_fish_gangkegui
            << tree_item_fishing_fish_juxuegui
            << tree_item_fishing_fish_zhenzhulongyu
            << tree_item_fishing_fish_junian
            << tree_item_fishing_fish_jingui
            << tree_item_fishing_fish_dani
            << tree_item_fishing_fish_jinli
            << tree_item_fishing_fish_cuiyaoshenxianyu
            << tree_item_fishing_fish_huyaoyanxueyu
            << tree_item_fishing_fish_hongyaoshirenyu
            << tree_item_fishing_fish_cangyaojulongyu
            << tree_item_fishing_fish_jugulongyuhuang
               ;

    tree_item_list_fishing_rod
            << tree_item_fishing_rod_chujigan
            << tree_item_fishing_rod_xiaoqiaosheshou
            << tree_item_fishing_rod_zhugan
            << tree_item_fishing_rod_gangganqinluezhe
            << tree_item_fishing_rod_shuizhongzhipeizhe
               ;

    tree_item_root_list.append(tree_item_list_props_normal);
    tree_item_root_list.append(tree_item_list_props_cooking);

    tree_item_root_list.append(tree_item_list_equipment_weapon_generic);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Lloyd);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Elie);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Tio);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Randy);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Lazy);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Rixia);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Zeit);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Arios);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Noel);
    tree_item_root_list.append(tree_item_list_equipment_weapon_Dudley);

    tree_item_root_list.append(tree_item_list_equipment_clothes);
    tree_item_root_list.append(tree_item_list_equipment_shoes);
    tree_item_root_list.append(tree_item_list_equipment_jewelry);

    tree_item_root_list.append(tree_item_list_circuit_normal);
    tree_item_root_list.append(tree_item_list_circuit_core);
    tree_item_root_list.append(tree_item_list_circuit_debug);

    tree_item_root_list.append(tree_item_list_event_story);
    tree_item_root_list.append(tree_item_list_event_furnishing);
    tree_item_root_list.append(tree_item_list_event_car);

    tree_item_root_list.append(tree_item_list_food);
    tree_item_root_list.append(tree_item_list_book);

    tree_item_root_list.append(tree_item_list_fishing_bait);
    tree_item_root_list.append(tree_item_list_fishing_fish);
    tree_item_root_list.append(tree_item_list_fishing_rod);

    /***********************************************************************************************/

    tree_item_children_list.append(tree_item_props_normal);
    tree_item_children_list.append(tree_item_props_cooking);

    tree_item_children_list.append(tree_item_equipment_weapon_generic);
    tree_item_children_list.append(tree_item_equipment_weapon_Lloyd);
    tree_item_children_list.append(tree_item_equipment_weapon_Elie);
    tree_item_children_list.append(tree_item_equipment_weapon_Tio);
    tree_item_children_list.append(tree_item_equipment_weapon_Randy);
    tree_item_children_list.append(tree_item_equipment_weapon_Lazy);
    tree_item_children_list.append(tree_item_equipment_weapon_Rixia);
    tree_item_children_list.append(tree_item_equipment_weapon_Zeit);
    tree_item_children_list.append(tree_item_equipment_weapon_Arios);
    tree_item_children_list.append(tree_item_equipment_weapon_Noel);
    tree_item_children_list.append(tree_item_equipment_weapon_Dudley);

    tree_item_children_list.append(tree_item_equipment_clothes);
    tree_item_children_list.append(tree_item_equipment_shoes);
    tree_item_children_list.append(tree_item_equipment_jewelry);

    tree_item_children_list.append(tree_item_circuit_normal);
    tree_item_children_list.append(tree_item_circuit_core);
    tree_item_children_list.append(tree_item_circuit_debug);

    tree_item_children_list.append(tree_item_event_story);
    tree_item_children_list.append(tree_item_event_furnishing);
    tree_item_children_list.append(tree_item_event_car);

    tree_item_children_list.append(tree_item_food);
    tree_item_children_list.append(tree_item_book);

    tree_item_children_list.append(tree_item_fishing_bait);
    tree_item_children_list.append(tree_item_fishing_fish);
    tree_item_children_list.append(tree_item_fishing_rod);

    /***********************************************************************************************/

    int list_num = 0;
    QString temp_unkonw = "0";

    //普通道具
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_props_normal)
    {
        tree_item->setText(0,list_name_item_props_normal.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //料理
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_props_cooking)
    {
        tree_item->setText(0,list_name_item_props_cooking.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //武器
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_generic)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_generic.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Lloyd)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Lloyd.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Elie)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Elie.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Tio)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Tio.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Randy)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Randy.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Lazy)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Lazy.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Rixia)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Rixia.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Zeit)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Zeit.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Arios)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Arios.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Noel)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Noel.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_weapon_Dudley)
    {
        tree_item->setText(0,list_name_item_equipment_weapon_Dudley.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //服装
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_clothes)
    {
        tree_item->setText(0,list_name_item_equipment_clothes.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //鞋子
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_shoes)
    {
        tree_item->setText(0,list_name_item_equipment_shoes.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //饰品
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_equipment_jewelry)
    {
        tree_item->setText(0,list_name_item_equipment_jewelry.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //一般
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_circuit_normal)
    {
        tree_item->setText(0,list_name_item_circuit_normal.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //核心
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_circuit_core)
    {
        tree_item->setText(0,list_name_item_circuit_core.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //Debug
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_circuit_debug)
    {
        tree_item->setText(0,list_name_item_circuit_debug.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //剧情
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_event_story)
    {
        tree_item->setText(0,list_name_item_event_story.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //家具
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_event_furnishing)
    {
        tree_item->setText(0,list_name_item_event_furnishing.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //导力车配件和痛车
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_event_car)
    {
        tree_item->setText(0,list_name_item_event_car.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //食材
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_food)
    {
        tree_item->setText(0,list_name_item_food.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //书籍
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_book)
    {
        tree_item->setText(0,list_name_item_book.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }

    //鱼饵
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_fishing_bait)
    {
        tree_item->setText(0,list_name_item_fishing_bait.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //鱼
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_fishing_fish)
    {
        tree_item->setText(0,list_name_item_fishing_fish.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
    //钓竿
    list_num = 0;
    foreach(QTreeWidgetItem *tree_item,tree_item_list_fishing_rod)
    {
        tree_item->setText(0,list_name_item_fishing_rod.at(list_num));
        tree_item->setText(2,temp_unkonw);
        list_num++;
    }
}

#endif // BZH_ANK_SE_TEXT_DEFINE_ITEM_H
