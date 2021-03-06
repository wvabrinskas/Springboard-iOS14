/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) long long nextItemCount; 
@property (nonatomic,copy) NSNumber * preemptiveNowPlayingQueueDetailsTimeOut; 
@property (assign,nonatomic) long long previousItemCount; 
+(id)getNowPlayingQueueDetails;
+(id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(long long)nextItemCount;
-(void)setNextItemCount:(long long)arg1 ;
-(NSNumber *)preemptiveNowPlayingQueueDetailsTimeOut;
-(long long)previousItemCount;
-(void)setPreviousItemCount:(long long)arg1 ;
-(void)setPreemptiveNowPlayingQueueDetailsTimeOut:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
@end

