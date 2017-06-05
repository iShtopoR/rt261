object warehouse: Twarehouse
  Left = 0
  Top = 0
  Caption = #1058#1086#1074#1072#1088#1099' '#1085#1072' '#1089#1082#1083#1072#1076#1077
  ClientHeight = 454
  ClientWidth = 775
  Color = clHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Артикул: TLabel
    Left = 22
    Top = 307
    Width = 43
    Height = 13
    Caption = #1040#1088#1090#1080#1082#1091#1083
  end
  object Label1: TLabel
    Left = 22
    Top = 331
    Width = 60
    Height = 13
    Caption = #1054#1089#1090'. '#1088#1077#1089#1091#1088#1089
  end
  object Label2: TLabel
    Left = 22
    Top = 361
    Width = 54
    Height = 13
    Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
  end
  object Label3: TLabel
    Left = 248
    Top = 304
    Width = 3
    Height = 13
  end
  object Label4: TLabel
    Left = 232
    Top = 8
    Width = 274
    Height = 30
    Caption = #1041#1072#1079#1072' '#1090#1086#1074#1072#1088#1086#1074' '#1085#1072' '#1089#1082#1083#1072#1076#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ores: TEdit
    Left = 88
    Top = 331
    Width = 154
    Height = 21
    TabOrder = 0
  end
  object wstatus: TComboBox
    Left = 88
    Top = 358
    Width = 154
    Height = 21
    Style = csDropDownList
    TabOrder = 1
    Items.Strings = (
      #1053#1086#1074#1072#1103' '#1092#1088#1077#1079#1072
      #1061#1086#1088#1086#1096#1077#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1053#1086#1088#1084#1072#1083#1100#1085#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1055#1083#1086#1093#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086
      #1060#1088#1077#1079#1072' '#1089#1083#1086#1084#1072#1085#1072)
  end
  object Button1: TButton
    Left = 120
    Top = 385
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 488
    Top = 290
    Width = 241
    Height = 49
    Caption = #1069#1082#1089#1087#1086#1088#1090' '#1090#1072#1073#1083#1080#1094#1099
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 488
    Top = 345
    Width = 241
    Height = 48
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077
    TabOrder = 4
    OnClick = Button3Click
  end
  object warehouse: TStringGrid
    Left = 29
    Top = 44
    Width = 700
    Height = 241
    ColCount = 4
    DefaultColWidth = 173
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 5
    OnSelectCell = warehouseSelectCell
  end
  object articlebox: TComboBox
    Left = 88
    Top = 304
    Width = 154
    Height = 21
    Style = csDropDownList
    TabOrder = 6
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
        Caption = #1041#1072#1079#1072' '#1072#1088#1090#1080#1082#1091#1083#1086#1074
        OnClick = N4Click
      end
    end
  end
end
