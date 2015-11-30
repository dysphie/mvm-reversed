/* reverse engineering by sigsegv
 * based on TF2 version 20151007a
 * server/tf/bot/behavior/nav_entities/tf_bot_nav_ent_move_to.h
 * used in MvM: TODO
 */


// sizeof: 0x4834
class CTFBotNavEntMoveTo : public Action<CTFBot>
{
public:
	CTFBotNavEntMoveTo(const CFuncNavPrerequisite *prereq);
	virtual ~CTFBotNavEntMoveTo();
	
	virtual const char *GetName() const override;
	
	virtual ActionResult<CTFBot> OnStart(CTFBot *actor, Action<CTFBot> *action) override;
	virtual ActionResult<CTFBot> Update(CTFBot *actor, float f1) override;
	
private:
	// TODO
};