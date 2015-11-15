/* reverse engineering by sigsegv
 * based on TF2 version 20151007a
 * CTFBot actions: squad: escort squad leader
 * used in MvM: TODO
 */


// sizeof: 0x905c
class CTFBotEscortSquadLeader : public Action<CTFBot>
{
public:
	CTFBotEscortSquadLeader(Action<CTFBot *> action);
	virtual ~CTFBotEscortSquadLeader();
	
	virtual const char *GetName() const override;
	
	virtual ActionResult<CTFBot> OnStart(CTFBot *actor, Action<CTFBot> *action) override;
	virtual ActionResult<CTFBot> Update(CTFBot *actor, float f1) override;
	virtual void OnEnd(CTFBot *actor, Action<CTFBot> *action) override;
	
private:
	// TODO
};
