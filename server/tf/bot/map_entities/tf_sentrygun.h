/* reverse engineering by sigsegv
 * based on TF2 version 20151007a
 * server/tf/bot/map_entities/tf_sentrygun.cpp
 */


// sizeof: 0x390
class CTFBotHintSentrygun : public CBaseTFBotHintEntity
{
public:
	CTFBotHintSentrygun();
	virtual ~CTFBotHintSentrygun();
	
	virtual HintType GetHintType() const;
	
	bool IsAvailableForSelection(CTFPlayer *player) const;
	
	void OnSentryGunDestroyed(CBaseEntity *ent);
	
private:
	// 36c byte 0
	// 370 dword 0
	COutputEvent m_OnSentryGunDestroyed; // +0x374
	// 38c CHandle<?>
};
