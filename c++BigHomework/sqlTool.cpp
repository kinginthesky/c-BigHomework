#include "sqlTool.h"
#include "stdafx.h"
BOOL  sqlOperation(char *SQL, sqlite3 **conn){

	sqlite3_stmt* stmt = NULL;
	int a = sqlite3_prepare_v2(*conn, SQL, strlen(SQL), &stmt, NULL);
	if (sqlite3_prepare_v2(*conn, SQL, strlen(SQL), &stmt, NULL) != SQLITE_OK) {
		if (stmt)
			sqlite3_finalize(stmt);
		sqlite3_close(*conn);
		
		return FALSE;
	}
	if (sqlite3_step(stmt) != SQLITE_DONE) {
		sqlite3_finalize(stmt);
		sqlite3_close(*conn);
		
		return FALSE;
	}
	//释放创建表语句对象的资源。
	sqlite3_finalize(stmt);
	
	return TRUE;

}