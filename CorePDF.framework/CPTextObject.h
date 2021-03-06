/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk  {
    struct CGPoint { 
        float x; 
        float y; 
    } anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}


- (float)maxFontSize;
- (double)maxFontLineHeight;
- (void)calculateMetrics;
- (void)clearCachedInfo;
- (void)translateObjectYBy:(float)arg1;
- (float)center;

@end
