void Clan_Init(int Client)
{
	char ClanName[32];
	CS_GetClientClanTag(Client, ClanName, sizeof(ClanName));
	if (StrEqual(ClanName, "UB游戏社区", false) || StrEqual(ClanName, "UBΣ", false))
	{
		Clan_Give(Client);
	}
}
void Clan_Give(int Client)
{
	CPrintToChat(Client, "{green}[ZA]{default} 获得官方队标奖励");
}