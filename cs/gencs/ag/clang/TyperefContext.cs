using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class TyperefContext : gencs.ag.clang.EntityContext
{
    public TyperefContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TyperefContext_TyperefContext0(IntPtr type, IntPtr ctx);
    public TyperefContext(gencs.clang.QualType type, gencs.clang.ASTContext ctx) : this(ag_clang_TyperefContext_TyperefContext0(gencs.clang.QualType.AG_getObjectHandle(type), gencs.clang.ASTContext.AG_getObjectHandle(ctx)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TyperefContext_TyperefContext1(IntPtr param1);
    public TyperefContext(gencs.ag.clang.TyperefContext param1) : this(ag_clang_TyperefContext_TyperefContext1(gencs.ag.clang.TyperefContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_TyperefContext_isRValueReference0(IntPtr ObjectHandle);
    public bool isRValueReference()
    {
        return ag_clang_TyperefContext_isRValueReference0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_TyperefContext_isPointer0(IntPtr ObjectHandle);
    public bool isPointer()
    {
        return ag_clang_TyperefContext_isPointer0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_TyperefContext_isConst0(IntPtr ObjectHandle);
    public bool isConst()
    {
        return ag_clang_TyperefContext_isConst0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_TyperefContext_isTypeTriviallyCopyable0(IntPtr ObjectHandle);
    public bool isTypeTriviallyCopyable()
    {
        return ag_clang_TyperefContext_isTypeTriviallyCopyable0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TyperefContext_getWrittenType0(IntPtr ObjectHandle);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getWrittenType()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_TyperefContext_getWrittenType0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TyperefContext_getOriginalType0(IntPtr ObjectHandle);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getOriginalType()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_TyperefContext_getOriginalType0(mObjectHandle));
    }
}
