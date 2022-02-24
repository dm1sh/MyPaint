#include "CPaintView.h"
#include "resource.h"

BEGIN_MESSAGE_MAP(CPaintView, CWnd)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

void CPaintView::OnLButtonDown(UINT nFlags, CPoint point) {
	TRACE(L"Нажата левая кнопка мыши с %lx флагами и (%d,%d) координатами\n", (long)nFlags, point.y, point.y);
	startp = point;

	CWnd::OnLButtonDown(nFlags, point);
}

void CPaintView::OnMouseMove(UINT nFlags, CPoint point) {
	endp = point;

	if (startp.x != -1) {
		CClientDC dc(this);
		dc.MoveTo(startp);
		dc.LineTo(endp);
		startp = endp;
	}

	CWnd::OnMouseMove(nFlags, point);
}

void CPaintView::OnLButtonUp(UINT nFlags, CPoint point) {
	startp = -1;

	CWnd::OnLButtonUp(nFlags, point);
}

BOOL CPaintView::PreCreateWindow(CREATESTRUCT& cs)
{
	if (!CWnd::PreCreateWindow(cs))
		return FALSE;

	cs.lpszClass = AfxRegisterWndClass(CS_VREDRAW | CS_HREDRAW, LoadCursor(AfxGetResourceHandle(), MAKEINTRESOURCE(IDC_PENCIL)), CreateSolidBrush(RGB(255, 255, 255)));

	return TRUE;
}
