object articlebase: Tarticlebase
  Left = 0
  Top = 0
  Caption = #1041#1072#1079#1072' '#1072#1088#1090#1080#1082#1091#1083#1086#1074
  ClientHeight = 442
  ClientWidth = 749
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 35
    Top = 234
    Width = 43
    Height = 13
    Caption = #1040#1088#1090#1080#1082#1091#1083
  end
  object Label2: TLabel
    Left = 35
    Top = 261
    Width = 48
    Height = 13
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
  end
  object Label3: TLabel
    Left = 36
    Top = 285
    Width = 54
    Height = 13
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
  end
  object Label5: TLabel
    Left = 35
    Top = 339
    Width = 73
    Height = 13
    Caption = #1045#1076'. '#1080#1079#1084#1077#1088#1077#1085#1080#1103
  end
  object Label4: TLabel
    Left = 40
    Top = 312
    Width = 34
    Height = 13
    Caption = #1056#1077#1089#1091#1088#1089
  end
  object Button1: TButton
    Left = 287
    Top = 334
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 0
  end
  object article: TEdit
    Left = 128
    Top = 228
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object name: TEdit
    Left = 128
    Top = 255
    Width = 145
    Height = 21
    TabOrder = 2
  end
  object cost: TEdit
    Left = 128
    Top = 282
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object res: TEdit
    Left = 128
    Top = 312
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object sunit: TComboBox
    Left = 128
    Top = 339
    Width = 145
    Height = 21
    TabOrder = 5
    Items.Strings = (
      #1084#1084
      #1089#1084
      #1084
      #1086#1090#1074)
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 8
    Width = 733
    Height = 193
    TabOrder = 6
  end
  object Button2: TButton
    Left = 496
    Top = 213
    Width = 225
    Height = 52
    Caption = #1048#1084#1087#1086#1088#1090' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1084#1072#1090#1077#1088#1080#1072#1083#1086#1074
    TabOrder = 7
  end
  object Button3: TButton
    Left = 496
    Top = 271
    Width = 225
    Height = 52
    Caption = #1069#1082#1089#1087#1086#1088#1090' '#1090#1072#1073#1083#1080#1094#1099
    TabOrder = 8
  end
  object Button4: TButton
    Left = 496
    Top = 363
    Width = 225
    Height = 52
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077
    TabOrder = 9
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 400
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1057#1082#1083#1072#1076
      object N4: TMenuItem
        Caption = #1058#1086#1074#1072#1088#1099' '#1085#1072' '#1089#1082#1083#1072#1076#1077
        OnClick = N4Click
      end
    end
  end
end
