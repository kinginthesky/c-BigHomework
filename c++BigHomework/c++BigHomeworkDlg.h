
// c++BigHomeworkDlg.h : ͷ�ļ�
//

#pragma once


// CcBigHomeworkDlg �Ի���
class CcBigHomeworkDlg : public CDialogEx
{
// ����
public:
	CcBigHomeworkDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CBIGHOMEWORK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_username;
	CString m_password;
	int user;
	int admin;
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
};
