// Add.cpp : 实现文件
//

#include "stdafx.h"
#include "c++BigHomework.h"
#include "Add.h"
#include "afxdialogex.h"


// CAdd 对话框

IMPLEMENT_DYNAMIC(CAdd, CDialogEx)

CAdd::CAdd(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAdd::IDD, pParent)
{

}

CAdd::~CAdd()
{
}

void CAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAdd, CDialogEx)
END_MESSAGE_MAP()


// CAdd 消息处理程序
