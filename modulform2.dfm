object warehouse: Twarehouse
  Left = 0
  Top = 0
  Caption = #1058#1086#1074#1072#1088#1099' '#1085#1072' '#1089#1082#1083#1072#1076#1077
  ClientHeight = 547
  ClientWidth = 1004
  Color = clHighlight
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
  object Артикул: TLabel
    Left = 29
    Top = 360
    Width = 55
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1040#1088#1090#1080#1082#1091#1083
  end
  object Label1: TLabel
    Left = 29
    Top = 391
    Width = 78
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1054#1089#1090'. '#1088#1077#1089#1091#1088#1089
  end
  object Label2: TLabel
    Left = 29
    Top = 430
    Width = 70
    Height = 17
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
  end
  object warehouse: TStringGrid
    Left = 10
    Top = 10
    Width = 984
    Height = 316
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 0
    ColWidths = (
      64
      117
      64
      64
      64)
  end
  object Edit1: TEdit
    Left = 115
    Top = 356
    Width = 201
    Height = 21
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 115
    Top = 391
    Width = 201
    Height = 21
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 2
  end
  object ComboBox1: TComboBox
    Left = 115
    Top = 426
    Width = 201
    Height = 25
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    TabOrder = 3
    Items.Strings = (
      #1053#1086#1074#1072#1103' '#1092#1088#1077#1079#1072
      #1061#1086#1088#1086#1096#1077#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1053#1086#1088#1084#1072#1083#1100#1085#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1055#1083#1086#1093#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086
      #1060#1088#1077#1079#1072' '#1089#1083#1086#1084#1072#1085#1072)
  end
  object Button1: TButton
    Left = 157
    Top = 462
    Width = 98
    Height = 32
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 4
  end
  object Button2: TButton
    Left = 638
    Top = 337
    Width = 315
    Height = 64
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1069#1082#1089#1087#1086#1088#1090' '#1090#1072#1073#1083#1080#1094#1099
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 638
    Top = 409
    Width = 315
    Height = 63
    Margins.Left = 4
    Margins.Top = 4
    Margins.Right = 4
    Margins.Bottom = 4
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077
    TabOrder = 6
  end
  object MainMenu1: TMainMenu
    Left = 8
    Top = 368
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
