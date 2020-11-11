/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CNContactsEnvironment, CoreTelephonyClient, TUCallProviderManager, NSObject, NSMapTable, NSString;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {

	CNContactsEnvironment* _environment;
	CoreTelephonyClient* _coreTelephonyClient;
	TUCallProviderManager* _callProviderManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _delegateToQueue;
	unsigned long long _dataSourceExclusions;

}

@property (assign,nonatomic) unsigned long long dataSourceExclusions;              //@synthesize dataSourceExclusions=_dataSourceExclusions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)badgeForText:(id)arg1 ;
+(id)badgeForSubscription:(id)arg1 ;
+(id)badgeForSenderIdentity:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(id)channelStringFromSenderIdentity:(id)arg1 ;
+(BOOL)deviceSupportsGemini;
-(void)subscriptionInfoDidChange;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeDelegate:(id)arg1 ;
-(id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithCallProviderManager:(id)arg1 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(id)init;
-(id)bestSubscriptionForContact:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)dataSourceExclusions;
-(BOOL)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4 ;
-(id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3 ;
-(id)badgeLabelForSenderIdentity:(id)arg1 error:(id*)arg2 ;
-(id)fetchedSenderIdentitiesWithError:(id*)arg1 ;
-(id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(void)danglingPlansDidUpdate:(id)arg1 ;
-(id)geminiResultForContact:(id)arg1 error:(id*)arg2 ;
-(BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2 ;
-(id)channelForContact:(id)arg1 error:(id*)arg2 ;
-(id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3 ;
-(void)setDataSourceExclusions:(unsigned long long)arg1 ;
-(id)badgeLabelForSubscription:(id)arg1 error:(id*)arg2 ;
-(id)channelForFavoritesEntry:(id)arg1 error:(id*)arg2 ;
-(id)bestSenderIdentityForContact:(id)arg1 error:(id*)arg2 ;
-(id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(BOOL)arg2 error:(id*)arg3 ;
@end
