/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData, NSDate;


@protocol FCAVAssetKeyType
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) BOOL isExpired; 
@required
-(BOOL)isExpired;
-(NSData *)data;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;

@end

