﻿#pragma once
#include "afxdialogex.h"


// FileWindow 对话框

class FileWindow : public CDialogEx
{
	DECLARE_DYNAMIC(FileWindow)

public:
	FileWindow(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~FileWindow();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
