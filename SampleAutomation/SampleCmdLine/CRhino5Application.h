// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files (x86)\\Rhinoceros 5.0 Beta\\System\\Rhino5.tlb" no_namespace
// CRhino5Application wrapper class

class CRhino5Application : public COleDispatchDriver
{
public:
  CRhino5Application(){} // Calls COleDispatchDriver default constructor
  CRhino5Application(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
  CRhino5Application(const CRhino5Application& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

  // Attributes
public:

  // Operations
public:


  // IRhino5Application methods
public:
  VARIANT GetScriptObject()
  {
    VARIANT result;
    InvokeHelper(0x3, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
    return result;
  }
  LPUNKNOWN GetPlugInObject(LPCTSTR plugin_uuid, LPCTSTR interface_uuid)
  {
    LPUNKNOWN result;
    static BYTE parms[] = VTS_BSTR VTS_BSTR ;
    InvokeHelper(0x4, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, parms, plugin_uuid, interface_uuid);
    return result;
  }
  long IsInitialized()
  {
    long result;
    InvokeHelper(0x5, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
    return result;
  }
  long RunScript(LPCTSTR script, long echo_mode)
  {
    long result;
    static BYTE parms[] = VTS_BSTR VTS_I4 ;
    InvokeHelper(0x6, DISPATCH_METHOD, VT_I4, (void*)&result, parms, script, echo_mode);
    return result;
  }
  void BringToTop()
  {
    InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
  }

  // IRhino5Application properties
public:
  long GetVisible()
  {
    long result;
    GetProperty(0x1, VT_I4, (void*)&result);
    return result;
  }
  void SetVisible(long propVal)
  {
    SetProperty(0x1, VT_I4, propVal);
  }
  long GetReleaseWithoutClosing()
  {
    long result;
    GetProperty(0x2, VT_I4, (void*)&result);
    return result;
  }
  void SetReleaseWithoutClosing(long propVal)
  {
    SetProperty(0x2, VT_I4, propVal);
  }

};
