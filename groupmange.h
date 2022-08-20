#ifndef MY_GROUP_MANGE 
#define MY_GROUP_MANGE
#include<iostream> 
#include<string> 
#include<vector> 
#include<algorithm> 
#include<assert.h> 

using namespace std ; 
string CreatGroup( string gname, string ownernumber, int maxnumbers,
	   	vector<string> usernumbers ) ;
string Invite(string usernumber) ; // invite friends  
string Search( string id) ;		// search gid  
string AddRequst(string buf) ;  // request for joining
string Dissolve( string buf) ;	// dissolv the group 
								
								
class GroupTalk{
public:
	GroupTalk( string id, string name, string ownernumbe, 
			int maxnumbers) ; 
	GroupTalk( string id, string name, string ownernumbe,
			int maxnumbers , vector<string> usernumbers) ; 

	~GroupTalk() ; 	
	
	string getgid(){ return gid ; } 
	string getgname(){return gname; } 
	string setgname(string name) { gname = name ; return gname ; } 
	string getownernumber(){return gownernumber ; } 
	int getMaxNumber(){ return gmaxnumber ; } 
private:
	string gid ; 
	string gname ; 
	string gownernumber ; 
	int gmaxnumber ; 
	vector<string> gusernumbers ; 

} ; 
class GroupMange{
public:
	GroupMange(vector<GroupTalk> group, int count);
private:
	vector<GroupTalk> groupTalkVct ; 
	int groupCount ;
} ; 
#endif   // MY_GROUP_MANGE
