package com.foreign.Uno.IO;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class AAssetManager
{
    static void debug_log(Object message)
    {
        android.util.Log.d("DreamPluspopup", (message==null ? "null" : message.toString()));
    }

    public static Object GetJavaObject52()
    {
        return com.fuse.Activity.getRootActivity().getAssets();
    }
    
}
