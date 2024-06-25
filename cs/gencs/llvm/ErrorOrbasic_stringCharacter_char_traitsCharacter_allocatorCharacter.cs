using System.Runtime.InteropServices;
namespace gencs.llvm;
public class ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter obj)
    {
        return obj.mObjectHandle;
    }
    public ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr0(IntPtr EC);
    public ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.error_code EC) : this(llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr0(gencs.std.error_code.AG_getObjectHandle(EC)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr1(IntPtr Other);
    public ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter Other) : this(llvm_ErrorOrbasic_stringCharacter_char_traitsCharacter_allocatorCharacter_ErrorOr1(gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(Other)))
    {
    }
}
