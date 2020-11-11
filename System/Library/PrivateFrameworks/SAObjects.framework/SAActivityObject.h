/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSDictionary, NSString, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) SAClientUserActivity * userActivity; 
@property (nonatomic,copy) NSString * visibility; 
+(id)activityObject;
+(id)activityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)visibility;
-(id)encodedClassName;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(NSDate *)startDate;
-(void)setVisibility:(NSString *)arg1 ;
-(SAClientUserActivity *)userActivity;
-(NSString *)type;
-(void)setUserActivity:(SAClientUserActivity *)arg1 ;
-(NSString *)streamType;
-(void)setStreamType:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
