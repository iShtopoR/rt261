object articlebase: Tarticlebase
  Left = 0
  Top = 0
  Caption = #1041#1072#1079#1072' '#1072#1088#1090#1080#1082#1091#1083#1086#1074
  ClientHeight = 571
  ClientWidth = 979
  Color = clMenuHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 120
  TextHeight = 17
  object Label1: TLabel
    Left = 46
    Top = 348
    Width = 55
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1040#1088#1090#1080#1082#1091#1083
  end
  object Label2: TLabel
    Left = 46
    Top = 383
    Width = 59
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
  end
  object Label3: TLabel
    Left = 47
    Top = 415
    Width = 72
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
  end
  object Label5: TLabel
    Left = 46
    Top = 485
    Width = 92
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1045#1076'. '#1080#1079#1084#1077#1088#1077#1085#1080#1103
  end
  object Label4: TLabel
    Left = 52
    Top = 450
    Width = 45
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1056#1077#1089#1091#1088#1089
  end
  object Label6: TLabel
    Left = 366
    Top = 10
    Width = 191
    Height = 33
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1041#1072#1079#1072' '#1072#1088#1090#1080#1082#1091#1083#1086#1074
    Color = clBtnFace
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = 33
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 375
    Top = 479
    Width = 98
    Height = 32
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object article: TEdit
    Left = 167
    Top = 340
    Width = 190
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 1
  end
  object name: TEdit
    Left = 167
    Top = 375
    Width = 190
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 2
  end
  object cost: TEdit
    Left = 167
    Top = 411
    Width = 190
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 3
  end
  object res: TEdit
    Left = 167
    Top = 450
    Width = 190
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 4
  end
  object sunit: TComboBox
    Left = 167
    Top = 485
    Width = 190
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 5
    Items.Strings = (
      #1084#1084
      #1089#1084
      #1084
      #1086#1090#1074)
  end
  object material: TStringGrid
    Left = 27
    Top = 52
    Width = 916
    Height = 253
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    DefaultColWidth = 140
    Enabled = False
    TabOrder = 6
  end
  object Button2: TButton
    Left = 649
    Top = 320
    Width = 294
    Height = 68
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1048#1084#1087#1086#1088#1090' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1084#1072#1090#1077#1088#1080#1072#1083#1086#1074
    TabOrder = 7
  end
  object Button3: TButton
    Left = 649
    Top = 396
    Width = 294
    Height = 68
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1069#1082#1089#1087#1086#1088#1090' '#1090#1072#1073#1083#1080#1094#1099
    TabOrder = 8
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 649
    Top = 472
    Width = 294
    Height = 68
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077
    TabOrder = 9
  end
  object Button5: TButton
    Left = 387
    Top = 370
    Width = 254
    Height = 68
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1056#1072#1089#1089#1095#1077#1090' '#1089#1090#1086#1080#1084#1086#1089#1090#1080
    TabOrder = 10
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 432
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
