//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("aboutprogramm.cpp", about);
USEFORM("Edit_proj_windows.cpp", Proj_editor_w);
USEFORM("modul.cpp", articlebase);
USEFORM("modulform2.cpp", warehouse);
USEFORM("Rate.cpp", Form1);
USEFORM("T4addtrack.cpp", T4addtrack1);
USEFORM("Table4editproj.cpp", Edit_proj_instrums);
USEFORM("Freza.cpp", Frezes);
USEFORM("Ekzemp.cpp", EkzempForm);
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
		Application->CreateForm(__classid(TT4addtrack1), &T4addtrack1);
		Application->CreateForm(__classid(TFrezes), &Frezes);
		Application->CreateForm(__classid(TEkzempForm), &EkzempForm);
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
