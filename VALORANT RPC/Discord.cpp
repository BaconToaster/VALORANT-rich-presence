#include "Discord.h"

void Discord::Init()
{
    DiscordEventHandlers handle;
    memset(&handle, 0, sizeof(handle));
    Discord_Initialize("708302970256752740", &handle, 1, NULL);
}

void Discord::Update(const char* mode, int64_t eptime, const char* idkVar)
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = idkVar;
    discordPresence.details = mode;
    discordPresence.startTimestamp = eptime;
    discordPresence.largeImageKey = "icon";
    discordPresence.largeImageText = "BaconRPC for VALORANT";
    Discord_UpdatePresence(&discordPresence);
}
