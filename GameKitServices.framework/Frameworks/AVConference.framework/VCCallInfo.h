/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSString, NSData, NSDictionary, NSMutableDictionary;

@interface VCCallInfo : NSObject  {
    int callID;
    NSData *connectionData;
    NSData *relayConnectionData;
    NSString *participantID;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
    NSString *osVersion;
    NSString *hardwareVersion;
    unsigned long auNumber;
    unsigned long maxBandwidth;
    BOOL isInNormalBitrateMode;
    unsigned long bitrateSequenceNumber;
}

@property unsigned long bitrateSequenceNumber;
@property BOOL isInNormalBitrateMode;
@property unsigned long maxBandwidth;
@property unsigned long auNumber;
@property(copy) NSString * hardwareVersion;
@property(copy) NSString * osVersion;
@property(retain) NSDictionary * relayUpdate;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSData * relayConnectionData;
@property(copy) NSString * participantID;
@property(retain) NSData * connectionData;
@property int callID;


- (unsigned long)auNumber;
- (id)hardwareVersion;
- (id)osVersion;
- (id)relayRequest;
- (void)setRelayRequest:(id)arg1;
- (void)setIsInNormalBitrateMode:(BOOL)arg1;
- (BOOL)isInNormalBitrateMode;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setRelayUpdate:(id)arg1;
- (void)setRelayConnectionData:(id)arg1;
- (id)relayRequestResponse;
- (id)relayUpdate;
- (id)relayConnectionData;
- (id)connectionData;
- (void)setConnectionData:(id)arg1;
- (void)setBitrateSequenceNumber:(unsigned long)arg1;
- (unsigned long)bitrateSequenceNumber;
- (void)setOsVersion:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setAuNumber:(unsigned long)arg1;
- (id)participantID;
- (void)setParticipantID:(id)arg1;
- (void)setMaxBandwidth:(unsigned long)arg1;
- (unsigned long)maxBandwidth;
- (int)callID;
- (void)setCallID:(int)arg1;
- (id)init;
- (void)dealloc;

@end
