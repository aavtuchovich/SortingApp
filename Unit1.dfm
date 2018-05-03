object Form1: TForm1
  AlignWithMargins = True
  Left = 0
  Top = 0
  HelpContext = 1
  Caption = #1055#1057' '#1089#1088#1072#1074#1085#1077#1085#1080#1103' '#1101#1092#1092#1077#1082#1090#1080#1074#1085#1086#1089#1090#1080' '#1088#1072#1079#1083#1080#1095#1085#1099#1093' '#1084#1077#1090#1086#1076#1086#1074' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080
  ClientHeight = 327
  ClientWidth = 456
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  HelpFile = 'SortingApp.chm'
  Menu = MainMenu1
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 248
    Height = 30
    Caption = #1048#1089#1093#1086#1076#1085#1099#1077' '#1076#1072#1085#1085#1099#1077' '#1076#1083#1103' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 154
    Width = 76
    Height = 19
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold, fsItalic]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 25
    Width = 244
    Height = 19
    Caption = '('#1079#1085#1072#1095#1077#1085#1080#1103' '#1074#1074#1086#1076#1103#1090#1089#1103' '#1095#1077#1088#1077#1079' '#1087#1088#1086#1073#1077#1083')'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Button1: TButton
    Left = 272
    Top = 13
    Width = 121
    Height = 25
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1080#1079' '#1092#1072#1081#1083#1072
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 44
    Width = 443
    Height = 94
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Memo2: TMemo
    Left = 8
    Top = 179
    Width = 443
    Height = 89
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object Button2: TButton
    Left = 16
    Top = 289
    Width = 75
    Height = 25
    Caption = #1042#1099#1087#1086#1083#1085#1080#1090#1100
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 317
    Top = 289
    Width = 131
    Height = 25
    Hint = #1047#1072#1074#1077#1088#1096#1077#1085#1080#1077' '#1088#1072#1073#1086#1090#1099' '#1089' '#1087#1088#1086#1075#1088#1072#1084#1084#1086#1081
    Caption = #1047#1072#1082#1088#1099#1090#1100' '#1087#1088#1086#1075#1088#1072#1084#1084#1091
    ModalResult = 11
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 97
    Top = 289
    Width = 75
    Height = 25
    Caption = #1043#1088#1072#1092#1080#1082#1080
    TabOrder = 5
    OnClick = Button4Click
  end
  object OpenDialog1: TOpenDialog
    Left = 368
    Top = 288
  end
  object MainMenu1: TMainMenu
    Left = 416
    Top = 288
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      ShortCut = 112
      OnClick = N2Click
    end
    object N3: TMenuItem
      Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      OnClick = N3Click
    end
    object N4: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      OnClick = N4Click
    end
  end
end
