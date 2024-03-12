object FormError: TFormError
  Left = 504
  Top = 280
  Width = 389
  Height = 362
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Error'
  Color = clMenuHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelError: TLabel
    Left = 16
    Top = 16
    Width = 42
    Height = 24
    Caption = 'Error'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object MemoError: TMemo
    Left = 16
    Top = 48
    Width = 321
    Height = 201
    Color = clHighlight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
  end
  object BtnErrorExit: TButton
    Left = 16
    Top = 264
    Width = 75
    Height = 25
    Caption = 'E X I T'
    TabOrder = 1
    OnClick = BtnErrorExitClick
  end
  object MainMenu1: TMainMenu
    Left = 392
    object Exit1: TMenuItem
      Caption = 'Exit'
      OnClick = Exit1Click
    end
    object Errors1: TMenuItem
      Caption = 'Errors'
      object Error11: TMenuItem
        Caption = 'Error 1'
        OnClick = Error11Click
      end
      object Error21: TMenuItem
        Caption = 'Error 2'
        OnClick = Error21Click
      end
    end
  end
end
