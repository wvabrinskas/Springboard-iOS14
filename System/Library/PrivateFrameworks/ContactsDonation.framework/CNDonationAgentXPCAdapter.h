/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNDonationAgentAdapter.h>

@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newXPCConnection;
+(void)donateMeCardValues:(id)arg1 scope:(id)arg2 ;
+(void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 scope:(id)arg2 ;
+(void)fetchDonatedMeCardWithScope:(id)arg1 ;
+(void)meCardDonationsWithScope:(id)arg1 ;
+(void)rejectValueWithDonationIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)changeFromAccount:(id)arg1 toAccount:(id)arg2 scope:(id)arg3 ;
+(void)rejectValuesWithClusterIdentifier:(id)arg1 scope:(id)arg2 ;
+(void)removeAllRejectionsWithScope:(id)arg1 ;
-(id)donateMeCardValues:(id)arg1 ;
-(id)removeAllRejections;
-(id)rejectValuesWithClusterIdentifier:(id)arg1 ;
-(id)rejectValueWithDonationIdentifier:(id)arg1 ;
-(id)meCardDonations;
-(id)donatedMeCardEither;
-(id)fetchDonatedMeCard;
-(id)removeDonatedMeCardValuesForIdentifiers:(id)arg1 ;
-(id)changeFromAccount:(id)arg1 toAccount:(id)arg2 ;
@end

