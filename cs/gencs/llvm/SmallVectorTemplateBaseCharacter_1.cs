using System.Runtime.InteropServices;
namespace gencs.llvm;
public class SmallVectorTemplateBaseCharacter_1 : gencs.llvm.SmallVectorTemplateCommonCharacter_Void
{
    public SmallVectorTemplateBaseCharacter_1(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase0(int Size);
    protected SmallVectorTemplateBaseCharacter_1(int Size) : this(llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase0(Size))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase1(IntPtr param1);
    public SmallVectorTemplateBaseCharacter_1(gencs.llvm.SmallVectorTemplateBaseCharacter_1 param1) : this(llvm_SmallVectorTemplateBaseCharacter_1_SmallVectorTemplateBase1(gencs.llvm.SmallVectorTemplateBaseCharacter_1.AG_getObjectHandle(param1)))
    {
    }
}
