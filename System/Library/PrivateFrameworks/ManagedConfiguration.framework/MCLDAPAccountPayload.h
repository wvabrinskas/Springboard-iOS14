/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>
#import <libobjc.A.dylib/MCPerAccountVPNPayloadProtocol.h>

@class NSString, NSArray, NSDictionary, NSNumber;

@interface MCLDAPAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	BOOL _useSSL;
	NSArray* _searchSettings;
	NSString* _accountPersistentUUID;
	NSString* _VPNUUID;
	NSString* _acAccountIdentifier;
	NSDictionary* _communicationServiceRules;
	NSNumber* _useSSLNum;

}

@property (nonatomic,readonly) NSNumber * useSSLNum;                                     //@synthesize useSSLNum=_useSSLNum - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountDescription;                     //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * hostname;                               //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * username;                                        //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (nonatomic,retain,readonly) NSArray * searchSettings;                          //@synthesize searchSettings=_searchSettings - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                              //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;                 //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,retain) NSString * acAccountIdentifier;                             //@synthesize acAccountIdentifier=_acAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;                             //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * VPNUUID;                                //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * mailAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * contactsAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * calendarAccountIdentifiers; 
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(NSString *)password;
-(NSString *)username;
-(id)restrictions;
-(NSString *)VPNUUID;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)hostname;
-(void)setUsername:(NSString *)arg1 ;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSString *)accountDescription;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSString *)acAccountIdentifier;
-(NSDictionary *)communicationServiceRules;
-(void)setAcAccountIdentifier:(NSString *)arg1 ;
-(NSArray *)contactsAccountIdentifiers;
-(BOOL)useSSL;
-(NSNumber *)useSSLNum;
-(NSString *)accountPersistentUUID;
-(void)setAccountPersistentUUID:(NSString *)arg1 ;
-(NSArray *)searchSettings;
@end
