//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Freza.h"
#include "Ekzemp.h"
#include "modulform2.h"
#include "modul.h"
#include <mysql.h>
#include <stdlib.h>
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrezes *Frezes;
//---------------------------------------------------------------------------
__fastcall TFrezes::TFrezes(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFrezes::ChangeFrClick(TObject *Sender)
{
	mysql_server_init(0, NULL, NULL);
	MYSQL* db = mysql_init(NULL);
	mysql_real_connect(db, "zaoios.ru", "rt_2018", "rt2_2018", "rt_rescalc", 0, NULL, 0);
	AnsiString query = "";
	query = query + "UPDATE rt_material SET m_article = '" + NewArtFr->Text + "', m_name = '" + NewNameFr->Text + "', m_cost = " + NewCostFr->Text + ", m_resource = " + NewResFr->Text + " WHERE m_article = " + StrToInt(OldArt->Caption);		mysql_query(db, query.c_str());
	Close();
	articlebase->tableupdate();
}
//---------------------------------------------------------------------------



