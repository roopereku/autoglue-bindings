using System.Runtime.InteropServices;
namespace gencs.llvm;
public class FoldingSetBase
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.FoldingSetBase obj)
    {
        return obj.mObjectHandle;
    }
    public FoldingSetBase(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_FoldingSetBase_FoldingSetBase0(int Log2InitSize);
    protected FoldingSetBase(int Log2InitSize) : this(llvm_FoldingSetBase_FoldingSetBase0(Log2InitSize))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_FoldingSetBase_FoldingSetBase1(IntPtr Arg);
    protected FoldingSetBase(gencs.llvm.FoldingSetBase Arg) : this(llvm_FoldingSetBase_FoldingSetBase1(gencs.llvm.FoldingSetBase.AG_getObjectHandle(Arg)))
    {
    }
    public class Node
    {
        protected IntPtr mObjectHandle;
        public static IntPtr AG_getObjectHandle(gencs.llvm.FoldingSetBase.Node obj)
        {
            return obj.mObjectHandle;
        }
        public Node(IntPtr ObjectHandle)
        {
            mObjectHandle = ObjectHandle;
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_FoldingSetBase_Node_Node0();
        public Node() : this(llvm_FoldingSetBase_Node_Node0())
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_FoldingSetBase_Node_Node1(IntPtr param1);
        public Node(gencs.llvm.FoldingSetBase.Node param1) : this(llvm_FoldingSetBase_Node_Node1(gencs.llvm.FoldingSetBase.Node.AG_getObjectHandle(param1)))
        {
        }
    }
}
