/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject

@property (assign,nonatomic) NSString * contactIdentifier; 
@property (assign,nonatomic) BOOL hasPicture; 
@property (assign,nonatomic) NSString * classifiedPersonLocalIdentifierWithFaceModelID; 
@property (assign,nonatomic) double updateTimestamp; 
+(id)entityName;
-(id)cachedContact;
@end
