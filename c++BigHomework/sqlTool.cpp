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
	//�ͷŴ��������������Դ��
	sqlite3_finalize(stmt);
	
	return TRUE;

}