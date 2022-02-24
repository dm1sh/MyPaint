#pragma once

#include <afxwin.h>

class CPaintView : public CWnd {
public:
	CPaintView() {};
protected:
	CPoint startp = -1, endp = -1;

	BOOL PreCreateWindow(CREATESTRUCT& cs);

	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);

	DECLARE_MESSAGE_MAP()
};
