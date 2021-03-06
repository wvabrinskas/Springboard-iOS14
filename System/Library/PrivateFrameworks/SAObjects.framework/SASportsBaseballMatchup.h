/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASportsMatchup.h>

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup

@property (nonatomic,copy) NSNumber * awayErrors; 
@property (nonatomic,copy) NSNumber * awayHits; 
@property (nonatomic,copy) NSNumber * balls; 
@property (nonatomic,copy) NSNumber * homeErrors; 
@property (nonatomic,copy) NSNumber * homeHits; 
@property (nonatomic,copy) NSString * inningStatus; 
@property (nonatomic,copy) NSNumber * onFirst; 
@property (nonatomic,copy) NSNumber * onSecond; 
@property (nonatomic,copy) NSNumber * onThird; 
@property (nonatomic,copy) NSNumber * outs; 
@property (nonatomic,copy) NSNumber * strikes; 
+(id)baseballMatchup;
+(id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)outs;
-(NSNumber *)balls;
-(id)encodedClassName;
-(NSNumber *)onFirst;
-(NSNumber *)onThird;
-(NSNumber *)strikes;
-(NSNumber *)awayHits;
-(NSNumber *)homeHits;
-(NSNumber *)onSecond;
-(void)setOuts:(NSNumber *)arg1 ;
-(NSNumber *)awayErrors;
-(void)setAwayErrors:(NSNumber *)arg1 ;
-(void)setAwayHits:(NSNumber *)arg1 ;
-(void)setBalls:(NSNumber *)arg1 ;
-(NSNumber *)homeErrors;
-(void)setHomeErrors:(NSNumber *)arg1 ;
-(void)setHomeHits:(NSNumber *)arg1 ;
-(NSString *)inningStatus;
-(void)setInningStatus:(NSString *)arg1 ;
-(void)setOnFirst:(NSNumber *)arg1 ;
-(void)setOnSecond:(NSNumber *)arg1 ;
-(void)setOnThird:(NSNumber *)arg1 ;
-(void)setStrikes:(NSNumber *)arg1 ;
@end

