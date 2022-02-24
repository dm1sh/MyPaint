#include "CPaintFrame.h"

BEGIN_MESSAGE_MAP(CPaintFrame, CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()

int CPaintFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	CFrameWnd::OnCreate(lpCreateStruct);

	m_wndView.Create(nullptr, nullptr, AFX_WS_DEFAULT_VIEW, CRect(0, 0, 0, 0), this, AFX_IDW_PANE_FIRST);
	return 0;
}
