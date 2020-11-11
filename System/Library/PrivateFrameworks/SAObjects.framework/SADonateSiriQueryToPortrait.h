/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * originalQuery; 
@property (nonatomic,copy) NSString * qid; 
@property (assign,nonatomic) long long rank; 
@property (assign,nonatomic) double rankerConfidence; 
+(id)donateSiriQueryToPortrait;
+(id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)qid;
-(long long)rank;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)originalQuery;
-(void)setOriginalQuery:(NSString *)arg1 ;
-(double)rankerConfidence;
-(void)setRankerConfidence:(double)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setQid:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setRank:(long long)arg1 ;
@end
