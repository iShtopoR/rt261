object Form5: TForm5
  Left = 0
  Top = 0
  Caption = #1060#1086#1088#1084#1072' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1103' '#1087#1088#1086#1077#1082#1090#1072
  ClientHeight = 334
  ClientWidth = 527
  Color = clMenuHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 50
    Top = 35
    Width = 63
    Height = 16
    Caption = 'ID '#1087#1088#1086#1077#1082#1090#1072
  end
  object Label2: TLabel
    Left = 50
    Top = 65
    Width = 72
    Height = 16
    Caption = #1050#1086#1076' '#1087#1088#1086#1077#1082#1090#1072
  end
  object Label3: TLabel
    Left = 50
    Top = 95
    Width = 53
    Height = 16
    Caption = #1047#1072#1082#1072#1079#1095#1080#1082
  end
  object Label4: TLabel
    Left = 50
    Top = 125
    Width = 61
    Height = 16
    Caption = #1044#1083#1080#1085#1072', '#1084#1084
  end
  object Label5: TLabel
    Left = 50
    Top = 155
    Width = 71
    Height = 16
    Caption = #1064#1080#1088#1080#1085#1072', '#1084#1084
  end
  object Label6: TLabel
    Left = 50
    Top = 187
    Width = 57
    Height = 16
    Caption = #1054#1087#1080#1089#1072#1085#1080#1077
  end
  object errorLabel: TLabel
    Left = 318
    Top = 306
    Width = 4
    Height = 16
  end
  object IDLabel: TLabel
    Left = 245
    Top = 35
    Width = 4
    Height = 16
    Alignment = taRightJustify
  end
  object Label20: TLabel
    Left = 272
    Top = 254
    Width = 4
    Height = 16
  end
  object Label7: TLabel
    Left = 50
    Top = 217
    Width = 26
    Height = 16
    Caption = #1050#1091#1088#1089
  end
  object projectCodeEdit: TEdit
    Left = 128
    Top = 62
    Width = 121
    Height = 24
    Alignment = taRightJustify
    TabOrder = 0
  end
  object projectConsumerEdit: TEdit
    Left = 128
    Top = 92
    Width = 121
    Height = 24
    Alignment = taRightJustify
    TabOrder = 1
  end
  object boardLengthEdit: TEdit
    Left = 128
    Top = 122
    Width = 121
    Height = 24
    Alignment = taRightJustify
    TabOrder = 2
  end
  object boardWidthEdit: TEdit
    Left = 128
    Top = 152
    Width = 121
    Height = 24
    Alignment = taRightJustify
    TabOrder = 3
  end
  object rateEdit: TEdit
    Left = 128
    Top = 212
    Width = 121
    Height = 24
    Alignment = taRightJustify
    TabOrder = 4
  end
  object getRateButton: TButton
    Left = 50
    Top = 245
    Width = 199
    Height = 25
    Caption = #1042#1074#1077#1089#1090#1080' '#1082#1091#1088#1089' '#1072#1074#1090#1086#1084#1072#1090#1080#1095#1077#1089#1082#1080
    TabOrder = 5
    OnClick = getRateButtonClick
  end
  object enterDataButton: TButton
    Left = 297
    Top = 276
    Width = 145
    Height = 25
    Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1099#1081' '#1087#1088#1086#1077#1082#1090
    TabOrder = 6
    OnClick = enterDataButtonClick
  end
  object chooseMillButton: TButton
    Left = 297
    Top = 245
    Width = 145
    Height = 25
    Caption = #1042#1099#1073#1086#1088' '#1092#1088#1077#1079
    TabOrder = 7
    OnClick = chooseMillButtonClick
  end
  object discriptionEdit: TEdit
    Left = 128
    Top = 182
    Width = 121
    Height = 24
    Alignment = taRightJustify
    AutoSize = False
    TabOrder = 8
  end
  object memoField: TMemo
    Left = 263
    Top = 45
    Width = 256
    Height = 194
    Lines.Strings = (
      'memoField')
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 9
  end
  object openTextFileDialog: TOpenTextFileDialog
    Filter = #1058#1077#1082#1089#1090#1086#1074#1099#1077' '#1092#1072#1081#1083#1099' rtf|*.rtf'
    Encodings.Strings = (
      'ANSI'
      'ASCII'
      'Unicode'
      'UTF-8')
    Top = 88
  end
  object rateXML: TXMLDocument
    Left = 65528
    Top = 8
    DOMVendorDesc = 'MSXML'
  end
  object rateHTTP: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.Accept = 'text/html, */*'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    HTTPOptions = [hoForceEncodeParams]
    Left = 65528
    Top = 40
  end
end
