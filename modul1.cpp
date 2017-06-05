//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Rate.cpp", Form1);
USEFORM("modulform2.cpp", warehouse);
USEFORM("Freza.cpp", Frezes);
USEFORM("Ekzemp.cpp", EkzempForm);
USEFORM("aboutprogramm.cpp", about);
USEFORM("modul.cpp", articlebase);
USEFORM("ZakharovSemenyakina.cpp", Form5);
USEFORM("Edit_proj_windows.cpp", Proj_editor_w);
USEFORM("T4addtrack.cpp", T4addtrack1);
USEFORM("Table4editproj.cpp", Edit_proj_instrums);
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
		Application->CreateForm(__classid(TFrezes), &Frezes);
		Application->CreateForm(__classid(TEkzempForm), &EkzempForm);
		Application->CreateForm(__classid(TForm5), &Form5);
		Application->CreateForm(__classid(TProj_editor_w), &Proj_editor_w);
		Application->CreateForm(__classid(TT4addtrack1), &T4addtrack1);
		Application->CreateForm(__classid(TEdit_proj_instrums), &Edit_proj_instrums);
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
