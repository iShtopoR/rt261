object RateForm1: TRateForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 287
  ClientWidth = 518
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Course_label: TLabel
    Left = 16
    Top = 16
    Width = 28
    Height = 13
    Caption = #1050#1091#1088#1089':'
  end
  object Course_label_status: TLabel
    Left = 48
    Top = 112
    Width = 105
    Height = 13
  end
  object Course_edit: TEdit
    Left = 61
    Top = 13
    Width = 121
    Height = 21
    TabOrder = 0
    Text = '0'
  end
  object Course_button: TButton
    Left = 16
    Top = 48
    Width = 166
    Height = 49
    Caption = #1055#1086#1083#1091#1095#1080#1090#1100
    TabOrder = 1
    OnClick = Course_buttonClick
  end
  object Course_xml: TXMLDocument
    Left = 464
    Top = 56
    DOMVendorDesc = 'MSXML'
  end
  object Course_http: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.Accept = 'text/html, */*'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    HTTPOptions = [hoForceEncodeParams]
    Left = 464
    Top = 8
  end
end
