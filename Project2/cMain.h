#pragma once
#include <wx/wx.h>
//#include <wx/dialog.h>
//#include <wx/generic/dirdlgg.h>
//#include <wx/univ/listbox.h>

class cMain : public wxFrame
{
public:

	cMain();
	~cMain();

public:

	int w = 10;
	int h = 10;
	wxButton** b;

	int* nf = nullptr;
	bool fc = true;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

