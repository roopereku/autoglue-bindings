using System.Runtime.InteropServices;
namespace gencs.ag.csharp;
public class ClassContext : gencs.ag.csharp.EntityContext
{
    public ClassContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_ClassContext_ClassContext0();
    public ClassContext() : this(ag_csharp_ClassContext_ClassContext0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_ClassContext_ClassContext1(IntPtr param1);
    public ClassContext(gencs.ag.csharp.ClassContext param1) : this(ag_csharp_ClassContext_ClassContext1(gencs.ag.csharp.ClassContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_csharp_ClassContext_isCompositionBaseOf0(IntPtr ObjectHandle, IntPtr derived);
    public bool isCompositionBaseOf(gencs.ag.ClassEntity derived)
    {
        return ag_csharp_ClassContext_isCompositionBaseOf0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(derived));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_ClassContext_setCompositionBaseOf0(IntPtr ObjectHandle, IntPtr derived);
    public void setCompositionBaseOf(gencs.ag.ClassEntity derived)
    {
        ag_csharp_ClassContext_setCompositionBaseOf0(mObjectHandle, gencs.ag.ClassEntity.AG_getObjectHandle(derived));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_csharp_ClassContext_ensureBaseGetters0(IntPtr ObjectHandle, IntPtr entity, IntPtr Base);
    public void ensureBaseGetters(gencs.ag.TypeEntity entity, gencs.ag.ClassEntity Base)
    {
        ag_csharp_ClassContext_ensureBaseGetters0(mObjectHandle, gencs.ag.TypeEntity.AG_getObjectHandle(entity), gencs.ag.ClassEntity.AG_getObjectHandle(Base));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern int ag_csharp_ClassContext_getBaseGetterCount0(IntPtr ObjectHandle);
    public int getBaseGetterCount()
    {
        return ag_csharp_ClassContext_getBaseGetterCount0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_ClassContext_getBaseGetter0(IntPtr ObjectHandle, int index);
    public gencs.std.shared_ptrClassEntity getBaseGetter(int index)
    {
        return new gencs.std.shared_ptrClassEntity(ag_csharp_ClassContext_getBaseGetter0(mObjectHandle, index));
    }
}
