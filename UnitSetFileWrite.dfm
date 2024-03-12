object FormSetFileWrite: TFormSetFileWrite
  Left = 550
  Top = 296
  Width = 313
  Height = 166
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Set File Write To'
  Color = clNavy
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object EditSetFileWrite: TEdit
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
    Text = 'write.txt'
  end
  object BtnSetFileWrite: TButton
    Left = 176
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Set'
    TabOrder = 1
    OnClick = BtnSetFileWriteClick
  end
end
