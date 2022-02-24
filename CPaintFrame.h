#pragma once

#include <afxwin.h>
#include "CPaintView.h"

class CPaintFrame : public CFrameWnd {
public:
	CPaintFrame() {};
	CPaintView m_wndView;
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
};
