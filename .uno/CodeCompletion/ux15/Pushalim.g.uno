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
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Yearvalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Yearvalue, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Yearvalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Yearselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.DataFunction();
            var temp3 = new global::Fuse.Reactive.Data("Yearclick");
            var temp4 = new global::Fuse.Gestures.Clicked();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb1 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 23;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb1.OnEvent);
            temp4.SourceLineNumber = 24;
            temp4.SourceFileName = "Page/Pushalim.ux";
            temp4.Actions.Add(temp);
            temp4.Bindings.Add(temp5);
            temp.SourceLineNumber = 26;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp1.SourceLineNumber = 26;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 23;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 23;
            temp3.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp_eb1);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Yeartext";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Pushalim __parent;
        [Uno.WeakReference] internal readonly Pushalim __parentInstance;
        public Template1(Pushalim parent, Pushalim parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> Monthvalue_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __self_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb3;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Monthvalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Monthvalue, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Monthvalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Monthselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.DataFunction();
            var temp3 = new global::Fuse.Reactive.Data("Monthclick");
            var temp4 = new global::Fuse.Gestures.Clicked();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb3 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 49;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb3.OnEvent);
            temp4.SourceLineNumber = 50;
            temp4.SourceFileName = "Page/Pushalim.ux";
            temp4.Actions.Add(temp);
            temp4.Bindings.Add(temp5);
            temp.SourceLineNumber = 52;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp1.SourceLineNumber = 52;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 49;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 49;
            temp3.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp_eb3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Monthtext";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Pushalim __parent;
        [Uno.WeakReference] internal readonly Pushalim __parentInstance;
        public Template2(Pushalim parent, Pushalim parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> Dayvalue_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __self_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Dayvalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Dayvalue, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Dayvalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Dayselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.DataFunction();
            var temp3 = new global::Fuse.Reactive.Data("Dayclick");
            var temp4 = new global::Fuse.Gestures.Clicked();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 74;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb5.OnEvent);
            temp4.SourceLineNumber = 75;
            temp4.SourceFileName = "Page/Pushalim.ux";
            temp4.Actions.Add(temp);
            temp4.Bindings.Add(temp5);
            temp.SourceLineNumber = 77;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp1.SourceLineNumber = 77;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 74;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 74;
            temp3.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp_eb5);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Daytext";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Pushalim __parent;
        [Uno.WeakReference] internal readonly Pushalim __parentInstance;
        public Template3(Pushalim parent, Pushalim parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> Hourvalue_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __self_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb7;
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Hourvalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Hourvalue, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Hourvalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Hourselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.DataFunction();
            var temp3 = new global::Fuse.Reactive.Data("Hourclick");
            var temp4 = new global::Fuse.Gestures.Clicked();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb7 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 100;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb7.OnEvent);
            temp4.SourceLineNumber = 101;
            temp4.SourceFileName = "Page/Pushalim.ux";
            temp4.Actions.Add(temp);
            temp4.Bindings.Add(temp5);
            temp.SourceLineNumber = 103;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp1.SourceLineNumber = 103;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 100;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 100;
            temp3.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp_eb7);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Hourtext";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly Pushalim __parent;
        [Uno.WeakReference] internal readonly Pushalim __parentInstance;
        public Template4(Pushalim parent, Pushalim parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> Minutevalue_Value_inst;
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> __self_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb9;
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Text();
            Minutevalue_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__parent.Minutevalue, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<string>(Minutevalue_Value_inst);
            temp_Value_inst = new DreamPluspopup_FuseTriggersActionsSetstring_Value_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("Minuteselect");
            __self_Value_inst = new DreamPluspopup_FuseControlsTextControl_Value_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.DataFunction();
            var temp3 = new global::Fuse.Reactive.Data("Minuteclick");
            var temp4 = new global::Fuse.Gestures.Clicked();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(__self_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
            temp_eb9 = new global::Fuse.Reactive.EventBinding(temp3);
            __self.FontSize = 25f;
            __self.TextAlignment = Fuse.Controls.TextAlignment.Center;
            __self.Color = Fuse.Drawing.Colors.Purple;
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Name = __selector1;
            __self.SourceLineNumber = 126;
            __self.SourceFileName = "Page/Pushalim.ux";
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb9.OnEvent);
            temp4.SourceLineNumber = 127;
            temp4.SourceFileName = "Page/Pushalim.ux";
            temp4.Actions.Add(temp);
            temp4.Bindings.Add(temp5);
            temp.SourceLineNumber = 129;
            temp.SourceFileName = "Page/Pushalim.ux";
            temp1.SourceLineNumber = 129;
            temp1.SourceFileName = "Page/Pushalim.ux";
            temp2.SourceLineNumber = 126;
            temp2.SourceFileName = "Page/Pushalim.ux";
            temp3.SourceLineNumber = 126;
            temp3.SourceFileName = "Page/Pushalim.ux";
            __self.Children.Add(temp4);
            __self.Bindings.Add(temp6);
            __self.Bindings.Add(temp_eb9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Minutetext";
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<bool> temp2_Value_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.Property<bool> temp4_Value_inst;
    global::Uno.UX.Property<object> temp5_Items_inst;
    global::Uno.UX.Property<bool> temp6_Value_inst;
    global::Uno.UX.Property<object> temp7_Items_inst;
    global::Uno.UX.Property<bool> temp8_Value_inst;
    global::Uno.UX.Property<object> temp9_Items_inst;
    global::Uno.UX.Property<bool> temp10_Value_inst;
    internal global::Fuse.Controls.Text Yearvalue;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.Text Monthvalue;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Controls.Text Dayvalue;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Controls.Text Hourvalue;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Controls.Text Minutevalue;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    internal global::Fuse.Controls.Button sendtime;
    internal global::Fuse.Reactive.EventBinding temp_eb10;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "Yearvalue",
        "temp_eb0",
        "Monthvalue",
        "temp_eb2",
        "Dayvalue",
        "temp_eb4",
        "Hourvalue",
        "temp_eb6",
        "Minutevalue",
        "temp_eb8",
        "sendtime",
        "temp_eb10"
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
        var temp11 = new global::Fuse.Reactive.Data("Contents");
        var temp12 = new global::Fuse.Reactive.Data("YeartoggleOpen");
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp13 = new global::Fuse.Reactive.Data("Year");
        var temp2 = new global::Fuse.Triggers.WhileTrue();
        temp2_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp2, __selector0);
        var temp14 = new global::Fuse.Reactive.Data("YearisOpen");
        var temp15 = new global::Fuse.Reactive.Data("MonthtoggleOpen");
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp3, __selector1);
        var temp16 = new global::Fuse.Reactive.Data("Month");
        var temp4 = new global::Fuse.Triggers.WhileTrue();
        temp4_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp4, __selector0);
        var temp17 = new global::Fuse.Reactive.Data("MonthisOpen");
        var temp18 = new global::Fuse.Reactive.Data("DaytoggleOpen");
        var temp5 = new global::Fuse.Reactive.Each();
        temp5_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp5, __selector1);
        var temp19 = new global::Fuse.Reactive.Data("Day");
        var temp6 = new global::Fuse.Triggers.WhileTrue();
        temp6_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp6, __selector0);
        var temp20 = new global::Fuse.Reactive.Data("DayisOpen");
        var temp21 = new global::Fuse.Reactive.Data("HourtoggleOpen");
        var temp7 = new global::Fuse.Reactive.Each();
        temp7_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp7, __selector1);
        var temp22 = new global::Fuse.Reactive.Data("Hour");
        var temp8 = new global::Fuse.Triggers.WhileTrue();
        temp8_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp8, __selector0);
        var temp23 = new global::Fuse.Reactive.Data("HourisOpen");
        var temp24 = new global::Fuse.Reactive.Data("MinutetoggleOpen");
        var temp9 = new global::Fuse.Reactive.Each();
        temp9_Items_inst = new DreamPluspopup_FuseReactiveEach_Items_Property(temp9, __selector1);
        var temp25 = new global::Fuse.Reactive.Data("Minute");
        var temp10 = new global::Fuse.Triggers.WhileTrue();
        temp10_Value_inst = new DreamPluspopup_FuseTriggersWhileBool_Value_Property(temp10, __selector0);
        var temp26 = new global::Fuse.Reactive.Data("MinuteisOpen");
        var temp27 = new global::Fuse.Reactive.Data("timesend");
        var temp28 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp29 = new global::Fuse.Controls.Rectangle();
        var temp30 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Controls.Rectangle();
        var temp32 = new global::Fuse.Controls.Panel();
        Yearvalue = new global::Fuse.Controls.Text();
        var temp33 = new global::Fuse.Gestures.Clicked();
        var temp34 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp12);
        var temp35 = new global::Fuse.Controls.ScrollView();
        var temp36 = new global::Fuse.Controls.StackPanel();
        var Yeartext = new Template(this, this);
        var temp37 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp13, Fuse.Reactive.BindingMode.Default);
        var temp38 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp39 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp14, Fuse.Reactive.BindingMode.Default);
        var temp40 = new global::Fuse.Controls.Rectangle();
        var temp41 = new global::Fuse.Controls.Panel();
        Monthvalue = new global::Fuse.Controls.Text();
        var temp42 = new global::Fuse.Gestures.Clicked();
        var temp43 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp15);
        var temp44 = new global::Fuse.Controls.ScrollView();
        var temp45 = new global::Fuse.Controls.StackPanel();
        var Monthtext = new Template1(this, this);
        var temp46 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp16, Fuse.Reactive.BindingMode.Default);
        var temp47 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp48 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp17, Fuse.Reactive.BindingMode.Default);
        var temp49 = new global::Fuse.Controls.Rectangle();
        var temp50 = new global::Fuse.Controls.Panel();
        Dayvalue = new global::Fuse.Controls.Text();
        var temp51 = new global::Fuse.Gestures.Clicked();
        var temp52 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp18);
        var temp53 = new global::Fuse.Controls.ScrollView();
        var temp54 = new global::Fuse.Controls.StackPanel();
        var Daytext = new Template2(this, this);
        var temp55 = new global::Fuse.Reactive.DataBinding(temp5_Items_inst, temp19, Fuse.Reactive.BindingMode.Default);
        var temp56 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp57 = new global::Fuse.Reactive.DataBinding(temp6_Value_inst, temp20, Fuse.Reactive.BindingMode.Default);
        var temp58 = new global::Fuse.Controls.Rectangle();
        var temp59 = new global::Fuse.Controls.Panel();
        Hourvalue = new global::Fuse.Controls.Text();
        var temp60 = new global::Fuse.Gestures.Clicked();
        var temp61 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp21);
        var temp62 = new global::Fuse.Controls.ScrollView();
        var temp63 = new global::Fuse.Controls.StackPanel();
        var Hourtext = new Template3(this, this);
        var temp64 = new global::Fuse.Reactive.DataBinding(temp7_Items_inst, temp22, Fuse.Reactive.BindingMode.Default);
        var temp65 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp66 = new global::Fuse.Reactive.DataBinding(temp8_Value_inst, temp23, Fuse.Reactive.BindingMode.Default);
        var temp67 = new global::Fuse.Controls.Rectangle();
        var temp68 = new global::Fuse.Controls.Panel();
        Minutevalue = new global::Fuse.Controls.Text();
        var temp69 = new global::Fuse.Gestures.Clicked();
        var temp70 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp24);
        var temp71 = new global::Fuse.Controls.ScrollView();
        var temp72 = new global::Fuse.Controls.StackPanel();
        var Minutetext = new Template4(this, this);
        var temp73 = new global::Fuse.Reactive.DataBinding(temp9_Items_inst, temp25, Fuse.Reactive.BindingMode.Default);
        var temp74 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9529412f, 0.6588235f, 1f, 1f));
        var temp75 = new global::Fuse.Reactive.DataBinding(temp10_Value_inst, temp26, Fuse.Reactive.BindingMode.Default);
        sendtime = new global::Fuse.Controls.Button();
        var temp76 = new global::Fuse.Controls.Text();
        var temp77 = new global::Fuse.Gestures.Clicked();
        var temp78 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb10 = new global::Fuse.Reactive.EventBinding(temp27);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Page/Pushalim.ux";
        temp28.LineNumber = 3;
        temp28.FileName = "Page/Pushalim.ux";
        temp28.SourceLineNumber = 3;
        temp28.SourceFileName = "Page/Pushalim.ux";
        temp28.File = new global::Uno.UX.BundleFileSource(import("../../../Page/Pushalim.js"));
        temp29.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp29.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp29.Width = new Uno.UX.Size(350f, Uno.UX.Unit.Unspecified);
        temp29.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp29.Y = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp29.SourceLineNumber = 4;
        temp29.SourceFileName = "Page/Pushalim.ux";
        temp29.Children.Add(temp);
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
        temp.Bindings.Add(temp30);
        temp11.SourceLineNumber = 5;
        temp11.SourceFileName = "Page/Pushalim.ux";
        temp31.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp31.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp31.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp31.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp31.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp31.SourceLineNumber = 11;
        temp31.SourceFileName = "Page/Pushalim.ux";
        temp31.Children.Add(temp32);
        temp32.SourceLineNumber = 12;
        temp32.SourceFileName = "Page/Pushalim.ux";
        temp32.Children.Add(Yearvalue);
        temp32.Children.Add(temp33);
        Yearvalue.Value = "Year";
        Yearvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Yearvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Yearvalue.Name = __selector2;
        Yearvalue.SourceLineNumber = 13;
        Yearvalue.SourceFileName = "Page/Pushalim.ux";
        temp33.SourceLineNumber = 14;
        temp33.SourceFileName = "Page/Pushalim.ux";
        temp33.Actions.Add(temp34);
        temp33.Bindings.Add(temp_eb0);
        temp34.SourceLineNumber = 15;
        temp34.SourceFileName = "Page/Pushalim.ux";
        temp34.Handler += temp_eb0.OnEvent;
        temp12.SourceLineNumber = 15;
        temp12.SourceFileName = "Page/Pushalim.ux";
        temp2.SourceLineNumber = 19;
        temp2.SourceFileName = "Page/Pushalim.ux";
        temp2.Nodes.Add(temp35);
        temp2.Bindings.Add(temp39);
        temp35.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp35.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp35.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp35.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp35.Layer = Fuse.Layer.Overlay;
        temp35.SourceLineNumber = 20;
        temp35.SourceFileName = "Page/Pushalim.ux";
        temp35.Background = temp38;
        temp35.Children.Add(temp36);
        temp36.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp36.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp36.Margin = float4(0f, 0f, 0f, 210f);
        temp36.SourceLineNumber = 21;
        temp36.SourceFileName = "Page/Pushalim.ux";
        temp36.Children.Add(temp1);
        temp1.SourceLineNumber = 22;
        temp1.SourceFileName = "Page/Pushalim.ux";
        temp1.Templates.Add(Yeartext);
        temp1.Bindings.Add(temp37);
        temp13.SourceLineNumber = 22;
        temp13.SourceFileName = "Page/Pushalim.ux";
        temp14.SourceLineNumber = 19;
        temp14.SourceFileName = "Page/Pushalim.ux";
        temp40.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp40.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp40.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp40.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp40.SourceLineNumber = 37;
        temp40.SourceFileName = "Page/Pushalim.ux";
        temp40.Children.Add(temp41);
        temp41.SourceLineNumber = 38;
        temp41.SourceFileName = "Page/Pushalim.ux";
        temp41.Children.Add(Monthvalue);
        temp41.Children.Add(temp42);
        Monthvalue.Value = "Month";
        Monthvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Monthvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Monthvalue.Name = __selector3;
        Monthvalue.SourceLineNumber = 39;
        Monthvalue.SourceFileName = "Page/Pushalim.ux";
        temp42.SourceLineNumber = 40;
        temp42.SourceFileName = "Page/Pushalim.ux";
        temp42.Actions.Add(temp43);
        temp42.Bindings.Add(temp_eb2);
        temp43.SourceLineNumber = 41;
        temp43.SourceFileName = "Page/Pushalim.ux";
        temp43.Handler += temp_eb2.OnEvent;
        temp15.SourceLineNumber = 41;
        temp15.SourceFileName = "Page/Pushalim.ux";
        temp4.SourceLineNumber = 45;
        temp4.SourceFileName = "Page/Pushalim.ux";
        temp4.Nodes.Add(temp44);
        temp4.Bindings.Add(temp48);
        temp44.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp44.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp44.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp44.Layer = Fuse.Layer.Overlay;
        temp44.SourceLineNumber = 46;
        temp44.SourceFileName = "Page/Pushalim.ux";
        temp44.Background = temp47;
        temp44.Children.Add(temp45);
        temp45.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp45.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp45.Margin = float4(0f, 0f, 0f, 210f);
        temp45.SourceLineNumber = 47;
        temp45.SourceFileName = "Page/Pushalim.ux";
        temp45.Children.Add(temp3);
        temp3.SourceLineNumber = 48;
        temp3.SourceFileName = "Page/Pushalim.ux";
        temp3.Templates.Add(Monthtext);
        temp3.Bindings.Add(temp46);
        temp16.SourceLineNumber = 48;
        temp16.SourceFileName = "Page/Pushalim.ux";
        temp17.SourceLineNumber = 45;
        temp17.SourceFileName = "Page/Pushalim.ux";
        temp49.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp49.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp49.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp49.X = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp49.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp49.SourceLineNumber = 62;
        temp49.SourceFileName = "Page/Pushalim.ux";
        temp49.Children.Add(temp50);
        temp50.SourceLineNumber = 63;
        temp50.SourceFileName = "Page/Pushalim.ux";
        temp50.Children.Add(Dayvalue);
        temp50.Children.Add(temp51);
        Dayvalue.Value = "Day";
        Dayvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Dayvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Dayvalue.Name = __selector4;
        Dayvalue.SourceLineNumber = 64;
        Dayvalue.SourceFileName = "Page/Pushalim.ux";
        temp51.SourceLineNumber = 65;
        temp51.SourceFileName = "Page/Pushalim.ux";
        temp51.Actions.Add(temp52);
        temp51.Bindings.Add(temp_eb4);
        temp52.SourceLineNumber = 66;
        temp52.SourceFileName = "Page/Pushalim.ux";
        temp52.Handler += temp_eb4.OnEvent;
        temp18.SourceLineNumber = 66;
        temp18.SourceFileName = "Page/Pushalim.ux";
        temp6.SourceLineNumber = 70;
        temp6.SourceFileName = "Page/Pushalim.ux";
        temp6.Nodes.Add(temp53);
        temp6.Bindings.Add(temp57);
        temp53.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp53.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp53.X = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp53.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp53.Layer = Fuse.Layer.Overlay;
        temp53.SourceLineNumber = 71;
        temp53.SourceFileName = "Page/Pushalim.ux";
        temp53.Background = temp56;
        temp53.Children.Add(temp54);
        temp54.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp54.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp54.Margin = float4(0f, 0f, 0f, 780f);
        temp54.SourceLineNumber = 72;
        temp54.SourceFileName = "Page/Pushalim.ux";
        temp54.Children.Add(temp5);
        temp5.SourceLineNumber = 73;
        temp5.SourceFileName = "Page/Pushalim.ux";
        temp5.Templates.Add(Daytext);
        temp5.Bindings.Add(temp55);
        temp19.SourceLineNumber = 73;
        temp19.SourceFileName = "Page/Pushalim.ux";
        temp20.SourceLineNumber = 70;
        temp20.SourceFileName = "Page/Pushalim.ux";
        temp58.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp58.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp58.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp58.X = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp58.Y = new Uno.UX.Size(290f, Uno.UX.Unit.Unspecified);
        temp58.SourceLineNumber = 88;
        temp58.SourceFileName = "Page/Pushalim.ux";
        temp58.Children.Add(temp59);
        temp59.SourceLineNumber = 89;
        temp59.SourceFileName = "Page/Pushalim.ux";
        temp59.Children.Add(Hourvalue);
        temp59.Children.Add(temp60);
        Hourvalue.Value = "Hour";
        Hourvalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Hourvalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Hourvalue.Name = __selector5;
        Hourvalue.SourceLineNumber = 90;
        Hourvalue.SourceFileName = "Page/Pushalim.ux";
        temp60.SourceLineNumber = 91;
        temp60.SourceFileName = "Page/Pushalim.ux";
        temp60.Actions.Add(temp61);
        temp60.Bindings.Add(temp_eb6);
        temp61.SourceLineNumber = 92;
        temp61.SourceFileName = "Page/Pushalim.ux";
        temp61.Handler += temp_eb6.OnEvent;
        temp21.SourceLineNumber = 92;
        temp21.SourceFileName = "Page/Pushalim.ux";
        temp8.SourceLineNumber = 96;
        temp8.SourceFileName = "Page/Pushalim.ux";
        temp8.Nodes.Add(temp62);
        temp8.Bindings.Add(temp66);
        temp62.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp62.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp62.X = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp62.Y = new Uno.UX.Size(290f, Uno.UX.Unit.Unspecified);
        temp62.Layer = Fuse.Layer.Overlay;
        temp62.SourceLineNumber = 97;
        temp62.SourceFileName = "Page/Pushalim.ux";
        temp62.Background = temp65;
        temp62.Children.Add(temp63);
        temp63.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp63.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp63.Margin = float4(0f, 0f, 0f, 570f);
        temp63.SourceLineNumber = 98;
        temp63.SourceFileName = "Page/Pushalim.ux";
        temp63.Children.Add(temp7);
        temp7.SourceLineNumber = 99;
        temp7.SourceFileName = "Page/Pushalim.ux";
        temp7.Templates.Add(Hourtext);
        temp7.Bindings.Add(temp64);
        temp22.SourceLineNumber = 99;
        temp22.SourceFileName = "Page/Pushalim.ux";
        temp23.SourceLineNumber = 96;
        temp23.SourceFileName = "Page/Pushalim.ux";
        temp67.Color = float4(0.854902f, 0.9960784f, 0.4156863f, 1f);
        temp67.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp67.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp67.X = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp67.Y = new Uno.UX.Size(290f, Uno.UX.Unit.Unspecified);
        temp67.SourceLineNumber = 114;
        temp67.SourceFileName = "Page/Pushalim.ux";
        temp67.Children.Add(temp68);
        temp68.SourceLineNumber = 115;
        temp68.SourceFileName = "Page/Pushalim.ux";
        temp68.Children.Add(Minutevalue);
        temp68.Children.Add(temp69);
        Minutevalue.Value = "Minute";
        Minutevalue.TextAlignment = Fuse.Controls.TextAlignment.Center;
        Minutevalue.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        Minutevalue.Name = __selector6;
        Minutevalue.SourceLineNumber = 116;
        Minutevalue.SourceFileName = "Page/Pushalim.ux";
        temp69.SourceLineNumber = 117;
        temp69.SourceFileName = "Page/Pushalim.ux";
        temp69.Actions.Add(temp70);
        temp69.Bindings.Add(temp_eb8);
        temp70.SourceLineNumber = 118;
        temp70.SourceFileName = "Page/Pushalim.ux";
        temp70.Handler += temp_eb8.OnEvent;
        temp24.SourceLineNumber = 118;
        temp24.SourceFileName = "Page/Pushalim.ux";
        temp10.SourceLineNumber = 122;
        temp10.SourceFileName = "Page/Pushalim.ux";
        temp10.Nodes.Add(temp71);
        temp10.Bindings.Add(temp75);
        temp71.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp71.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp71.X = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp71.Y = new Uno.UX.Size(290f, Uno.UX.Unit.Unspecified);
        temp71.Layer = Fuse.Layer.Overlay;
        temp71.SourceLineNumber = 123;
        temp71.SourceFileName = "Page/Pushalim.ux";
        temp71.Background = temp74;
        temp71.Children.Add(temp72);
        temp72.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp72.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp72.Margin = float4(0f, 0f, 0f, 1650f);
        temp72.SourceLineNumber = 124;
        temp72.SourceFileName = "Page/Pushalim.ux";
        temp72.Children.Add(temp9);
        temp9.SourceLineNumber = 125;
        temp9.SourceFileName = "Page/Pushalim.ux";
        temp9.Templates.Add(Minutetext);
        temp9.Bindings.Add(temp73);
        temp25.SourceLineNumber = 125;
        temp25.SourceFileName = "Page/Pushalim.ux";
        temp26.SourceLineNumber = 122;
        temp26.SourceFileName = "Page/Pushalim.ux";
        sendtime.Color = float4(0.6862745f, 0.8196079f, 1f, 1f);
        sendtime.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        sendtime.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        sendtime.Y = new Uno.UX.Size(480f, Uno.UX.Unit.Unspecified);
        sendtime.Name = __selector7;
        sendtime.SourceLineNumber = 141;
        sendtime.SourceFileName = "Page/Pushalim.ux";
        sendtime.Children.Add(temp76);
        sendtime.Children.Add(temp77);
        temp76.Value = "보내기";
        temp76.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp76.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp76.SourceLineNumber = 142;
        temp76.SourceFileName = "Page/Pushalim.ux";
        temp77.SourceLineNumber = 143;
        temp77.SourceFileName = "Page/Pushalim.ux";
        temp77.Actions.Add(temp78);
        temp77.Bindings.Add(temp_eb10);
        temp78.SourceLineNumber = 144;
        temp78.SourceFileName = "Page/Pushalim.ux";
        temp78.Handler += temp_eb10.OnEvent;
        temp27.SourceLineNumber = 144;
        temp27.SourceFileName = "Page/Pushalim.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(Yearvalue);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(Monthvalue);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(Dayvalue);
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(Hourvalue);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(Minutevalue);
        __g_nametable.Objects.Add(temp_eb8);
        __g_nametable.Objects.Add(sendtime);
        __g_nametable.Objects.Add(temp_eb10);
        this.Children.Add(temp28);
        this.Children.Add(temp29);
        this.Children.Add(temp31);
        this.Children.Add(temp2);
        this.Children.Add(temp40);
        this.Children.Add(temp4);
        this.Children.Add(temp49);
        this.Children.Add(temp6);
        this.Children.Add(temp58);
        this.Children.Add(temp8);
        this.Children.Add(temp67);
        this.Children.Add(temp10);
        this.Children.Add(sendtime);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "Yearvalue";
    static global::Uno.UX.Selector __selector3 = "Monthvalue";
    static global::Uno.UX.Selector __selector4 = "Dayvalue";
    static global::Uno.UX.Selector __selector5 = "Hourvalue";
    static global::Uno.UX.Selector __selector6 = "Minutevalue";
    static global::Uno.UX.Selector __selector7 = "sendtime";
}
