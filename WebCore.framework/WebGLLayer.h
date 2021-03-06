/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CALayer;

@interface WebGLLayer : CAEAGLLayer  {
    struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x3; struct IntSize { 
            int m_width; 
            int m_height; 
        } x4; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x5; struct FloatPoint3D { 
            float m_x; 
            float m_y; 
            float m_z; 
        } x6; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x7; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x8; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x9; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x10; struct Color { 
            unsigned int m_color; 
            boolm_valid; 
        } x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24; int x25; struct Vector<WebCore::GraphicsLayer*,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { 
                struct GraphicsLayer {} **m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct GraphicsLayer {} *x29; struct GraphicsLayer {} *x30; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x31; struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } x32; int x33; } *m_layerOwner;

  /* Error parsing encoded ivar type info: ^{GraphicsContext3D=iiiB@"EAGLContext"{RetainPtr<CALayer>="m_ptr"@"CALayer"}{HashMap<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> >="m_impl"{HashTable<unsigned int,std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry>,WTF::PairFirstExtractor<std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::HashTraits<unsigned int> >="m_table"^{pair<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry>}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}{ANGLEWebKitBridge="builtCompilers"B"m_fragmentCompiler"^v"m_vertexCompiler"^v"m_resources"{?="MaxVertexAttribs"i"MaxVertexUniformVectors"i"MaxVaryingVectors"i"MaxVertexTextureImageUnits"i"MaxCombinedTextureImageUnits"i"MaxTextureImageUnits"i"MaxFragmentUniformVectors"i"MaxDrawBuffers"i"OES_standard_derivatives"i}}{OwnPtr<WebCore::Extensions3DOpenGL>="m_ptr"^{Extensions3DOpenGL}}{Attributes="alpha"B"depth"B"stencil"B"antialias"B"premultipliedAlpha"B"canRecoverFromContextLoss"B"preserveDrawingBuffer"B}{Vector<WTF::Vector<float, 0ul>,0ul>="m_size"I"m_buffer"{VectorBuffer<WTF::Vector<float, 0ul>,0ul>="m_buffer"^{Vector<float,0ul>}"m_capacity"I}}IIIIBIIIIIII{ListHashSet<unsigned int,256ul,WTF::IntHash<unsigned int> >="m_impl"{HashTable<WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::IdentityExtractor<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::ListHashSetNodeHashFunctions<unsigned int, 256ul, WTF::IntHash<unsigned int> >,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*> >="m_table"^^{ListHashSetNode<unsigned int,256ul>}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}"m_head"^{ListHashSetNode<unsigned int,256ul>}"m_tail"^{ListHashSetNode<unsigned int,256ul>}"m_allocator"{OwnPtr<WTF::ListHashSetNodeAllocator<unsigned int, 256ul> >="m_ptr"^{ListHashSetNodeAllocator<unsigned int,256ul>}}}} */
    struct GraphicsContext3D { int x1; int x2; int x3; boolx4; id x5; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x6; void*x7; void*x8; void*x9; unsigned long x10; unsigned char x11; out in void*x12; void*x13; void*x14; void*x15; void*x16; struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x17; struct HashMap<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> > { 
            struct HashTable<unsigned int,std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry>,WTF::PairFirstExtractor<std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::HashTraits<unsigned int> > { 
                struct pair<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry> {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x18; struct ANGLEWebKitBridge { 
            boolbuiltCompilers; 
            void *m_fragmentCompiler; 
            void *m_vertexCompiler; 
            struct { 
                int MaxVertexAttribs; 
                int MaxVertexUniformVectors; 
                int MaxVaryingVectors; 
                int MaxVertexTextureImageUnits; 
                int MaxCombinedTextureImageUnits; 
                int MaxTextureImageUnits; 
                int MaxFragmentUniformVectors; 
                int MaxDrawBuffers; 
                int OES_standard_derivatives; 
            } m_resources; 
        } x19; struct OwnPtr<WebCore::Extensions3DOpenGL> { 
            struct Extensions3DOpenGL {} *m_ptr; 
        } x20; struct Attributes { 
            boolalpha; 
            booldepth; 
            boolstencil; 
            boolantialias; 
            boolpremultipliedAlpha; 
            boolcanRecoverFromContextLoss; 
            boolpreserveDrawingBuffer; 
        } x21; struct Vector<WTF::Vector<float, 0ul>,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WTF::Vector<float, 0ul>,0ul> { 
                struct Vector<float,0ul> {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; boolx27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; struct ListHashSet<unsigned int,256ul,WTF::IntHash<unsigned int> > { 
            struct HashTable<WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::IdentityExtractor<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::ListHashSetNodeHashFunctions<unsigned int, 256ul, WTF::IntHash<unsigned int> >,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*> > { 
                struct ListHashSetNode<unsigned int,256ul> {} **m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
            struct ListHashSetNode<unsigned int,256ul> {} *m_head; 
            struct ListHashSetNode<unsigned int,256ul> {} *m_tail; 
            struct OwnPtr<WTF::ListHashSetNodeAllocator<unsigned int, 256ul> > { 
                struct ListHashSetNodeAllocator<unsigned int,256ul> {} *m_ptr; 
            } m_allocator; 
        } x35; } *m_context;

}


- (void)setLayerOwner:(struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct FloatPoint { float x_8_1_1; float x_8_1_2; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct TransformationMatrix { double x_10_1_1[4][4]; } x10; struct Color { unsigned int x_11_1_1; boolx_11_1_2; } x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24; int x25; struct Vector<WebCore::GraphicsLayer*,0ul> { unsigned int x_26_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; unsigned int x_2_2_2; } x_26_1_2; } x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct GraphicsLayer {} *x29; struct GraphicsLayer {} *x30; struct FloatPoint { float x_31_1_1; float x_31_1_2; } x31; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_32_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_32_1_2; } x32; int x33; }*)arg1;
- (struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct FloatPoint { float x_8_1_1; float x_8_1_2; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct TransformationMatrix { double x_10_1_1[4][4]; } x10; struct Color { unsigned int x_11_1_1; boolx_11_1_2; } x11; float x12; float x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24; int x25; struct Vector<WebCore::GraphicsLayer*,0ul> { unsigned int x_26_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; unsigned int x_2_2_2; } x_26_1_2; } x26; struct GraphicsLayer {} *x27; struct GraphicsLayer {} *x28; struct GraphicsLayer {} *x29; struct GraphicsLayer {} *x30; struct FloatPoint { float x_31_1_1; float x_31_1_2; } x31; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_32_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_32_1_2; } x32; int x33; }*)layerOwner;
- (struct CGImage { }*)copyImageSnapshotWithColorSpace:(struct CGColorSpace { }*)arg1;
- (id)initWithGraphicsContext3D:(struct GraphicsContext3D { int x1; int x2; int x3; boolx4; id x5; struct RetainPtr<CALayer> { id x_6_1_1; } x6; struct HashMap<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> > { struct HashTable<unsigned int,std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry>,WTF::PairFirstExtractor<std::pair<unsigned int, WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WebCore::GraphicsContext3D::ShaderSourceEntry> >,WTF::HashTraits<unsigned int> > { struct pair<unsigned int,WebCore::GraphicsContext3D::ShaderSourceEntry> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_7_1_1; } x7; struct ANGLEWebKitBridge { boolx_8_1_1; void *x_8_1_2; void *x_8_1_3; struct { int x_4_2_1; int x_4_2_2; int x_4_2_3; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; } x_8_1_4; } x8; struct OwnPtr<WebCore::Extensions3DOpenGL> { struct Extensions3DOpenGL {} *x_9_1_1; } x9; struct Attributes { boolx_10_1_1; boolx_10_1_2; boolx_10_1_3; boolx_10_1_4; boolx_10_1_5; boolx_10_1_6; boolx_10_1_7; } x10; struct Vector<WTF::Vector<float, 0ul>,0ul> { unsigned int x_11_1_1; struct VectorBuffer<WTF::Vector<float, 0ul>,0ul> { struct Vector<float,0ul> {} *x_2_2_1; unsigned int x_2_2_2; } x_11_1_2; } x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; boolx16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ListHashSet<unsigned int,256ul,WTF::IntHash<unsigned int> > { struct HashTable<WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::ListHashSetNode<unsigned int, 256ul>*,WTF::IdentityExtractor<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::ListHashSetNodeHashFunctions<unsigned int, 256ul, WTF::IntHash<unsigned int> >,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*>,WTF::HashTraits<WTF::ListHashSetNode<unsigned int, 256ul>*> > { struct ListHashSetNode<unsigned int,256ul> {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_24_1_1; struct ListHashSetNode<unsigned int,256ul> {} *x_24_1_2; struct ListHashSetNode<unsigned int,256ul> {} *x_24_1_3; struct OwnPtr<WTF::ListHashSetNodeAllocator<unsigned int, 256ul> > { struct ListHashSetNodeAllocator<unsigned int,256ul> {} *x_4_2_1; } x_24_1_4; } x24; }*)arg1;
- (void)display;

@end
