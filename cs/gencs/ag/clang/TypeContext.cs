using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class TypeContext : gencs.ag.clang.EntityContext
{
    public TypeContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TypeContext_TypeContext0(IntPtr includePath, IntPtr realName);
    public TypeContext(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter includePath, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter realName) : this(ag_clang_TypeContext_TypeContext0(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(includePath), gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(realName)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TypeContext_TypeContext1(IntPtr param1);
    public TypeContext(gencs.ag.clang.TypeContext param1) : this(ag_clang_TypeContext_TypeContext1(gencs.ag.clang.TypeContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TypeContext_getInclude0(IntPtr ObjectHandle);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getInclude()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_TypeContext_getInclude0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_TypeContext_getRealName0(IntPtr ObjectHandle);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getRealName()
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_TypeContext_getRealName0(mObjectHandle));
    }
}
