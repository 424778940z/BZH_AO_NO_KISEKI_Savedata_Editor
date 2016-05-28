#ifndef BZH_ANK_SE_TEXT_DEFINE_H
#define BZH_ANK_SE_TEXT_DEFINE_H

#include "bzh_ank_se_text_define_item.h"
#include "bzh_ank_se_text_define_manua.h"
#include "bzh_ank_se_text_define_skill.h"

void setup_list_text()
{
    setup_list_name_items();
    setup_list_describe_items();
    setup_list_name_fight_manual_monster_illustration();
    setup_list_name_s_break_skills();
}

#endif // BZH_ANK_SE_TEXT_DEFINE_H
