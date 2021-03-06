/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject  {
    int _logLevel;
    BOOL _disableUserWiFiOnlyPeriod;
}

@property(readonly) int logLevel;
@property(readonly) BOOL disableUserWiFiOnlyPeriod;

+ (id)sharedInstance;

- (int)logLevel;
- (id)init;
- (void)dealloc;
- (BOOL)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(BOOL)arg2;
- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long)arg2;
- (int)_defaultLogLevel;
- (void)_loadPreferences;
- (BOOL)disableUserWiFiOnlyPeriod;

@end
