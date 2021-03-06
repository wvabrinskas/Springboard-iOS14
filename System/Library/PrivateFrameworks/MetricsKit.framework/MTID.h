/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, NSDictionary;


@protocol MTID <NSObject>
@property (nonatomic,copy,readonly) NSString * idNamespace; 
@property (nonatomic,readonly) long long idType; 
@property (nonatomic,copy,readonly) NSString * idString; 
@property (nonatomic,readonly) double lifespan; 
@property (nonatomic,copy,readonly) NSDate * effectiveDate; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isSynchronized; 
@property (nonatomic,copy,readonly) NSDictionary * metricsFields; 
@required
-(NSString *)idString;
-(long long)idType;
-(NSDate *)effectiveDate;
-(NSDate *)expirationDate;
-(BOOL)isSynchronized;
-(NSString *)idNamespace;
-(double)lifespan;
-(NSDictionary *)metricsFields;

@end

