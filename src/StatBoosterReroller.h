#ifndef MODULE_STAT_BOOST_REROLL_H
#define MODULE_STAT_BOOST_REROLL_H

#include "ScriptMgr.h"
#include "Player.h"
#include "StatBoostMgr.h"
#include "Spell.h"
#include "Config.h"

class StatBoosterRerollPlayerScript : public PlayerScript
{
public:
    StatBoosterRerollPlayerScript() : PlayerScript("StatBoosterRerollPlayerScript") { }

    virtual bool CanCastItemUseSpell(Player* /*player*/, Item* /*item*/, SpellCastTargets const& /*targets*/, uint8 /*cast_count*/, uint32 /*glyphIndex*/) override;
};

#endif // MODULE_STAT_BOOST_REROLL_H
