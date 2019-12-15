#pragma once
#include "stdafx.h"
#include "resource.h"
// CShowWindow 对话框

class CShowWindow : public CDialogEx
{
	DECLARE_DYNAMIC(CShowWindow)

public:
	CShowWindow(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CShowWindow();

// 对话框数据
	enum { IDD = IDD_MAINWINDOW_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnModify();
	afx_msg void OnBnClickedBtnSearch();
};
