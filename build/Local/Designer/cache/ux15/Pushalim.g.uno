[Uno.Compiler.UxGenerated]
public partial class Pushalim: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Pushalim __parent;
        [Uno.WeakReference] internal readonly Pushalim __parentInstance;
        public Template(Pushalim parent, Pushalim parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> Yearvalue_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __self_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb2;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Yearvalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Yearvalue, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Yearclick");
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Yearvalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("Yearselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp3 = new global::Fuse.Reactive.DataFunction();
            var temp4 = new global::Fuse.Reactive.Data("Yearclick");
            var temp5 = new global::Fuse.Gestures.Clicked();
            var temp6 = new global::Fuse.Triggers.Actions.Callback();
            temp_eb2 = new global::Fuse.Reactive.EventBinding(temp1);
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp8 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            temp_eb1 = new global::Fuse.Reactive.EventBinding(temp4);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 46;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb1.OnEvent);
            temp5.SourceLineNumber = 47;
            temp5.SourceFileName = "Page/Pushalim.ux";
            temp5.Actions.Add(temp6);
            temp5.Actions.Add(temp);
            temp5.Bindings.Add(temp_eb2);
            temp5.Bindings.Add(temp7);
            temp6.SourceLineNumber = 48;
            temp6.SourceFileName = "Page/Pushalim.ux";
            temp6.Handler += temp_eb2.OnEvent;
            temp1.SourceLineNumber = 48;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp.SourceLineNumber = 49;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 49;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 46;
            temp3.SourceFileName = "Page/Pushalim.ux";
            temp4.SourceLineNumber = 46;
            temp4.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp5);
            __self.Bindings.Add(temp8);
            __self.Bindings.Add(temp_eb1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Yeartext";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    internal global::Fuse.Controls.Button sendpush;
    internal global::Fuse.Controls.Text Yearvalue;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.Text Monthvalue;
    internal global::Fuse.Controls.Text Datevalue;
    internal global::Fuse.Controls.Text Dayvalue;
    internal global::Fuse.Controls.Text Hourvalue;
    internal global::Fuse.Controls.Text Minutevalue;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "sendpush",
        "Yearvalue",
        "temp_eb0",
        "Monthvalue",
        "Datevalue",
        "Dayvalue",
        "Hourvalue",
        "Minutevalue"
    };
    static Pushalim()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Pushalim(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new DreamPluspopup_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("Contents");
        var temp4 = new global::Fuse.Reactive.Data("YeartoggleOpen");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp5 = new global::Fuse.Reactive.Data("Year");
        var temp2 = new global::Fuse.Triggers.WhileTrue();
        temp2_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp2, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("popup_visible");
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        sendpush = new global::Fuse.Controls.Button();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Controls.Panel();
        Yearvalue = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Gestures.Clicked();
        var temp14 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp15 = new global::Fuse.Controls.ScrollView();
        var temp16 = new global::Fuse.Controls.StackPanel();
        var Yeartext = new Template(this, this);
        var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Rectangle();
        Monthvalue = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Controls.Rectangle();
        Datevalue = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Controls.Rectangle();
        Dayvalue = new global::Fuse.Controls.Text();
        var temp23 = new global::Fuse.Controls.Rectangle();
        Hourvalue = new global::Fuse.Controls.Text();
        var temp24 = new global::Fuse.Controls.Rectangle();
        Minutevalue = new global::Fuse.Controls.Text();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/Pushalim.ux";
        temp7.LineNumber = 3;
        temp7.FileName = "Page/Pushalim.ux";
        temp7.SourceLineNumber = 3;
        temp7.SourceFileName = "Page/Pushalim.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Page/Pushalim.js"));
        temp8.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp8.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp8.Width = new Uno.UX.Size(350f, Uno.UX.Unit.Unspecified);
        temp8.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp8.Y = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp8.SourceLineNumber = 4;
        temp8.SourceFileName = "Page/Pushalim.ux";
        temp8.Children.Add(temp);
        temp.PlaceholderText = "내용을 입력하세요.";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.FontSize = 20f;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "Page/Pushalim.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp9);
        temp3.SourceLineNumber = 5;
        temp3.SourceFileName = "Page/Pushalim.ux";
        sendpush.Color = float4(0.6862745f, 0.8196079f, 1f, 1f);
        sendpush.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        sendpush.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        sendpush.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        sendpush.Name = __selector2;
        sendpush.SourceLineNumber = 8;
        sendpush.SourceFileName = "Page/Pushalim.ux";
        sendpush.Children.Add(temp10);
        temp10.Value = "보내기";
        temp10.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp10.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp10.SourceLineNumber = 9;
        temp10.SourceFileName = "Page/Pushalim.ux";
        temp11.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp11.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp11.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp11.Y = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp11.SourceLineNumber = 12;
        temp11.SourceFileName = "Page/Pushalim.ux";
        temp11.Children.Add(temp12);
        temp12.SourceLineNumber = 13;
        temp12.SourceFileName = "Page/Pushalim.ux";
        temp12.Children.Add(Yearvalue);
        temp12.Children.Add(temp13);
        Yearvalue.Value = "Year";
        Yearvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Yearvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Yearvalue.Name = __selector3;
        Yearvalue.SourceLineNumber = 14;
        Yearvalue.SourceFileName = "Page/Pushalim.ux";
        temp13.SourceLineNumber = 15;
        temp13.SourceFileName = "Page/Pushalim.ux";
        temp13.Actions.Add(temp14);
        temp13.Bindings.Add(temp_eb0);
        temp14.SourceLineNumber = 16;
        temp14.SourceFileName = "Page/Pushalim.ux";
        temp14.Handler += temp_eb0.OnEvent;
        temp4.SourceLineNumber = 16;
        temp4.SourceFileName = "Page/Pushalim.ux";
        temp2.SourceLineNumber = 42;
        temp2.SourceFileName = "Page/Pushalim.ux";
        temp2.Nodes.Add(temp15);
        temp2.Bindings.Add(temp19);
        temp15.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp15.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp15.Y = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp15.Layer = Fuse.Layer.Overlay;
        temp15.SourceLineNumber = 43;
        temp15.SourceFileName = "Page/Pushalim.ux";
        temp15.Background = temp18;
        temp15.Children.Add(temp16);
        temp16.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp16.SourceLineNumber = 44;
        temp16.SourceFileName = "Page/Pushalim.ux";
        temp16.Children.Add(temp1);
        temp1.SourceLineNumber = 45;
        temp1.SourceFileName = "Page/Pushalim.ux";
        temp1.Templates.Add(Yeartext);
        temp1.Bindings.Add(temp17);
        temp5.SourceLineNumber = 45;
        temp5.SourceFileName = "Page/Pushalim.ux";
        temp6.SourceLineNumber = 42;
        temp6.SourceFileName = "Page/Pushalim.ux";
        temp20.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp20.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp20.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp20.Y = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp20.SourceLineNumber = 57;
        temp20.SourceFileName = "Page/Pushalim.ux";
        temp20.Children.Add(Monthvalue);
        Monthvalue.Value = "Month";
        Monthvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Monthvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Monthvalue.Name = __selector4;
        Monthvalue.SourceLineNumber = 58;
        Monthvalue.SourceFileName = "Page/Pushalim.ux";
        temp21.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp21.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp21.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp21.X = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp21.Y = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp21.SourceLineNumber = 61;
        temp21.SourceFileName = "Page/Pushalim.ux";
        temp21.Children.Add(Datevalue);
        Datevalue.Value = "Date";
        Datevalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Datevalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Datevalue.Name = __selector5;
        Datevalue.SourceLineNumber = 62;
        Datevalue.SourceFileName = "Page/Pushalim.ux";
        temp22.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp22.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp22.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp22.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp22.Y = new Uno.UX.Size(480f, Uno.UX.Unit.Unspecified);
        temp22.SourceLineNumber = 65;
        temp22.SourceFileName = "Page/Pushalim.ux";
        temp22.Children.Add(Dayvalue);
        Dayvalue.Value = "Day";
        Dayvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Dayvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Dayvalue.Name = __selector6;
        Dayvalue.SourceLineNumber = 66;
        Dayvalue.SourceFileName = "Page/Pushalim.ux";
        temp23.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp23.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp23.X = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp23.Y = new Uno.UX.Size(480f, Uno.UX.Unit.Unspecified);
        temp23.SourceLineNumber = 69;
        temp23.SourceFileName = "Page/Pushalim.ux";
        temp23.Children.Add(Hourvalue);
        Hourvalue.Value = "Hour";
        Hourvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Hourvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Hourvalue.Name = __selector7;
        Hourvalue.SourceLineNumber = 70;
        Hourvalue.SourceFileName = "Page/Pushalim.ux";
        temp24.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp24.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp24.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp24.Y = new Uno.UX.Size(480f, Uno.UX.Unit.Unspecified);
        temp24.SourceLineNumber = 73;
        temp24.SourceFileName = "Page/Pushalim.ux";
        temp24.Children.Add(Minutevalue);
        Minutevalue.Value = "Minute";
        Minutevalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Minutevalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Minutevalue.Name = __selector8;
        Minutevalue.SourceLineNumber = 74;
        Minutevalue.SourceFileName = "Page/Pushalim.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(sendpush);
        __g_nametable.Objects.Add(Yearvalue);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(Monthvalue);
        __g_nametable.Objects.Add(Datevalue);
        __g_nametable.Objects.Add(Dayvalue);
        __g_nametable.Objects.Add(Hourvalue);
        __g_nametable.Objects.Add(Minutevalue);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(sendpush);
        this.Children.Add(temp11);
        this.Children.Add(temp2);
        this.Children.Add(temp20);
        this.Children.Add(temp21);
        this.Children.Add(temp22);
        this.Children.Add(temp23);
        this.Children.Add(temp24);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "sendpush";
    static global::Uno.UX.Selector __selector3 = "Yearvalue";
    static global::Uno.UX.Selector __selector4 = "Monthvalue";
    static global::Uno.UX.Selector __selector5 = "Datevalue";
    static global::Uno.UX.Selector __selector6 = "Dayvalue";
    static global::Uno.UX.Selector __selector7 = "Hourvalue";
    static global::Uno.UX.Selector __selector8 = "Minutevalue";
}
