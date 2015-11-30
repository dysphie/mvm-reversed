/* reverse engineering by sigsegv
 * based on TF2 version 20151007a
 * server/tf/bot/behavior/tf_bot_retreat_to_cover.h
 * used in MvM: TODO
 */


// sizeof: 0x482c
class CTFBotRetreatToCover : public Action<CTFBot>
{
public:
	CTFBotRetreatToCover(Action<CTFBot *> action);
	CTFBotRetreatToCover(float f1);
	virtual ~CTFBotRetreatToCover();
	
	virtual const char *GetName() const override;
	
	virtual ActionResult<CTFBot> OnStart(CTFBot *actor, Action<CTFBot> *action) override;
	virtual ActionResult<CTFBot> Update(CTFBot *actor, float f1) override;
	
	virtual EventDesiredResult<CTFBot> OnMoveToSuccess(CTFBot *actor, const Path *path) override;
	virtual EventDesiredResult<CTFBot> OnMoveToFailure(CTFBot *actor, const Path *path, MoveToFailureType fail) override;
	
	virtual EventDesiredResult<CTFBot> OnStuck(CTFBot *actor) override;
	
	virtual QueryResponse ShouldHurry(const INextBot *nextbot) const override;
	
private:
	UNKNOWN FindCoverArea(CTFBot *actor);
	
	// TODO
};


// TODO: CSearchForCover
// TODO: CTestAreaAgainstThreats