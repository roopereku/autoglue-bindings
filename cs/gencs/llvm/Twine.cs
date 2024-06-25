using System.Runtime.InteropServices;
namespace gencs.llvm;
public class Twine
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.Twine obj)
    {
        return obj.mObjectHandle;
    }
    public Twine(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine0();
    public Twine() : this(llvm_Twine_Twine0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine1(string Str);
    public Twine(string Str) : this(llvm_Twine_Twine1(Str))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine2(IntPtr Str);
    public Twine(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter Str) : this(llvm_Twine_Twine2(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine3(IntPtr Str);
    public Twine(gencs.std.basic_String_viewCharacter_char_traitsCharacter Str) : this(llvm_Twine_Twine3(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine4(IntPtr Str);
    public Twine(gencs.llvm.StringRef Str) : this(llvm_Twine_Twine4(gencs.llvm.StringRef.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine5(IntPtr Str);
    public Twine(gencs.llvm.SmallVectorImplCharacter Str) : this(llvm_Twine_Twine5(gencs.llvm.SmallVectorImplCharacter.AG_getObjectHandle(Str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine6(IntPtr Fmt);
    public Twine(gencs.llvm.formatv_Object_Base Fmt) : this(llvm_Twine_Twine6(gencs.llvm.formatv_Object_Base.AG_getObjectHandle(Fmt)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine7(char Val);
    public Twine(char Val) : this(llvm_Twine_Twine7(Val))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine8(int Val);
    public Twine(int Val) : this(llvm_Twine_Twine8(Val))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine9(string LHS, IntPtr RHS);
    public Twine(string LHS, gencs.llvm.StringRef RHS) : this(llvm_Twine_Twine9(LHS, gencs.llvm.StringRef.AG_getObjectHandle(RHS)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_Twine_Twine10(IntPtr LHS, string RHS);
    public Twine(gencs.llvm.StringRef LHS, string RHS) : this(llvm_Twine_Twine10(gencs.llvm.StringRef.AG_getObjectHandle(LHS), RHS))
    {
    }
}
