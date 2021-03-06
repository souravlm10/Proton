#ifdef __cplusplus
extern "C" {
#endif
extern void cppISteamGameServer_SteamGameServer010_LogOn(void *);
extern void cppISteamGameServer_SteamGameServer010_LogOff(void *);
extern bool cppISteamGameServer_SteamGameServer010_BLoggedOn(void *);
extern bool cppISteamGameServer_SteamGameServer010_BSecure(void *);
extern CSteamID cppISteamGameServer_SteamGameServer010_GetSteamID(void *);
extern bool cppISteamGameServer_SteamGameServer010_SendUserConnectAndAuthenticate(void *, uint32, const void *, uint32, CSteamID *);
extern CSteamID cppISteamGameServer_SteamGameServer010_CreateUnauthenticatedUserConnection(void *);
extern void cppISteamGameServer_SteamGameServer010_SendUserDisconnect(void *, CSteamID);
extern bool cppISteamGameServer_SteamGameServer010_BUpdateUserData(void *, CSteamID, const char *, uint32);
extern bool cppISteamGameServer_SteamGameServer010_BSetServerType(void *, uint32, uint32, uint16, uint16, uint16, const char *, const char *, bool);
extern void cppISteamGameServer_SteamGameServer010_UpdateServerStatus(void *, int, int, int, const char *, const char *, const char *);
extern void cppISteamGameServer_SteamGameServer010_UpdateSpectatorPort(void *, uint16);
extern void cppISteamGameServer_SteamGameServer010_SetGameTags(void *, const char *);
extern void cppISteamGameServer_SteamGameServer010_GetGameplayStats(void *);
extern SteamAPICall_t cppISteamGameServer_SteamGameServer010_GetServerReputation(void *);
extern bool cppISteamGameServer_SteamGameServer010_RequestUserGroupStatus(void *, CSteamID, CSteamID);
extern uint32 cppISteamGameServer_SteamGameServer010_GetPublicIP(void *);
extern void cppISteamGameServer_SteamGameServer010_SetGameData(void *, const char *);
extern EUserHasLicenseForAppResult cppISteamGameServer_SteamGameServer010_UserHasLicenseForApp(void *, CSteamID, AppId_t);
extern HAuthTicket cppISteamGameServer_SteamGameServer010_GetAuthSessionTicket(void *, void *, int, uint32 *);
extern EBeginAuthSessionResult cppISteamGameServer_SteamGameServer010_BeginAuthSession(void *, const void *, int, CSteamID);
extern void cppISteamGameServer_SteamGameServer010_EndAuthSession(void *, CSteamID);
extern void cppISteamGameServer_SteamGameServer010_CancelAuthTicket(void *, HAuthTicket);
#ifdef __cplusplus
}
#endif
