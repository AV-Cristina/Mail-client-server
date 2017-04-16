object Form1: TForm1
  Left = 568
  Top = 246
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = #1055#1086#1095#1090#1086#1074#1099#1081' '#1082#1083#1080#1077#1085#1090
  ClientHeight = 177
  ClientWidth = 329
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 329
    Height = 177
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 8
      Top = 16
      Width = 313
      Height = 145
      Caption = #1042#1093#1086#1076' '#1074' '#1089#1080#1089#1090#1077#1084#1091
      TabOrder = 0
      object Label1: TLabel
        Left = 16
        Top = 48
        Width = 96
        Height = 13
        Caption = #1048#1084#1103' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      end
      object Button1: TButton
        Left = 216
        Top = 104
        Width = 83
        Height = 25
        Caption = #1042#1093#1086#1076
        TabOrder = 0
        OnClick = Button1Click
      end
      object Edit1: TEdit
        Left = 128
        Top = 40
        Width = 169
        Height = 21
        TabOrder = 1
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 329
    Height = 177
    TabOrder = 1
    Visible = False
    object Label2: TLabel
      Left = 16
      Top = 24
      Width = 82
      Height = 13
      Caption = #1048#1084#1103' '#1087#1086#1083#1091#1095#1072#1090#1077#1083#1103
    end
    object GroupBox2: TGroupBox
      Left = 8
      Top = 48
      Width = 313
      Height = 89
      Caption = #1057#1086#1086#1073#1097#1077#1085#1080#1077
      TabOrder = 0
      object Memo1: TMemo
        Left = 6
        Top = 16
        Width = 299
        Height = 65
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
    object Edit2: TEdit
      Left = 120
      Top = 16
      Width = 201
      Height = 21
      TabOrder = 1
    end
    object Button2: TButton
      Left = 240
      Top = 144
      Width = 83
      Height = 25
      Caption = #1054#1090#1087#1088#1072#1074#1080#1090#1100
      TabOrder = 2
      OnClick = Button2Click
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 0
    Width = 329
    Height = 177
    TabOrder = 2
    Visible = False
    object StringGrid: TStringGrid
      Left = 8
      Top = 8
      Width = 313
      Height = 129
      ColCount = 2
      FixedColor = clSkyBlue
      FixedCols = 0
      RowCount = 2
      TabOrder = 0
      ColWidths = (
        86
        222)
    end
    object Button3: TButton
      Left = 240
      Top = 144
      Width = 83
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 1
      OnClick = Button3Click
    end
  end
  object MainMenu1: TMainMenu
    object N4: TMenuItem
      Caption = #1057#1086#1086#1073#1097#1077#1085#1080#1103
      object N6: TMenuItem
        Caption = #1055#1088#1086#1089#1084#1086#1090#1088#1077#1090#1100
        OnClick = N6Click
      end
      object N5: TMenuItem
        Caption = #1054#1090#1087#1088#1072#1074#1080#1090#1100
        OnClick = N5Click
      end
      object N7: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N7Click
      end
    end
    object N8: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N9: TMenuItem
        Caption = #1056#1091#1082#1086#1074#1086#1076#1089#1090#1074#1086' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
        OnClick = N9Click
      end
      object N10: TMenuItem
        Caption = #1054#1090#1095#1077#1090
        OnClick = N10Click
      end
      object N11: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
        OnClick = N11Click
      end
    end
  end
end
