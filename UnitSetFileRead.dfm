object FormSetFileRead: TFormSetFileRead
  Left = 403
  Top = 380
  Width = 315
  Height = 169
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Set File Read From'
  Color = clNavy
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object EditSetFileRead: TEdit
    Left = 48
    Top = 32
    Width = 201
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = 'read.txt'
  end
  object BtnSetFileRead: TButton
    Left = 176
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Set'
    TabOrder = 1
    OnClick = BtnSetFileReadClick
  end
end
