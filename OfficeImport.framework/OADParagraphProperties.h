/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADBulletFont, OADTextSpacing, OADBulletSize, OADBulletColor, OADBulletProperties;

@interface OADParagraphProperties : OADCharacterProperties  {
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSMutableArray *mTabStops;
    double mLeftMargin;
    double mRightMargin;
    double mIndent;
    double mDefaultTab;
    int mLevel;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    unsigned int mIsRightToLeft : 1;
    unsigned int mIsLatinLineBreak : 1;
    unsigned int mIsHangingPunctuation : 1;
    unsigned int mHasTabStops : 1;
    unsigned int mHasLeftMargin : 1;
    unsigned int mHasRightMargin : 1;
    unsigned int mHasLevel : 1;
    unsigned int mHasIndent : 1;
    unsigned int mHasAlign : 1;
    unsigned int mHasDefaultTab : 1;
    unsigned int mHasIsRightToLeft : 1;
    unsigned int mHasWrap : 1;
    unsigned int mHasFontAlign : 1;
    unsigned int mHasIsLatinLineBreak : 1;
    unsigned int mHasIsHangingPunctuation : 1;
    unsigned int mHasBulletCharSet : 1;
}

@property BOOL hasBulletCharSet;
@property int bulletCharSet;

+ (id)defaultProperties;

- (double)nonOveridenLeftMargin;
- (void)setFontAlign:(int)arg1;
- (void)setIsHangingPunctuation:(BOOL)arg1;
- (BOOL)hasLineSpacing;
- (BOOL)hasBeforeSpacing;
- (BOOL)hasAfterSpacing;
- (BOOL)hasTabStops;
- (BOOL)hasLeftMargin;
- (BOOL)hasRightMargin;
- (BOOL)hasLevel;
- (BOOL)hasIndent;
- (BOOL)hasAlign;
- (BOOL)hasDefaultTab;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasWrap;
- (BOOL)hasFontAlign;
- (BOOL)hasIsLatinLineBreak;
- (BOOL)hasIsHangingPunctuation;
- (BOOL)hasBulletSize;
- (BOOL)hasBulletColor;
- (BOOL)hasBulletFont;
- (BOOL)hasBulletProperties;
- (BOOL)hasBulletCharSet;
- (id)beforeSpacing;
- (id)afterSpacing;
- (void)clearTabStops;
- (unsigned int)tabStopCount;
- (id)tabStopAtIndex:(unsigned int)arg1;
- (double)defaultTab;
- (BOOL)isRightToLeft;
- (int)fontAlign;
- (BOOL)isLatinLineBreak;
- (BOOL)isHangingPunctuation;
- (id)bulletSize;
- (id)bulletColor;
- (id)bulletFont;
- (id)bulletProperties;
- (int)bulletCharSet;
- (id)tabStops;
- (double)rightMargin;
- (double)indent;
- (void)overrideWithProperties:(id)arg1;
- (double)leftMargin;
- (void)setIsRightToLeft:(BOOL)arg1;
- (void)setIsLatinLineBreak:(BOOL)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setBulletSize:(id)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletCharSet:(int)arg1;
- (void)setHasBulletCharSet:(BOOL)arg1;
- (void)setBulletProperties:(id)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setAfterSpacing:(id)arg1;
- (void)setLeftMargin:(double)arg1;
- (id)addTabStop;
- (void)setIndent:(double)arg1;
- (void)setDefaultTab:(double)arg1;
- (id)initWithDefaults;
- (int)wrap;
- (void)setWrap:(int)arg1;
- (int)align;
- (void)setAlign:(int)arg1;
- (void)setRightMargin:(double)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (void)setLineSpacing:(id)arg1;
- (id)lineSpacing;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (void)dealloc;

@end
