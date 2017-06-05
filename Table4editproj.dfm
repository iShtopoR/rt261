object Edit_proj_instrums: TEdit_proj_instrums
  Left = 0
  Top = 0
  Caption = #1056#1077#1076#1072#1082#1090#1086#1088' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1086#1074' '#1087#1088#1086#1077#1082#1090#1072
  ClientHeight = 512
  ClientWidth = 826
  Color = 16562040
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object dostupnie: TLabel
    Left = 544
    Top = 4
    Width = 242
    Height = 17
    Caption = #1057#1087#1080#1089#1086#1082' '#1076#1086#1089#1090#1091#1087#1085#1099#1093' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1086#1074
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -14
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Proektnie: TLabel
    Left = 56
    Top = 4
    Width = 220
    Height = 17
    Caption = #1057#1087#1080#1089#1086#1082' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1086#1074' '#1087#1088#1086#1077#1082#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -14
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label_error: TLabel
    Left = 17
    Top = 447
    Width = 4
    Height = 17
    Color = 16562040
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -14
    Font.Name = 'Tahoma'
    Font.Style = [fsItalic]
    ParentColor = False
    ParentFont = False
  end
  object delbu: TLabel
    Left = 336
    Top = 224
    Width = 157
    Height = 70
    Alignment = taCenter
    Caption = 
      #1044#1083#1103' '#1091#1076#1072#1083#1077#1085#1080#1103' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072' '#1080#1079' '#1087#1088#1086#1077#1082#1090#1072' '#1074#1099#1073#1077#1088#1077#1090#1077' '#1085#1077#1086#1073#1093#1086#1076#1080#1084#1099#1081' '#1080#1085#1089#1090#1088#1091#1084 +
      #1077#1085#1090' '#1074' '#1090#1072#1073#1083#1080#1094#1077' '#1089#1083#1077#1074#1072' '#1080' '#1085#1072#1078#1084#1080#1090#1077' '#1082#1085#1086#1087#1082#1091':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object dobavit: TLabel
    Left = 336
    Top = 69
    Width = 151
    Height = 70
    Alignment = taCenter
    Caption = 
      #1044#1083#1103' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1103' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072' '#1074' '#1087#1088#1086#1077#1082#1090' '#1074#1099#1073#1077#1088#1077#1090#1077' '#1085#1077#1086#1073#1093#1086#1076#1080#1084#1099#1081' '#1080#1085#1089#1090#1088#1091#1084 +
      #1077#1085#1090' '#1074' '#1090#1072#1073#1083#1080#1094#1077' '#1089#1087#1088#1072#1074#1072' '#1080' '#1085#1072#1078#1084#1080#1090#1077' '#1082#1085#1086#1087#1082#1091':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object edit_proj_grid: TStringGrid
    Left = 7
    Top = 27
    Width = 322
    Height = 414
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnMouseDown = edit_proj_gridMouseDown
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object t4_butt_del: TButton
    Left = 336
    Top = 300
    Width = 154
    Height = 57
    Caption = #1059#1076#1072#1083#1080#1090#1100' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = t4_butt_delClick
  end
  object edit_proj_ekz: TStringGrid
    Left = 496
    Top = 27
    Width = 326
    Height = 414
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect]
    ParentFont = False
    TabOrder = 2
    OnMouseDown = edit_proj_ekzMouseDown
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object t4add_butt: TButton
    Left = 335
    Top = 145
    Width = 158
    Height = 57
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = t4add_buttClick
  end
end
