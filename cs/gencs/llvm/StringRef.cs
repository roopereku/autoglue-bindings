using System.Runtime.InteropServices;
namespace gencs.llvm;
public class StringRef
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.StringRef obj)
    {
        return obj.mObjectHandle;
    }
    public StringRef(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef0();
    public StringRef() : this(llvm_StringRef_StringRef0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef1(string Str);
    public StringRef(string Str) : this(llvm_StringRef_StringRef1(Str))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef2(string data, int length);
    public StringRef(string data, int length) : this(llvm_StringRef_StringRef2(data, length))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef3(IntPtr Str);
    public StringRef(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter Str) : this(llvm_StringRef_StringRef3(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef4(IntPtr Str);
    public StringRef(gencs.std.basic_String_viewCharacter_char_traitsCharacter Str) : this(llvm_StringRef_StringRef4(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_StringRef_StringRef5(IntPtr param1);
    public StringRef(gencs.llvm.StringRef param1) : this(llvm_StringRef_StringRef5(gencs.llvm.StringRef.AG_getObjectHandle(param1)))
    {
    }
}
