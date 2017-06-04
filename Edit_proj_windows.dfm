object Proj_editor_w: TProj_editor_w
  Left = 0
  Top = 0
  Caption = #1052#1086#1080' '#1087#1088#1086#1077#1082#1090#1099
  ClientHeight = 295
  ClientWidth = 631
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
  object Label_error: TLabel
    Left = 464
    Top = 251
    Width = 55
    Height = 13
    Caption = 'Label_error'
  end
  object Label1: TLabel
    Left = 464
    Top = 219
    Width = 31
    Height = 13
    Caption = 'Label1'
  end
  object name: TLabel
    Left = 447
    Top = 9
    Width = 176
    Height = 28
    Caption = #1050#1083#1080#1082#1085#1080#1090#1077' '#1085#1072' '#1103#1095#1077#1081#1082#1091' '#1074' '#1090#1072#1073#1083#1080#1094#1077' '#1080' '#1074#1074#1077#1076#1080#1090#1077' '#1079#1085#1072#1095#1077#1085#1080#1077':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Label2: TLabel
    Left = 464
    Top = 232
    Width = 31
    Height = 13
    Caption = 'Label2'
  end
  object proj_grid: TStringGrid
    Left = 8
    Top = 8
    Width = 433
    Height = 279
    DefaultColWidth = 84
    TabOrder = 0
    OnMouseDown = proj_gridMouseDown
    OnSelectCell = proj_gridSelectCell
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object pj_save_but: TButton
    Left = 447
    Top = 70
    Width = 181
    Height = 54
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = pj_save_butClick
  end
  object Edit_instrums_but: TButton
    Left = 447
    Top = 131
    Width = 182
    Height = 58
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1099
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Edit_instrums_butClick
  end
  object Add_inf: TEdit
    Left = 447
    Top = 43
    Width = 181
    Height = 21
    TabOrder = 3
  end
  object ADOQuery1: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=zaoio' +
      's'
    Parameters = <>
    Left = 592
    Top = 264
  end
end
