#ifndef BZH_ANK_SE_CODE_DEFINE_H
#define BZH_ANK_SE_CODE_DEFINE_H

#include "bzh_ank_se_code_define_base.h"
#include "bzh_ank_se_code_define_item.h"
#include "bzh_ank_se_code_define_manual.h"
#include "bzh_ank_se_code_define_skill.h"
#include "bzh_ank_se_code_define_team_role_display.h"

void setup_list_code()
{
    setup_list_code_items();
    setup_list_code_fight_manual_monster_illustrations();
    setup_list_code_s_break_skills();
    setup_list_code_team_rote();
    setup_list_code_rote_display();
}

#endif // BZH_ANK_SE_CODE_DEFINE_H
