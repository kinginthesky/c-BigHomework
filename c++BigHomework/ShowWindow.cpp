// ShowWindow.cpp : 实现文件
//

#include "stdafx.h"
#include "c++BigHomework.h"
#include "ShowWindow.h"
#include "afxdialogex.h"
#include "resource.h"
#include "Add.h"
#include "Modify.h"

// CShowWindow 对话框

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
END_MESSAGE_MAP()


// CShowWindow 消息处理程序


void CShowWindow::OnBnClickedBtnAdd()
{
	// TODO:  在此添加控件通知处理程序代码
	CAdd *addDlg = new CAdd;

	addDlg->Create(IDD_ADD_DIALOG);
	addDlg->ShowWindow(SW_SHOW);
}


void CShowWindow::OnBnClickedBtnModify()
{
	// TODO:  在此添加控件通知处理程序代码
	CModify *modifyDlg = new CModify;

	modifyDlg->Create(IDD_MODIFY_DIALOG);
	modifyDlg->ShowWindow(SW_SHOW);

}
