//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("aboutprogramm.cpp", about);
USEFORM("modul.cpp", articlebase);
USEFORM("Rate.cpp", Form1);
USEFORM("modulform2.cpp", warehouse);
USEFORM("Sverla_window_addcpp.cpp", Sverla_window_add);
USEFORM("Edit_proj_windows.cpp", Proj_editor_w);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(Tarticlebase), &articlebase);
		Application->CreateForm(__classid(Twarehouse), &warehouse);
		Application->CreateForm(__classid(Tabout), &about);
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TSverla_window_add), &Sverla_window_add);
		Application->CreateForm(__classid(TProj_editor_w), &Proj_editor_w);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
