using System.Runtime.InteropServices;
namespace gencs.llvm;
public class SmallVectorTemplateCommonCharacter_Void : gencs.llvm.SmallVectorBaseInteger
{
    public SmallVectorTemplateCommonCharacter_Void(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon0(int Size);
    protected SmallVectorTemplateCommonCharacter_Void(int Size) : this(llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon0(Size))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon1(IntPtr param1);
    public SmallVectorTemplateCommonCharacter_Void(gencs.llvm.SmallVectorTemplateCommonCharacter_Void param1) : this(llvm_SmallVectorTemplateCommonCharacter_Void_SmallVectorTemplateCommon1(gencs.llvm.SmallVectorTemplateCommonCharacter_Void.AG_getObjectHandle(param1)))
    {
    }
}
