object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 179
  ClientWidth = 263
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 17
  object Course_label: TLabel
    Left = 21
    Top = 21
    Width = 36
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1050#1091#1088#1089':'
  end
  object Course_label_status: TLabel
    Left = 63
    Top = 146
    Width = 4
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
  end
  object Course_edit: TEdit
    Left = 80
    Top = 17
    Width = 158
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 0
    Text = '0'
  end
  object Course_button: TButton
    Left = 21
    Top = 63
    Width = 217
    Height = 64
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
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
