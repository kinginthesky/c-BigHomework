#include "login_common.h"
#include "stdafx.h"

//����û��������Ƿ���ȷ
BOOL check(CString username, CString password, int user)
{
	//sqlite3 *pDataBase = NULL;
	////�����ݿ�
	////���·���������ģ����Բ���ת�롣�����������������ȫ��ת�롣
	//string path = getDbDirName()+".db";//���ݿ�·��
	//int iRet = sqlite3_open(G2U(path.c_str()), &pDataBase); //���·���������ģ����Բ���ת�룬�������������ȫ��ת��
	//if (iRet)
	//{
	//	LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "���ݿ��ʧ�ܣ�ʧ��ԭ��:%s", sqlite3_errmsg(pDataBase));
	//}
	//else
	//{
	//	LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "���ݿ�򿪳ɹ�");
	//	//�Բ�ѯ��ʽ��ѯ����
	//	temp_json_data = QueryTable(pDataBase, sql);
	//	//�ر����ݿ�
	//	iRet = sqlite3_close(pDataBase);
	//	if (0 == iRet)
	//	{
	//		LOG(LogLevel::INFO_OPT, STRINGIZE(__FILE__), STRINGIZE(__LINE__), "���ݿ�رճɹ�");
	//	}
	//}
	//�������ͨ�û�
	if (user == 1)
	{

	}
	else//�����ǹ���Ա
	{

	}
	return 1;
}