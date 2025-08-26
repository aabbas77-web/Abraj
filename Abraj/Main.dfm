object FormMain: TFormMain
  Left = 179
  Top = 118
  BiDiMode = bdRightToLeft
  BorderStyle = bsToolWindow
  Caption = 'Abraj'
  ClientHeight = 144
  ClientWidth = 249
  Color = clBtnFace
  Font.Charset = ARABIC_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ParentBiDiMode = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 249
    Height = 144
    Align = alTop
    TabOrder = 0
    object Label1: TLabel
      Left = 93
      Top = 8
      Width = 108
      Height = 13
      Caption = 'Name in Arabic Letters'
    end
    object Label2: TLabel
      Left = 90
      Top = 52
      Width = 145
      Height = 13
      Caption = 'Mother Name in Arabic Letters'
    end
    object Label3: TLabel
      Left = 93
      Top = 96
      Width = 25
      Height = 13
      Caption = 'Bourj'
    end
    object LabelName: TLabel
      Left = 15
      Top = 28
      Width = 65
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = '0'
    end
    object LabelMotherName: TLabel
      Left = 15
      Top = 72
      Width = 65
      Height = 13
      Alignment = taCenter
      AutoSize = False
      Caption = '0'
    end
    object EditName: TEdit
      Left = 92
      Top = 24
      Width = 121
      Height = 21
      TabOrder = 0
      OnChange = EditNameChange
    end
    object EditMotherName: TEdit
      Left = 92
      Top = 68
      Width = 121
      Height = 21
      TabOrder = 1
      OnChange = EditNameChange
    end
    object EditBOURJ: TEdit
      Left = 92
      Top = 112
      Width = 121
      Height = 29
      Font.Charset = ARABIC_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Traditional Arabic'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object Button1: TButton
      Left = 8
      Top = 110
      Width = 75
      Height = 25
      BiDiMode = bdRightToLeft
      Caption = 'Details...'
      ParentBiDiMode = False
      TabOrder = 3
      OnClick = Button1Click
    end
  end
end
