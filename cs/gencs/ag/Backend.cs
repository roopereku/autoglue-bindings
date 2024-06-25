using System.Runtime.InteropServices;
namespace gencs.ag;
public abstract class Backend
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.ag.Backend obj)
    {
        return obj.mObjectHandle;
    }
    public Backend(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate bool AG_delegate_intercept_generateHierarchy0(IntPtr ObjectHandle);
    internal static bool AG_intercept_generateHierarchy0(IntPtr ObjectHandle)
    {
        return ((((GCHandle)ObjectHandle).Target) as Backend).generateHierarchy();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate void AG_delegate_intercept_generateGlue0(IntPtr ObjectHandle);
    internal static void AG_intercept_generateGlue0(IntPtr ObjectHandle)
    {
        ((((GCHandle)ObjectHandle).Target) as Backend).generateGlue();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Backend_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_generateHierarchy0, IntPtr AG_intercept_generateGlue0);
    private void AG_initializeInterceptionContext()
    {
        ag_Backend_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateHierarchy0(AG_intercept_generateHierarchy0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_generateGlue0(AG_intercept_generateGlue0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Backend_getRootPtr0(IntPtr ObjectHandle);
    public gencs.std.shared_ptrEntity getRootPtr()
    {
        return new gencs.std.shared_ptrEntity(ag_Backend_getRootPtr0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Backend_getRoot0(IntPtr ObjectHandle);
    public gencs.ag.Entity getRoot()
    {
        return new gencs.ag.Entity.ConcreteType(ag_Backend_getRoot0(mObjectHandle));
    }
    public abstract bool generateHierarchy();
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_Backend_ensureGlueGenerated0(IntPtr ObjectHandle);
    public void ensureGlueGenerated()
    {
        ag_Backend_ensureGlueGenerated0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Backend_Backend0(IntPtr root);
    protected Backend(gencs.std.shared_ptrEntity root) : this(ag_Backend_Backend0(gencs.std.shared_ptrEntity.AG_getObjectHandle(root)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_Backend_Backend1(IntPtr param1);
    public Backend(gencs.ag.Backend param1) : this(ag_Backend_Backend1(gencs.ag.Backend.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    protected abstract void generateGlue();
    public class ConcreteType : gencs.ag.Backend
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ag_Backend_ConcreteType_generateHierarchy0(IntPtr ObjectHandle);
        public override bool generateHierarchy()
        {
            return ag_Backend_ConcreteType_generateHierarchy0(mObjectHandle);
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern void ag_Backend_ConcreteType_generateGlue0(IntPtr ObjectHandle);
        protected override void generateGlue()
        {
            ag_Backend_ConcreteType_generateGlue0(mObjectHandle);
        }
    }
}
