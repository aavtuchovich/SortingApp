object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090' '#1074#1099#1087#1086#1083#1085#1077#1085#1080#1103' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080
  ClientHeight = 405
  ClientWidth = 734
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Chart1: TChart
    Left = 0
    Top = 8
    Width = 726
    Height = 358
    Legend.CheckBoxes = True
    Legend.LegendStyle = lsValues
    Legend.TextStyle = ltsPlain
    Title.Font.Height = -21
    Title.Font.Name = 'Times New Roman'
    Title.Font.Style = [fsBold]
    Title.Text.Strings = (
      #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1074#1099#1087#1086#1083#1085#1077#1085#1085#1099#1093' '#1086#1087#1077#1088#1072#1094#1080#1081)
    BottomAxis.Visible = False
    View3D = False
    View3DOptions.Elevation = 360
    View3DOptions.Orthogonal = False
    View3DOptions.Rotation = 360
    Zoom.AnimatedSteps = 12
    TabOrder = 0
    PrintMargins = (
      15
      21
      15
      21)
    object Series1: TBarSeries
      Marks.Arrow.Visible = True
      Marks.Callout.Brush.Color = clBlack
      Marks.Callout.Arrow.Visible = True
      Marks.Style = smsValue
      Marks.Visible = True
      Gradient.Direction = gdTopBottom
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Bar'
      YValues.Order = loNone
      Data = {
        04060000000000000000648940FF16000000CFF3E7FBF0FCEAEEE2E0FF20F1EE
        F0F2E8F0EEE2EAE00000000000C48840FF0F000000CCE5F2EEE4EEEC20E2F1F2
        E0E2EAE80000000000D88840FF00000000000000000000F03FFF000000000000
        000000488C40FF000000000000000000F08E40FF00000000}
    end
  end
  object Button1: TButton
    Left = 357
    Top = 372
    Width = 75
    Height = 25
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 1
    OnClick = Button1Click
  end
end
