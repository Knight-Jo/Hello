#include"groupmange.h"


string CreatGroup( string gname ,string ownernumber, int maxnumbers,
		vector<string> usernumbers)
{
	return gname ; 
}
GroupTalk::GroupTalk(string id, string name, string ownernumber,
		int maxnumbers )
	: gid(id) , gname(name), gownernumber(ownernumber), gmaxnumber(maxnumbers)
{
} 

GroupTalk::GroupTalk(string id, string name, string ownernumber,
		int maxnumbers, vector<string> usernumbers)
	: gid(id) , gname(name), gownernumber(ownernumber), gmaxnumber(maxnumbers),
	gusernumbers(usernumbers)
{
} 

GroupMange::GroupMange(vector<GroupTalk> group, int count =0)
	: groupTalkVct(group) , groupCount (0)
{
} 
