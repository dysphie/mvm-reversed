/* reverse engineering by sigsegv
 * based on TF2 version 20151007a
 * CTFBot actions: spy: sap
 * used in MvM: TODO
 */


// sizeof: 0x4818
class CTFBotSap : public Action<CTFBot>
{
public:
	CTFBotSap(CBaseObject *building);
	virtual ~CTFBotSap();
	
	virtual const char *GetName() const override;
	
	virtual ActionResult<CTFBot> OnStart(CTFBot *actor, Action<CTFBot> *action) override;
	virtual ActionResult<CTFBot> Update(CTFBot *actor, float f1) override;
	virtual void OnEnd(CTFBot *actor, Action<CTFBot> *action) override;
	
	virtual ActionResult<CTFBot> OnSuspend(CTFBot *actor, Action<CTFBot> *action) override;
	virtual ActionResult<CTFBot> OnResume(CTFBot *actor, Action<CTFBot> *action) override;
	
	virtual EventDesiredResult<CTFBot> OnStuck(CTFBot *actor) override;
	
	virtual QueryResponse ShouldRetreat(const INextBot *nextbot) const override;
	virtual QueryResponse ShouldAttack(const INextBot *nextbot, const CKnownEntity *threat) const override;
	virtual QueryResponse IsHindrance(const INextBot *nextbot, CBaseEntity *it) const override;
	
	bool AreAllDangerousSentriesSapped(CTFBot *actor) const;
	
private:
	// TODO
};
