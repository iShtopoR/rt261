object Sverla_window_add: TSverla_window_add
  Left = 0
  Top = 0
  Caption = 'Sverla_window_add'
  ClientHeight = 273
  ClientWidth = 601
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
    Left = 34
    Top = 76
    Width = 65
    Height = 13
    Caption = #1050#1086#1076' '#1087#1088#1086#1077#1082#1090#1072
  end
  object клиент: TLabel
    Left = 34
    Top = 103
    Width = 37
    Height = 13
    Caption = #1050#1083#1080#1077#1085#1090
  end
  object длина: TLabel
    Left = 304
    Top = 76
    Width = 32
    Height = 13
    Caption = #1044#1083#1080#1085#1072
  end
  object шир: TLabel
    Left = 304
    Top = 103
    Width = 40
    Height = 13
    Caption = #1064#1080#1088#1080#1085#1072
  end
  object прим: TLabel
    Left = 32
    Top = 130
    Width = 61
    Height = 13
    Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
  end
  object Label_error: TLabel
    Left = 271
    Top = 130
    Width = 107
    Height = 13
  end
  object pj_edit_grid: TStringGrid
    Left = 34
    Top = 8
    Width = 522
    Height = 49
    TabOrder = 0
    RowHeights = (
      24
      24
      24
      24
      24)
  end
  object t3_edit_code: TEdit
    Left = 105
    Top = 73
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object t3_edit_name: TEdit
    Left = 105
    Top = 100
    Width = 145
    Height = 21
    TabOrder = 2
  end
  object t3_edit_l: TEdit
    Left = 377
    Top = 73
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object t3_edit_dscr: TEdit
    Left = 105
    Top = 127
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object t3_edit_w: TEdit
    Left = 377
    Top = 100
    Width = 145
    Height = 21
    TabOrder = 5
  end
  object t3_butt_save: TButton
    Left = 233
    Top = 168
    Width = 145
    Height = 57
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
    TabOrder = 6
  end
  object ADOQuery1: TADOQuery
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=zaoio' +
      's'
    Parameters = <>
    Left = 512
    Top = 168
  end
end
