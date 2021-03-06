/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
}

@property(copy) NSString * accountPersistentUUID;
@property(readonly) NSArray * searchSettings;
@property(readonly) BOOL useSSL;
@property(retain) NSString * password;
@property(retain) NSString * username;
@property(readonly) NSString * hostname;
@property(readonly) NSString * accountDescription;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)accountDescription;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)hostname;
- (id)password;
- (id)title;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)description;
- (void)dealloc;
- (id)accountPersistentUUID;
- (BOOL)useSSL;

@end
