/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, OADShape3D, OADScene3D, OADFill, OADStroke;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
}


- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (void)setIsBehindText:(BOOL)arg1;
- (BOOL)hasScene3D;
- (BOOL)hasShape3D;
- (BOOL)hasIsBehindText;
- (id)scene3D;
- (id)shape3D;
- (BOOL)isBehindText;
- (BOOL)hasStroke;
- (void)setStroke:(id)arg1;
- (BOOL)hasFill;
- (BOOL)hasEffects;
- (id)effects;
- (void)removeUnnecessaryOverrides;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (id)stroke;
- (id)fill;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end