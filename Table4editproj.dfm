object Edit_proj_instrums: TEdit_proj_instrums
  Left = 0
  Top = 0
  Caption = 'Edit_proj_instrums'
  ClientHeight = 609
  ClientWidth = 894
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
  object Код: TLabel
    Left = 330
    Top = 19
    Width = 65
    Height = 13
    Caption = #1050#1086#1076' '#1087#1088#1086#1077#1082#1090#1072
  end
  object клиент: TLabel
    Left = 330
    Top = 46
    Width = 37
    Height = 13
    Caption = #1050#1083#1080#1077#1085#1090
  end
  object длина: TLabel
    Left = 328
    Top = 108
    Width = 32
    Height = 13
    Caption = #1044#1083#1080#1085#1072
  end
  object шир: TLabel
    Left = 328
    Top = 135
    Width = 40
    Height = 13
    Caption = #1064#1080#1088#1080#1085#1072
  end
  object прим: TLabel
    Left = 328
    Top = 73
    Width = 61
    Height = 13
    Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
  end
  object Label_error: TLabel
    Left = 359
    Top = 154
    Width = 3
    Height = 13
  end
  object dostupnie: TLabel
    Left = 648
    Top = 8
    Width = 162
    Height = 13
    Caption = #1057#1087#1080#1089#1086#1082' '#1076#1086#1089#1090#1091#1087#1085#1099#1093' '#1101#1082#1079#1077#1084#1087#1083#1103#1088#1086#1074
  end
  object Proektnie: TLabel
    Left = 72
    Top = 8
    Width = 148
    Height = 13
    Caption = #1057#1087#1080#1089#1086#1082' '#1101#1082#1079#1077#1084#1087#1083#1103#1088#1086#1074' '#1087#1088#1086#1077#1082#1090#1072
  end
  object Label6: TLabel
    Left = 372
    Top = 184
    Width = 31
    Height = 13
    Caption = 'Label6'
  end
  object edit_proj_grid: TStringGrid
    Left = 8
    Top = 19
    Width = 322
    Height = 529
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object t3_edit_code: TEdit
    Left = 401
    Top = 16
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object t3_edit_name: TEdit
    Left = 401
    Top = 43
    Width = 145
    Height = 21
    TabOrder = 2
  end
  object t3_edit_l: TEdit
    Left = 401
    Top = 105
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object t3_edit_dscr: TEdit
    Left = 401
    Top = 70
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object t3_edit_w: TEdit
    Left = 401
    Top = 132
    Width = 145
    Height = 21
    TabOrder = 5
  end
  object t4_butt_save: TButton
    Left = 359
    Top = 408
    Width = 145
    Height = 57
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
    TabOrder = 6
  end
  object edit_proj_ekz: TStringGrid
    Left = 564
    Top = 27
    Width = 322
    Height = 529
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSelect]
    TabOrder = 7
    OnMouseDown = edit_proj_ekzMouseDown
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object t4add_butt: TButton
    Left = 359
    Top = 289
    Width = 145
    Height = 57
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090
    TabOrder = 8
    OnClick = t4add_buttClick
  end
  object ADOQuery1: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=zaoio' +
      's'
    Parameters = <>
    Left = 392
    Top = 232
  end
end
