object FormMoreExps: TFormMoreExps
  Left = 477
  Top = 137
  Width = 726
  Height = 485
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Expressions'
  Color = clNavy
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenuME
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object LabelME_RvsD: TLabel
    Left = 24
    Top = 88
    Width = 34
    Height = 13
    Caption = 'Radian'
  end
  object BtnMEExps: TButton
    Left = 24
    Top = 48
    Width = 113
    Height = 25
    Caption = 'Expressions'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = BtnMEExpsClick
  end
  object BtnMERes: TButton
    Left = 600
    Top = 48
    Width = 83
    Height = 25
    Caption = 'Results'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = BtnMEResClick
  end
  object BtnMEClean: TButton
    Left = 488
    Top = 368
    Width = 75
    Height = 25
    Caption = 'Clean'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    OnClick = BtnMECleanClick
  end
  object BtnMEExit: TButton
    Left = 616
    Top = 368
    Width = 75
    Height = 25
    Caption = 'Exit'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = BtnMEExitClick
  end
  object EditMEExp0: TEdit
    Left = 24
    Top = 104
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object EditMEExp1: TEdit
    Left = 24
    Top = 128
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object EditMEExp2: TEdit
    Left = 24
    Top = 152
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
  end
  object EditMEExp3: TEdit
    Left = 24
    Top = 176
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
  end
  object EditMEExp4: TEdit
    Left = 24
    Top = 200
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
  end
  object EditMEExp5: TEdit
    Left = 24
    Top = 224
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object EditMEExp6: TEdit
    Left = 24
    Top = 248
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
  end
  object EditMEExp7: TEdit
    Left = 24
    Top = 272
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
  end
  object EditMEExp8: TEdit
    Left = 24
    Top = 296
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
  end
  object EditMEExp9: TEdit
    Left = 24
    Top = 320
    Width = 450
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
  end
  object EditMERes0: TEdit
    Left = 488
    Top = 104
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 14
  end
  object EditMERes1: TEdit
    Left = 488
    Top = 128
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 15
  end
  object EditMERes2: TEdit
    Left = 488
    Top = 152
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 16
  end
  object EditMERes3: TEdit
    Left = 488
    Top = 176
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 17
  end
  object EditMERes4: TEdit
    Left = 488
    Top = 200
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 18
  end
  object EditMERes5: TEdit
    Left = 488
    Top = 224
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 19
  end
  object EditMERes6: TEdit
    Left = 488
    Top = 248
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 20
  end
  object EditMERes7: TEdit
    Left = 488
    Top = 272
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 21
  end
  object EditMERes8: TEdit
    Left = 488
    Top = 296
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 22
  end
  object EditMERes9: TEdit
    Left = 488
    Top = 320
    Width = 200
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 23
  end
  object Button1: TButton
    Left = 24
    Top = 368
    Width = 113
    Height = 25
    Caption = 'Write To File'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 24
    OnClick = Button1Click
  end
  object MainMenuME: TMainMenu
    Left = 680
    object MME_File: TMenuItem
      Caption = 'File'
      object SetFileReadFrom1: TMenuItem
        Caption = 'Set File Read From'
        OnClick = SetFileReadFrom1Click
      end
      object SetFileWriteTo1: TMenuItem
        Caption = 'Set File Write To'
        OnClick = SetFileWriteTo1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object MME_Exit: TMenuItem
        Caption = 'Exit'
        OnClick = MME_ExitClick
      end
    end
    object MME_Mode: TMenuItem
      Caption = 'Mode'
      object MME_Standard: TMenuItem
        Caption = 'Standard'
        OnClick = MME_StandardClick
      end
    end
    object MME_History: TMenuItem
      Caption = 'History'
      object MME_View: TMenuItem
        Caption = 'View'
        OnClick = MME_ViewClick
      end
      object MME_Delete: TMenuItem
        Caption = 'Delete'
        OnClick = MME_DeleteClick
      end
    end
    object MME_RadianVsDegrees: TMenuItem
      Caption = 'RadianVsDegrees'
      object MME_Radian: TMenuItem
        Caption = 'Radian'
        OnClick = MME_RadianClick
      end
      object MME_Degrees: TMenuItem
        Caption = 'Degrees'
        OnClick = MME_DegreesClick
      end
    end
  end
end
