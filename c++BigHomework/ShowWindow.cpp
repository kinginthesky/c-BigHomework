// ShowWindow.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "c++BigHomework.h"
#include "ShowWindow.h"
#include "afxdialogex.h"
#include "resource.h"
#include "Add.h"
#include "Modify.h"

// CShowWindow �Ի���

IMPLEMENT_DYNAMIC(CShowWindow, CDialogEx)

CShowWindow::CShowWindow(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShowWindow::IDD, pParent)
{

}

CShowWindow::~CShowWindow()
{
}

void CShowWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShowWindow, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_ADD, &CShowWindow::OnBnClickedBtnAdd)
	ON_BN_CLICKED(IDC_BTN_MODIFY, &CShowWindow::OnBnClickedBtnModify)
	ON_BN_CLICKED(IDC_BTN_SEARCH, &CShowWindow::OnBnClickedBtnSearch)
END_MESSAGE_MAP()


// CShowWindow ��Ϣ�������


void CShowWindow::OnBnClickedBtnAdd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CAdd *addDlg = new CAdd;

	addDlg->Create(IDD_ADD_DIALOG);
	addDlg->ShowWindow(SW_SHOW);
}


void CShowWindow::OnBnClickedBtnModify()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CModify *modifyDlg = new CModify;

	modifyDlg->Create(IDD_MODIFY_DIALOG);
	modifyDlg->ShowWindow(SW_SHOW);

}


char* G2U(const char* gb2312)
{
	int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
	wchar_t* wstr = new wchar_t[len + 1];
	memset(wstr, 0, len + 1);
	MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
	len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
	char* str = new char[len + 1];
	memset(str, 0, len + 1);
	WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
	if (wstr) delete[] wstr;
	return str;
}




void CShowWindow::OnBnClickedBtnSearch()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	sqlite3* conn = NULL;
	//����������ݿ�
	int result = sqlite3_open(G2U("D:\\phone.db"), &conn); //���·���������ģ����Բ���ת�룬�������������ȫ��ת��
	if (result != SQLITE_OK) {
		sqlite3_close(conn);
		
		MessageBox(TEXT("�������ߴ����ݿ�ʧ��"));
	}


	std::string SQLString = "CREATE TABLE   test (name CHAR(124),phone CHAR(124),time CHAR(124), status CHAR(4))";
	BOOL createTableResult = sqlOperation(const_cast<char *>(SQLString.c_str()), &conn);
	//����ʧ��
	if (createTableResult == FALSE)
		MessageBox(TEXT("������ʧ��"));


}
