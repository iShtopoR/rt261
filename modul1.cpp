//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
<<<<<<< .mine
USEFORM("modulform2.cpp", Form1);
USEFORM("modul.cpp", Form5);
USEFORM("About.cpp", AboutForm);
||||||| .r45
USEFORM("modul.cpp", Form5);
USEFORM("modulform2.cpp", Form1);
=======
USEFORM("modulform2.cpp", warehouse);
USEFORM("modul.cpp", articlebase);
USEFORM("aboutprogramm.cpp", about);
>>>>>>> .r46
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
		Application->CreateForm(__classid(TAboutForm), &AboutForm);
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
