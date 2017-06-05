object EkzempForm: TEkzempForm
  Left = 0
  Top = 515
  Caption = 'Ekzemp'
  ClientHeight = 249
  ClientWidth = 893
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 139
    Height = 23
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 13
    Top = 99
    Width = 47
    Height = 16
    Caption = #1040#1088#1090#1080#1082#1091#1083
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 13
    Top = 121
    Width = 118
    Height = 16
    Caption = #1054#1089#1090#1072#1074#1096#1080#1081#1089#1103'_'#1088#1077#1089#1091#1088#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 13
    Top = 143
    Width = 62
    Height = 16
    Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ArtOfEkz: TLabel
    Left = 159
    Top = 99
    Width = 49
    Height = 16
    Caption = 'ArtOfEkz'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object RestResEkz: TLabel
    Left = 159
    Top = 121
    Width = 65
    Height = 16
    Caption = 'RestResEkz'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object EkzState: TLabel
    Left = 159
    Top = 147
    Width = 49
    Height = 16
    Caption = 'EkzState'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label12: TLabel
    Left = 464
    Top = 24
    Width = 143
    Height = 23
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label13: TLabel
    Left = 464
    Top = 123
    Width = 102
    Height = 13
    Caption = #1054#1089#1090#1072#1074#1096#1080#1081#1089#1103'_'#1088#1077#1089#1091#1088#1089
  end
  object Label14: TLabel
    Left = 464
    Top = 149
    Width = 54
    Height = 13
    Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
  end
  object IdentifEnt: TLabel
    Left = 13
    Top = 77
    Width = 92
    Height = 16
    Caption = #1048#1076#1077#1085#1090#1080#1092#1080#1082#1072#1090#1086#1088
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object IdentifEkzemp: TLabel
    Left = 159
    Top = 77
    Width = 80
    Height = 16
    Caption = 'IdentifEkzemp'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ChangeOfRestResEkz: TEdit
    Left = 576
    Top = 120
    Width = 161
    Height = 21
    TabOrder = 0
    Text = 'ChangeOfRestResEkz'
  end
  object ChangeEkz: TButton
    Left = 756
    Top = 118
    Width = 129
    Height = 50
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    TabOrder = 1
    OnClick = ChangeEkzClick
  end
  object Panel1: TPanel
    Left = 416
    Top = -10
    Width = 9
    Height = 465
    TabOrder = 2
  end
  object NewState: TComboBox
    Left = 576
    Top = 147
    Width = 161
    Height = 21
    TabOrder = 3
    Text = 'NewState'
    Items.Strings = (
      #1053#1086#1074#1072#1103' '#1092#1088#1077#1079#1072
      #1061#1086#1088#1086#1096#1077#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1053#1086#1088#1084#1072#1083#1100#1085#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1055#1083#1086#1093#1086#1077' '#1082#1072#1095#1077#1089#1090#1074#1086' '#1088#1077#1079#1072
      #1060#1088#1077#1079#1072' '#1089#1083#1086#1084#1072#1085#1072
      '')
  end
end
