#include "login_common.h"
#include "stdafx.h"

//检查用户名密码是否正确
BOOL check(CString username, CString password, int user)
{
	//sqlite3 *pDataBase = NULL;
	////打开数据库
	////如果路径不含中文，可以不用转码。不过保险起见，建议全部转码。
	//string path = getDbDirName()+".db";//数据库路径
	//int iRet = sqlite3_open(G2U(path.c_str()), &pDataBase); //如果路径不含中文，可以不用转码，保险起见，建议全部转码
	//if (iRet)
	//{
	//	LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "数据库打开失败，失败原因:%s", sqlite3_errmsg(pDataBase));
	//}
	//else
	//{
	//	LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "数据库打开成功");
	//	//以查询表方式查询数据
	//	temp_json_data = QueryTable(pDataBase, sql);
	//	//关闭数据库
	//	iRet = sqlite3_close(pDataBase);
	//	if (0 == iRet)
	//	{
	//		LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "数据库关闭成功");
	//	}
	//}
	//如果是普通用户
	if (user == 1)
	{

	}
	else//否则是管理员
	{

	}
	return 1;
}