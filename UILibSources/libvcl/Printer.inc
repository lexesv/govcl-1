
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Printer_Create: TPrinter; stdcall;
begin
  Result :=  TPrinter.Create;
end;

procedure Printer_Free(AObj: TPrinter); stdcall;
begin
  AObj.Free;
end;

procedure Printer_Abort(AObj: TPrinter); stdcall;
begin
  AObj.Abort;
end;

procedure Printer_BeginDoc(AObj: TPrinter); stdcall;
begin
  AObj.BeginDoc;
end;

procedure Printer_EndDoc(AObj: TPrinter); stdcall;
begin
  AObj.EndDoc;
end;

procedure Printer_NewPage(AObj: TPrinter); stdcall;
begin
  AObj.NewPage;
end;

procedure Printer_Refresh(AObj: TPrinter); stdcall;
begin
  AObj.Refresh;
end;

procedure Printer_GetPrinter(AObj: TPrinter; ADevice: PWideChar; ADriver: PWideChar; APort: PWideChar; var ADeviceMode: NativeUInt); stdcall;
begin
  AObj.GetPrinter(ADevice, ADriver, APort, ADeviceMode);
end;

procedure Printer_SetPrinter(AObj: TPrinter; ADevice: PWideChar; ADriver: PWideChar; APort: PWideChar; ADeviceMode: NativeUInt); stdcall;
begin
  AObj.SetPrinter(ADevice, ADriver, APort, ADeviceMode);
end;

procedure Printer_DisposeOf(AObj: TPrinter); stdcall;
begin
  AObj.DisposeOf;
end;

function Printer_ClassType(AObj: TPrinter): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function Printer_ClassName(AObj: TPrinter): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function Printer_InstanceSize(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function Printer_InheritsFrom(AObj: TPrinter; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Printer_Equals(AObj: TPrinter; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function Printer_GetHashCode(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function Printer_ToString(AObj: TPrinter): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function Printer_GetAborted(AObj: TPrinter): LongBool; stdcall;
begin
  Result :=  AObj.Aborted;
end;

function Printer_GetCanvas(AObj: TPrinter): TCanvas; stdcall;
begin
  Result :=  AObj.Canvas;
end;

function Printer_GetCapabilities(AObj: TPrinter): TPrinterCapabilities; stdcall;
begin
  Result :=  AObj.Capabilities;
end;

function Printer_GetCopies(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.Copies;
end;

procedure Printer_SetCopies(AObj: TPrinter; AValue: Integer); stdcall;
begin
  AObj.Copies := AValue;
end;

function Printer_GetFonts(AObj: TPrinter): TStrings; stdcall;
begin
  Result :=  AObj.Fonts;
end;

function Printer_GetHandle(AObj: TPrinter): HDC; stdcall;
begin
  Result :=  AObj.Handle;
end;

function Printer_GetOrientation(AObj: TPrinter): TPrinterOrientation; stdcall;
begin
  Result :=  AObj.Orientation;
end;

procedure Printer_SetOrientation(AObj: TPrinter; AValue: TPrinterOrientation); stdcall;
begin
  AObj.Orientation := AValue;
end;

function Printer_GetPageHeight(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.PageHeight;
end;

function Printer_GetPageWidth(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.PageWidth;
end;

function Printer_GetPageNumber(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.PageNumber;
end;

function Printer_GetPrinterIndex(AObj: TPrinter): Integer; stdcall;
begin
  Result :=  AObj.PrinterIndex;
end;

procedure Printer_SetPrinterIndex(AObj: TPrinter; AValue: Integer); stdcall;
begin
  AObj.PrinterIndex := AValue;
end;

function Printer_GetPrinting(AObj: TPrinter): LongBool; stdcall;
begin
  Result :=  AObj.Printing;
end;

function Printer_GetPrinters(AObj: TPrinter): TStrings; stdcall;
begin
  Result :=  AObj.Printers;
end;

function Printer_GetTitle(AObj: TPrinter): PChar; stdcall;
begin
  Result :=  PChar(AObj.Title);
end;

procedure Printer_SetTitle(AObj: TPrinter; AValue: PChar); stdcall;
begin
  AObj.Title := AValue;
end;

function Printer_StaticClassType: TClass; stdcall;
begin
  Result := TPrinter;
end;

exports
  Printer_Create,
  Printer_Free,
  Printer_Abort,
  Printer_BeginDoc,
  Printer_EndDoc,
  Printer_NewPage,
  Printer_Refresh,
  Printer_GetPrinter,
  Printer_SetPrinter,
  Printer_DisposeOf,
  Printer_ClassType,
  Printer_ClassName,
  Printer_InstanceSize,
  Printer_InheritsFrom,
  Printer_Equals,
  Printer_GetHashCode,
  Printer_ToString,
  Printer_GetAborted,
  Printer_GetCanvas,
  Printer_GetCapabilities,
  Printer_GetCopies,
  Printer_SetCopies,
  Printer_GetFonts,
  Printer_GetHandle,
  Printer_GetOrientation,
  Printer_SetOrientation,
  Printer_GetPageHeight,
  Printer_GetPageWidth,
  Printer_GetPageNumber,
  Printer_GetPrinterIndex,
  Printer_SetPrinterIndex,
  Printer_GetPrinting,
  Printer_GetPrinters,
  Printer_GetTitle,
  Printer_SetTitle,
  Printer_StaticClassType;

