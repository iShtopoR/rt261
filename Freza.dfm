object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1056#1077#1076#1072#1082#1090#1086#1088' '#1092#1088#1077#1079#1099
  ClientHeight = 280
  ClientWidth = 888
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 23
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
    Left = 24
    Top = 104
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
  object Label3: TLabel
    Left = 25
    Top = 126
    Width = 56
    Height = 16
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 25
    Top = 148
    Width = 62
    Height = 16
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 25
    Top = 170
    Width = 39
    Height = 16
    Caption = #1056#1077#1089#1091#1088#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OldArt: TLabel
    Left = 103
    Top = 104
    Width = 36
    Height = 16
    Caption = 'OldArt'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OldName: TLabel
    Left = 103
    Top = 126
    Width = 52
    Height = 16
    Caption = 'OldName'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OldCost: TLabel
    Left = 103
    Top = 148
    Width = 44
    Height = 16
    Caption = 'OldCost'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object OldRes: TLabel
    Left = 103
    Top = 172
    Width = 40
    Height = 16
    Caption = 'OldRes'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label12: TLabel
    Left = 480
    Top = 22
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
    Left = 480
    Top = 96
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
  object Label14: TLabel
    Left = 480
    Top = 127
    Width = 56
    Height = 16
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label15: TLabel
    Left = 480
    Top = 150
    Width = 62
    Height = 16
    Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 480
    Top = 177
    Width = 39
    Height = 16
    Caption = #1056#1077#1089#1091#1088#1089
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Measure: TLabel
    Left = 239
    Top = 172
    Width = 41
    Height = 13
    Caption = 'Measure'
  end
  object Panel1: TPanel
    Left = 424
    Top = -24
    Width = 9
    Height = 477
    TabOrder = 0
  end
  object FrIdent: TEdit
    Left = 24
    Top = 52
    Width = 161
    Height = 21
    TabOrder = 1
    Text = 'FrIdent'
    OnChange = FrIdentChange
  end
  object FindOldFr: TButton
    Left = 200
    Top = 50
    Width = 129
    Height = 25
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 2
  end
  object NewResFr: TEdit
    Left = 566
    Top = 176
    Width = 209
    Height = 21
    TabOrder = 3
    Text = 'NewResFr'
    OnChange = NewResFrChange
  end
  object NewArtFr: TEdit
    Left = 566
    Top = 95
    Width = 209
    Height = 21
    TabOrder = 4
    Text = 'NewArtFr'
    OnChange = NewArtFrChange
  end
  object NewNameFr: TEdit
    Left = 566
    Top = 122
    Width = 209
    Height = 21
    TabOrder = 5
    Text = 'NewNameFr'
    OnChange = NewNameFrChange
  end
  object NewCostFr: TEdit
    Left = 566
    Top = 149
    Width = 209
    Height = 21
    TabOrder = 6
    Text = 'NewCostFr'
    OnChange = NewCostFrChange
  end
  object ChangeFr: TButton
    Left = 622
    Top = 224
    Width = 153
    Height = 41
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    TabOrder = 7
  end
end