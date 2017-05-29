object Proj_editor_w: TProj_editor_w
  Left = 0
  Top = 0
  Caption = #1052#1086#1080' '#1087#1088#1086#1077#1082#1090#1099
  ClientHeight = 295
  ClientWidth = 702
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label_error: TLabel
    Left = 272
    Top = 274
    Width = 3
    Height = 13
  end
  object proj_grid: TStringGrid
    Left = 24
    Top = 8
    Width = 512
    Height = 249
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object Button3: TButton
    Left = 542
    Top = 152
    Width = 160
    Height = 52
    Caption = #1069#1082#1089#1087#1086#1088#1090' '#1090#1072#1073#1083#1080#1094#1099
    TabOrder = 1
  end
  object But_ed_proj: TButton
    Left = 542
    Top = 13
    Width = 160
    Height = 55
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1087#1088#1086#1077#1082#1090
    TabOrder = 2
    OnClick = But_ed_projClick
  end
  object Butt_instruments: TButton
    Left = 542
    Top = 82
    Width = 160
    Height = 55
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1099
    TabOrder = 3
    OnClick = But_ed_projClick
  end
  object ADOQuery1: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=zaoio' +
      's'
    Parameters = <>
    Left = 544
    Top = 264
  end
end
