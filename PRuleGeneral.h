#if !defined(AFX_PRULEGENERAL_H__400AD6E7_4FEF_11D3_99CE_000000000000__INCLUDED_)
#define AFX_PRULEGENERAL_H__400AD6E7_4FEF_11D3_99CE_000000000000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PRuleGeneral.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// PRuleGeneral dialog

class PRuleGeneral : public CPropertyPage
{
	DECLARE_DYNCREATE(PRuleGeneral)

// Construction
public:
	PRuleGeneral(CRule* pRule=0,bool bReadOnly=false);
	~PRuleGeneral();

	CRule* m_pRule;
	bool m_bReadOnly;

// Dialog Data
	//{{AFX_DATA(PRuleGeneral)
	enum { IDD = IDD_RULE_GENERAL };
	int		m_nPlayerNum;
	BOOL	m_bClockWise;
	BOOL	m_bHideScore;
	BOOL	m_bShowFriend;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(PRuleGeneral)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(PRuleGeneral)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PRULEGENERAL_H__400AD6E7_4FEF_11D3_99CE_000000000000__INCLUDED_)