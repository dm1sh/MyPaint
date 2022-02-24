#include "MyPaint.h"
#include "CPaintFrame.h"
#include "resource.h"

CMyPaint myApp;

BOOL CMyPaint::InitInstance() {
	CWinApp::InitInstance();

	CPaintFrame* pFrame = new CPaintFrame();
	if (!pFrame)
		return FALSE;
	m_pMainWnd = pFrame;

	CString pFrameClass = AfxRegisterWndClass(NULL, nullptr, nullptr, LoadIcon(IDI_PENCIL));

	pFrame->Create(pFrameClass, L"My paint :D");

	pFrame->ShowWindow(m_nCmdShow);
	pFrame->UpdateWindow();

	return TRUE;
}
