// Copyright Stanislav Vasilev. All rights reserved.

#include "DiscordFunctions.h"
#include <chrono>

namespace disc
{
	discord::Core* core{}; 
}

void UDiscordFunctions::RunCallBacksToDisc()
{
	disc::core->RunCallbacks();
}

void UDiscordFunctions::RunPresence(FString Player, int64 EndTime, bool bShouldHaveEndTime)
{	
	auto result = discord::Core::Create(697420452712284202, DiscordCreateFlags_NoRequireDiscord, &disc::core);
	discord::Activity activity{};
	discord::User user{};
	
	int64 StartTimeInInt = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

	char* PlayingAs = TCHAR_TO_ANSI(*Player);
	activity.SetState(PlayingAs);
	activity.SetDetails("Pre-Alpha Testing");
	activity.GetAssets().SetLargeImage("anomaly-export");
	activity.GetAssets().SetLargeText("Get a free copy at discord.gg/4wgH8ZE");
	activity.GetTimestamps().SetStart(StartTimeInInt);
	if (bShouldHaveEndTime)
	{
		activity.GetTimestamps().SetEnd(EndTime);
	}
	disc::core->ActivityManager().UpdateActivity(activity, [](discord::Result result) {});
	
}

RoleType UDiscordFunctions::CheckRole()
{
	discord::User user{};
	int64 id = user.GetId();

	if (id == 695224936985264219 || id == 746389802521460736 || id == 601501288978448411)
	{
		return CREATOR;
	}
	else if(id == 287966817383874560 || id == 165554929107206144 || id == 330227754287104001 || id == 643205010292736020 || id == 324617194795171840 || id == 648527310814707722)
	{
		return MODERATOR;
	}
	else if (id == 686986190024343602 || id == 353531501826015243 || id == 702132245296709662 || id == 415057593170657293  || id == 446684110665023501 || id == 407336011186831362 || id == 278126141661773825 || id == 480257502068604928 || id == 468843330076147733 || id == 407336011186831362 || id == 622462671131901973 || id == 443392402007523328 || id == 349255625160785930 || id == 497125688848154626 || id == 249886748908191744)
	{
		return PRE_ALPHA_TESTER;
	}
	else if (id == 463959883046453249 || id == 708752218400227458 || id == 565589902465433708 || id == 687309713355833377 || id == 363329082316029952 || id == 652256718050426880 || id == 412577083915501578 || id == 213417506692399104 || id == 295979779570532352 || id == 440532878992998414 || id == 249523486828003328 || id == 604631268289937419 || id == 676763652367450112 || id == 740975339593007124 || id == 675725438320115726 || id == 469999280422256669 || id == 696951411988103169 || id == 191254252402900993 || id == 520696535311188000 || id == 455806324131889162 || id == 615496288800342056 || id == 714060687072034876 || id == 555855412818214912 || id == 411987480607195136 || id == 365859941292048384 || id == 266874291155501056 || id == 685848894923341858)
	{
		return ALPHA_TESTER;
	}
	else
	{
		return BETA_TESTER;
	}
	
	return RELEASE;
}

int UDiscordFunctions::SetRoleType()
{
	RoleType Role = CheckRole();

	switch (Role)
	{
	case CREATOR: return 1;
	case MODERATOR:	return 2;
	case PRE_ALPHA_TESTER: return 3;
	case ALPHA_TESTER: return 4;
	case BETA_TESTER: return 5;
	case RELEASE: return 6;
	default: 
		UE_LOG(LogTemp, Error, TEXT("Role could not be checked! Please try restarting your discord instance!"))
	}
	return 0;
}
