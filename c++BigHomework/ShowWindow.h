#pragma once
#include "stdafx.h"
#include "resource.h"
// CShowWindow �Ի���

class CShowWindow : public CDialogEx
{
	DECLARE_DYNAMIC(CShowWindow)

public:
	CShowWindow(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CShowWindow();

// �Ի�������
	enum { IDD = IDD_MAINWINDOW_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnAdd();
	afx_msg void OnBnClickedBtnModify();
	afx_msg void OnBnClickedBtnSearch();
};
