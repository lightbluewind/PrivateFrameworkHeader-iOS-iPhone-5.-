/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADAdEvent : PBCodable  {
    BOOL _hasTimestampEvent;
    unsigned long long _timestampEvent;
    NSString *_context;
    BOOL _hasDeviceOrientation;
    int _deviceOrientation;
    BOOL _hasConnectionType;
    int _connectionType;
}

@property BOOL hasTimestampEvent;
@property unsigned long long timestampEvent;
@property(readonly) BOOL hasContext;
@property(retain) NSString * context;
@property BOOL hasDeviceOrientation;
@property int deviceOrientation;
@property BOOL hasConnectionType;
@property int connectionType;


- (BOOL)readFrom:(id)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasDeviceOrientation:(BOOL)arg1;
- (BOOL)hasDeviceOrientation;
- (void)setHasTimestampEvent:(BOOL)arg1;
- (BOOL)hasContext;
- (void)writeTo:(id)arg1;
- (int)deviceOrientation;
- (BOOL)hasConnectionType;
- (unsigned long long)timestampEvent;
- (BOOL)hasTimestampEvent;
- (void)setConnectionType:(int)arg1;
- (void)setTimestampEvent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (void)setDeviceOrientation:(int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (int)connectionType;
- (id)description;
- (void)dealloc;

@end
